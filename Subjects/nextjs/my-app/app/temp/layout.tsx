// /temp 아래 모든 페이지를 감싸는 레이아웃
// /temp, /temp/children, /temp/layout-demo 어디로 가든 위에 노란 박스가 보인다
// children 자리에 "주소에 맞는 page.tsx"가 들어온다
export default function TempLayout(props: { children: React.ReactNode }) {
  return (
    <div className="p-6">
      <header className="p-4 mb-6 border border-yellow-500">
        temp 레이아웃의 헤더 (temp 아래 모든 페이지에 보임)
      </header>
      {props.children}
    </div>
  );
}
