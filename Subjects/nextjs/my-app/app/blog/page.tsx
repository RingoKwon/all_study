import { getPosts } from "@/lib/post";
import Link from "next/link";

export default async function Blog() {
  const posts = await getPosts();
  return (
    <div>
      <h1>Blog</h1>
      <ul>
        {posts.map((post) => (
          <li key={post.slug}>
            <Link href={`/blog/${post.slug}`}>{post.frontmatter.title} </Link>
			<div>{post.frontmatter.date}</div>
          </li>
        ))}
      </ul>
    </div>
  );
}
