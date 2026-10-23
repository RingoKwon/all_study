// 주소: /temp/layout-demo
// 이 파일에는 노란 헤더 코드가 없다. 그런데 화면엔 보인다
// temp/layout.tsx가 이 페이지를 children으로 받아서 감쌌기 때문
export default function LayoutDemo() {
  return (
    <div>
      <h1 className="text-2xl">layout-demo 페이지</h1>
      <p>이 파일엔 헤더가 없는데 위에 노란 박스가 보이면, 레이아웃이 감싼 것.</p>
    </div>
  );
}
