// db.json 의 health.ok 가 false 면 에러를 던진다
export default async function Health() {
  const res = await fetch("http://localhost:3001/health");
  const health = await res.json();
  if (!health.ok) throw new Error("서버 상태 나쁨");
  return <p className="text-green-500">서버 상태 좋음 ✅</p>;
}
