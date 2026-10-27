import { Suspense } from "react";
import { getPosts } from "@/lib/post";
import Link from "next/link";

// ① 페이지: searchParams 를 받아서 PostList 에 그대로 넘김 (async 아님!)
export default function Blog(props: {
  searchParams: Promise<{ tags?: string }>;
}) {
  return (
    <div>
      <h1>Blog</h1>
      <Suspense fallback={<p>Loading...</p>}>
        <PostList searchParams={props.searchParams} />
      </Suspense>
    </div>
  );
}

// ② 목록: 주소의 tags 를 꺼내서 글을 걸러 그림
async function PostList(props: { searchParams: Promise<{ tags?: string }> }) {
  const { tags } = await props.searchParams;
  const allPosts = await getPosts();

  // ③ tags 가 있으면 그 태그가 들어 있는 글만, 없으면 전부
  const posts = tags
    ? allPosts.filter((post) => post.frontmatter.tags.includes(tags))
    : allPosts;
  const sorted = [...posts].sort((a, b) =>
    b.frontmatter.date.localeCompare(a.frontmatter.date),
  );

  return (
    <ul>
      {posts.map((post) => (
        <li key={post.slug}>
          <div>---</div>
          <Link href={`/blog/${post.slug}`}>{post.frontmatter.title}</Link>
          <div>{post.frontmatter.date}</div>
          <div>{post.frontmatter.tags.join(", ")}</div>
        </li>
      ))}
    </ul>
  );
}
