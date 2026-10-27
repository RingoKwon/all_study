type Post = { id: number; title: string; tags: string[] };
const posts: Post[] = [
  { id: 1, title: "Hello Next", tags: ["react", "nextjs"] },
  { id: 2, title: "Neovim Setup", tags: [] },
  { id: 0, title: "draft", tags: ["wip"] },
];
export function filterPosts(list: Post[], query: string): Post[] {
  return list.filter(
    (p: Post) =>
      p.title.toLowerCase().includes(query.toLowerCase()) &&
      p.tags.length > 0 &&
      p.id !== 0,
  );
}
const result = filterPosts(posts, "next");
console.log("filtered", result.map((p: Post) => p.title).join(", "));
