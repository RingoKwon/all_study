export default function Card(props: { children: React.ReactNode }) {
  return (
    <div className="border border-gray-600 rounded-md p-4">
      {props.children}
    </div>
  );
}
