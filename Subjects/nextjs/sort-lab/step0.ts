// step0: 콜백 기초. 함수를 "값"처럼 다루기
// 실행: node step0.ts

// 0-1. 함수를 변수에 담고, 부르기
function sayHello() {
  console.log("안녕");
}

const f = sayHello; // 괄호 없음: 함수를 "담기"만 함

console.log("--- 담기만 한 직후 ---");
f(); // 괄호 있음: 함수를 "부르기"
