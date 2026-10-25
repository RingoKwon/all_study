export default async function Comments(props: {
  params: Promise<{ slug: string }>;
}) {
  const p = await props.params;
  return <h1>댓글 페이지{p.slug}</h1>;
}
