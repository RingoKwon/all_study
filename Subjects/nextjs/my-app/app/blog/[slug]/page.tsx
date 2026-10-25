export default async function Blog(props: {
  params: Promise<{ slug: string }>;
}) {
  const p = await props.params;
  return <div>{p.slug}</div>;
}
