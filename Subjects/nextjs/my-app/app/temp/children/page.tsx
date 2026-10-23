// 주소: /temp/children

// 예시 1~3에서 쓰는 상자. 태그 사이 내용(children)을 테두리 안에 그린다
function Box(props: { children: React.ReactNode }) {
  console.log("Box가 받은 props:", props); // 터미널에 찍힘
  return <div className="border border-gray-500 p-3 my-2">{props.children}</div>;
}

// 예시 4에서 쓰는 상자. 제목(title)과 본문(children)을 다른 자리에 그린다
function TitledBox(props: { title: string; children: React.ReactNode }) {
  console.log("TitleBox props:", props);
  return (
    <div className="border border-blue-500 p-3 my-2">
      <h2 className="font-bold">{props.title}</h2>
      <div>{props.children}</div>
    </div>
  );
}

export default function ChildrenExamples() {
  return (
    <div>
      <h1 className="text-2xl mb-4">children 예시</h1>

      <h2 className="mt-6 text-lg">1. 태그로 부르기 vs 함수로 부르기 (결과가 같다)</h2>
      <Box>태그로 부름</Box>
      {Box({ children: "함수로 부름" })}
      <Box>dfdf</Box>

      <h2 className="mt-6 text-lg">2. 사이에 여러 개를 넣으면 children이 배열이 된다</h2>
      <Box>
        첫째 글자
        <b> 굵은 둘째</b>
        <Box>안쪽 상자(셋째)</Box>
      </Box>

      <h2 className="mt-6 text-lg">3. 아무것도 안 넣으면 children이 비어 있다</h2>
      <Box>{null}</Box>

      <h2 className="mt-6 text-lg">4. 자리를 나누고 싶으면 이름 붙인 칸(title)을 추가한다</h2>
      <TitledBox title="공지">내일 휴무입니다</TitledBox>
      <TitledBox title="할 일">
        <ul className="list-disc pl-6">
          <li>L16 레이아웃</li>
          <li>L17 링크</li>
        </ul>
      </TitledBox>
    </div>
  );
}
