// 주소: /temp
import Link from "next/link";

export default function TempHome() {
  return (
    <div>
      <h1 className="text-2xl mb-4">temp 예시 모음</h1>
      <ul className="list-disc pl-6 space-y-1">
        <li>
          <Link className="underline" href="/temp/children">/temp/children</Link>{" "}
          : children 예시 4가지
        </li>
        <li>
          <Link className="underline" href="/temp/layout-demo">/temp/layout-demo</Link>{" "}
          : 레이아웃이 감싸는지 확인
        </li>
        <li>
          <Link className="underline" href="/temp/step1/apple">/temp/step1/apple</Link>,{" "}
          <Link className="underline" href="/temp/step1/banana">/temp/step1/banana</Link>{" "}
          : 예시 1. 대괄호 폴더 (둘 다 같은 화면)
        </li>
        <li>
          <Link className="underline" href="/temp/await-demo">/temp/await-demo</Link>{" "}
          : 예시 2. async / await (2초 기다림)
        </li>
        <li>
          <Link className="underline" href="/temp/step3/apple">/temp/step3/apple</Link>,{" "}
          <Link className="underline" href="/temp/step3/banana">/temp/step3/banana</Link>{" "}
          : 예시 3. 1 + 2 합치기 (주소 값을 화면에)
        </li>
      </ul>
    </div>
  );
}
