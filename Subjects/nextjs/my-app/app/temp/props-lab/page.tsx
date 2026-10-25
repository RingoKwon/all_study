function Box(info: { children: string }) {
  return <div className="border p-2 m-2">{info.children}</div>;
}
export default function Page() {
  return (
    <div>
      {Box({ children: "apple" })}
      <Box>apple</Box>
    </div>
  );
}
