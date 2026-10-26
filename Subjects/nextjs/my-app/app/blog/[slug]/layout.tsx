import { notFound } from "next/navigation";
import { getPosts } from "@/lib/post";

export async function generateStaticParams() {
  const posts = await getPosts();
  return posts.map((post) => ({ slug: post.slug }));
}

// /blog/[slug] 아래 모든 페이지(page, comments)에 한 번에 적용되는 검사
export default async function BlogLayout(props: {
  children: React.ReactNode;
  params: Promise<{ slug: string }>;
}) {
  const p = await props.params;
  if (p.slug !== "first" && p.slug !== "second") {
    notFound();
  }
  return <>{props.children}</>;
}
