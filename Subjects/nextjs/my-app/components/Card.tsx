export default function Card(props: {
  children: React.ReactNode;
  highlight?: boolean;
}) {
  const cls = props.highlight
    ? "border border-yellow-400 rounded-md p-4"
    : "border border-gray-600 rounded-md p-4";

  return <div className={cls}>{props.children}</div>;
}
