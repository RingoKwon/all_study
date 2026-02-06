export default async function NoteEditor({ params }: { params: Promise<{ id: string }> }) {
  const { id } = await params;

  return (
    <div className="flex min-h-screen items-center justify-center">
      <h1 className="text-4xl font-bold">Note Editor — {id}</h1>
    </div>
  );
}
