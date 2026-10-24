# 단계 1 실습 모음 (나중에 몰아서 하기)

각 항목은 `my-app/app/page.tsx` 전체를 이렇게 바꿔 보는 실습이에요. 저장하고 브라우저에서 "결과"가 보이면 통과.

## 1. 컴포넌트 만들기 (L7 1걸음)

```tsx
function Card() {
  return <div>나는 카드</div>;
}

export default function Home() {
  const name = "ringo";
  return (
    <div className="p-20 bg-gray-800 text-white">
      Hello {name}
      <Card />
    </div>
  );
}
```
결과: 회색 박스 안에 `Hello ringo`와 `나는 카드`.

## 2. props로 값 넘기기 (L7)

```tsx
function Card(props) {
  return <div className="border p-4">{props.text}</div>;
}

export default function Home() {
  return (
    <div className="p-20">
      <Card text="첫 번째" />
      <Card text="두 번째" />
      <Card text="세 번째" />
    </div>
  );
}
```
결과: 테두리 박스 3개, 각각 다른 글자. (`props`에 빨간 밑줄이 생겨도 화면은 나와요. 타입은 나중에 같이 붙여요.)

## 3. children으로 내용물 감싸기 (L8)

```tsx
function Card(props) {
  return <div className="border p-4">{props.children}</div>;
}

export default function Home() {
  return (
    <div className="p-20">
      <Card>안녕</Card>
      <Card>
        바깥 카드
        <Card>안쪽 카드</Card>
      </Card>
    </div>
  );
}
```
결과: "안녕" 박스 하나, 그리고 박스 안에 박스가 든 중첩 모양.

## 4. 클릭 이벤트 (L9)

```tsx
"use client";

export default function Home() {
  function sayHello() {
    alert("Hello");
  }

  return <button onClick={sayHello}>눌러봐</button>;
}
```
결과: 버튼을 누르면 "Hello" 알림창.
추가 실험: (1) 맨 위 `"use client";`를 지우고 에러 화면 보기 (2) `onClick={sayHello()}`로 괄호를 붙여 보고 무슨 일이 생기는지 보기. 다 보면 원래대로.

## 5. useState로 화면 바꾸기 (L10)

먼저 실패 버전을 쳐 보고, 버튼을 눌러도 글자가 안 바뀌는 걸 확인하기.
```tsx
"use client";

export default function Home() {
  let label = "show";
  function toggle() {
    label = label === "show" ? "hide" : "show";
    console.log(label); // F12 콘솔에는 바뀐 값이 찍히지만 화면은 그대로
  }
  return <button onClick={toggle}>{label}</button>;
}
```
그다음 성공 버전으로 바꾸기.
```tsx
"use client";
import { useState } from "react";

export default function Home() {
  const [label, setLabel] = useState("show");

  function toggle() {
    setLabel(label === "show" ? "hide" : "show");
  }

  return <button onClick={toggle}>{label}</button>;
}
```
결과: 누를 때마다 show ↔ hide.

## 5-1. 더 쉬운 useState: 숫자 세기 (L10 보충)

```tsx
"use client";
import { useState } from "react";

export default function Home() {
  const [count, setCount] = useState(0);

  function plus() {
    setCount(count + 1);
  }

  return <button onClick={plus}>{count}</button>;
}
```
결과: 누를 때마다 0, 1, 2, 3...으로 늘어남.

## 6. 조건부 렌더링: 껐다 켜기 (L11)

```tsx
"use client";
import { useState } from "react";

export default function Home() {
  const [isVisible, setIsVisible] = useState(true);

  function toggle() {
    setIsVisible(!isVisible);
  }

  return (
    <div>
      <button onClick={toggle}>토글</button>
      {isVisible && <p>나 보여요</p>}
    </div>
  );
}
```
결과: 토글 버튼을 누를 때마다 "나 보여요"가 사라졌다 나타남.
