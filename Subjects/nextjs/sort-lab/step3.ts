// step1: sort 가 a, b 를 어떻게 비교하는지 눈으로 보기
// 규칙: 음수면 a 가 왼쪽, 양수면 b 가 왼쪽, 0 이면 그대로
export {};

const words = ["banana", "apple", "cherry"];

console.log("시작 :", words);

const result = words.sort((a, b) => {
  console.log(`비교 : a=${a}, b=${b}  →  a - b = ${a.localeCompare(b)}`);
  return a.localeCompare(b); // 문자열 비교를 위해 localeCompare 사용
});

console.log("결과 :", result);
