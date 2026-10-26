export default function AboutLayout(props: { children: React.ReactNode }) {
  return (
    <div className="prose dark:prose-invert">
      {props.children}
      <h2 className="mt-8 font-bold">You might also like</h2>
    </div>
  );
}
