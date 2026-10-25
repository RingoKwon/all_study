export async function generateMetadata(props: {
  params: Promise<{ slug: string }>;
}) {
  const p = await props.params;
  return { title: `hello ${p.slug}` };
}
export default async function Blog(props: {
  params: Promise<{ slug: string }>;
}) {
  const p = await props.params;
  return <div>{p.slug}</div>;
}
