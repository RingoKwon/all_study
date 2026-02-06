"use client";

import { useState } from "react";

export default function Home() {
  const [count, setCount] = useState(0);

  return (
    <div className="flex min-h-screen items-center justify-center">
      <div className="max-w-2xl px-6">
        <h1 className="text-4xl font-bold mb-8">Hello Ringo!</h1>
        <h2 className="text-2xl font-semibold mb-4">
          3 Good Things About Starting a Project with Claude Code
        </h2>
        <ol className="list-decimal list-inside space-y-3 text-lg">
          <li>Instant scaffolding — generate boilerplate, configs, and project structure in seconds</li>
          <li>Context-aware coding — Claude understands your entire codebase and makes consistent changes across files</li>
          <li>Rapid iteration — describe what you want in plain language and see working code immediately</li>
        </ol>
        <button
          onClick={() => setCount(count + 1)}
          className="mt-8 px-6 py-3 bg-blue-600 text-white rounded-lg text-lg font-semibold hover:bg-blue-700 active:bg-blue-800 transition-colors"
        >
          Clicked: {count}
        </button>
      </div>
    </div>
  );
}
