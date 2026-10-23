// 주소: /temp
export default function TempHome() {
  return (
    <div>
      <h1 className="text-2xl mb-4">temp 예시 모음</h1>
      <ul className="list-disc pl-6">
        <li>
          <a className="underline" href="/temp/children">
            /temp/children
          </a>{" "}
          : children 예시 4가지
        </li>
        <li>
          <a className="underline" href="/temp/layout-demo">
            /temp/layout-demo
          </a>{" "}
          : 레이아웃이 감싸는지 확인
        </li>
      </ul>
    </div>
  );
}
