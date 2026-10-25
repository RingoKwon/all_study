async function Comments1(props: { params: Promise<{ slug: string }> }) {
  console.log(props.params);
  const p = await props.params;
  console.log(p.slug + "comment");
}

Comments1({ params: new Promise((resolve) => resolve({ slug: "hello" })) });
