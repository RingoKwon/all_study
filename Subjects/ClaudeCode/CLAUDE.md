# CLAUDE.md

We're building the app described in @SPEC.MD. Read that tile for general architecturel tasks or to double-check the exact database structure, tech stack or application architecture.

Keep your relies extremely concise and focus on conveying the key information. No unnecessary fluff, no long code snippets.

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project

Note-taking web app where authenticated users create, edit, delete, and publicly share rich-text notes. Located in `starting-project/`.

## Commands

All commands run from `starting-project/`:

```bash
bun run dev        # Start dev server (http://localhost:3000)
bun run build      # Production build
bun run start      # Start production server
bun run lint       # ESLint (eslint-config-next with core-web-vitals + typescript)
```

## Tech Stack

- **Runtime:** Bun
- **Framework:** Next.js 16 (App Router)
- **Language:** TypeScript (strict mode)
- **Styling:** Tailwind CSS v4 (via `@tailwindcss/postcss`)
- **Rich Text:** TipTap (StarterKit) — content stored as JSON in DB
- **Auth:** better-auth (email/password)
- **Database:** SQLite via Bun's built-in SQLite client, raw SQL queries
- **Validation:** Zod

## Architecture

- **App Router:** `app/` directory with server components for data fetching, client components for interactivity (TipTap editor, forms)
- **API Layer:** Route handlers at `app/api/.../route.ts` for notes CRUD and sharing
- **Data Layer:** `lib/db.ts` for SQLite connection singleton and query helpers; `lib/notes.ts` for note repository functions. All note queries enforce `user_id` scoping.
- **Auth:** better-auth integrated into Next.js — middleware + server helpers for session. Env vars: `BETTER_AUTH_SECRET`, `DB_PATH` (see `.env.example`)
- **DB File:** `data/app.db` (SQLite)
- **Path alias:** `@/*` maps to project root

## Key Routes (from SPEC.MD)

- `/` — Landing page
- `/dashboard` — Authenticated note list
- `/notes/[id]` — Note editor (TipTap)
- `/p/[slug]` — Public read-only note view
- `/api/notes` — Notes CRUD endpoints
- `/api/notes/:id/share` — Toggle public sharing
- `/api/public-notes/:slug` — Public note read access

## Database Schema

Auth tables (`user`, `session`, `account`, `verification`) managed by better-auth. App table:

- `notes` — `id`, `user_id`, `title`, `content_json` (TipTap JSON), `is_public`, `public_slug`, `created_at`, `updated_at`

## Fonts

Uses Geist and Geist Mono via `next/font/google`, exposed as CSS variables `--font-geist-sans` and `--font-geist-mono`.
