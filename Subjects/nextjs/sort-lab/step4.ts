// step1: sort 가 a, b 를 어떻게 비교하는지 눈으로 보기
// 규칙: 음수면 a 가 왼쪽, 양수면 b 가 왼쪽, 0 이면 그대로
export {};

const posts = [
  { title: "first", date: "2026-10-20" },
  { title: "second", date: "2026-10-01" },
  { title: "thrid", date: "2026-10-25" },
];

console.log("시작 :", posts);

const result = posts.sort((a, b) => {
  console.log(`비교 : a=${a.date}, b=${b.date}  →  a - b = ${a.date.localeCompare(b.date)}`);
  return a.date.localeCompare(b.date);
});

console.log("결과 :", result);
console.log("원본 :", posts);
posts.sort((a, b) => b.date.localeCompare(a.date)); // 원본 배열 자체를 정렬
console.log("결과 :", result);
console.log("원본 :", posts);

