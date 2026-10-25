export default function AboutLayout(props: { children: React.ReactNode }) {
  return (
    <div>
      {props.children}
      <h2 className="mt-8 font-bold">You might also like</h2>
    </div>
  );
}
