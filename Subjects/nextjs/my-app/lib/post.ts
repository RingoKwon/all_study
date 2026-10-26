import { readFile, readdir } from "fs/promises";
import { compileMDX } from "next-mdx-remote/rsc";

export async function loadPost(slug: string) {
  "use cache"
  return await readFile(`${process.cwd()}/content/${slug}.mdx`, "utf-8");
}

export async function getPost(slug: string) {
  const source = await loadPost(slug);
  return await compileMDX<{ title: string; description: string; date: string }>({
    source,
    options: { parseFrontmatter: true },
  });
}

export async function getPosts() {
  "use cache"
  const files = await readdir(`${process.cwd()}/content`);
  const posts = [];
  for (const file of files) {
    if (!file.endsWith(".mdx")) continue;
    const slug = file.replace(".mdx", "");
    const { frontmatter } = await getPost(slug);
    posts.push({ slug, frontmatter });
  }
  return posts;
}
