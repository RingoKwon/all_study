import { MDXRemote } from "next-mdx-remote/rsc";
import { loadPost, getPost } from "@/lib/post";

export async function generateMetadata(props: {
  params: Promise<{ slug: string }>;
}) {
  const p = await props.params;
  const { frontmatter } = await getPost(p.slug);
  return { title: frontmatter.title, description: frontmatter.description };
}
export default async function Blog(props: {
  params: Promise<{ slug: string }>;
}) {
  const p = await props.params;
  const source = await loadPost(p.slug);
  return (
    <article className="prose dark:prose-invert">
      <MDXRemote source={source} options={{parseFrontmatter: true}}/>
    </article>
  );
}
