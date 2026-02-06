export default function Home() {
  return (
    <div className="flex min-h-screen items-center justify-center">
      <div className="max-w-2xl px-6">
        <h1 className="text-4xl font-bold mb-8">Hello Ringo!</h1>
        <h2 className="text-2xl font-semibold mb-4">
          5 Good Things About Starting a Project with Claude Code
        </h2>
        <ol className="list-decimal list-inside space-y-3 text-lg">
          <li>Instant scaffolding — generate boilerplate, configs, and project structure in seconds</li>
          <li>Context-aware coding — Claude understands your entire codebase and makes consistent changes across files</li>
          <li>Built-in best practices — get proper TypeScript types, error handling, and security patterns from the start</li>
          <li>Rapid iteration — describe what you want in plain language and see working code immediately</li>
          <li>Learning while building — Claude explains its decisions so you grow as a developer along the way</li>
        </ol>
      </div>
    </div>
  );
}
