// 예시 3: 예시 1 + 예시 2 합치기
// 주소: /temp/step3/apple → "주소에서 꺼낸 값: apple"
//
// Next 가 주소 뒷부분을 props.params 로 넘겨준다.
// 그런데 바로 값이 아니라 "상자(Promise)"에 담아서 준다.
// 그래서 예시 2처럼 await 로 꺼낸다.
//
// props.params 의 생김새:  상자 안에 { name: "apple" }
// 칸 이름 name 은 폴더 이름 [name] 에서 온다. ([slug] 였으면 slug)
//
// C로 치면: ./step3 apple  →  argv[1] == "apple"
export default async function Step3(props: {
  params: Promise<{ name: string }>;
}) {
  const p = await props.params; // 상자에서 꺼냄 → p = { name: "apple" }
  return <h1 className="text-xl">주소에서 꺼낸 값: {p.name}</h1>;
}
