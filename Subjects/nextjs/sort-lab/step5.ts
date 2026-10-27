// step5: [...posts] 복사가 왜 필요한지
// 규칙: 실행 전에 "예측:" 줄을 먼저 채우고, node step5.ts 로 확인
export {};

// --- 1. 이름만 하나 더 붙이면? (C: int *b = a;)
const a = [3, 1, 2];
const b = a;
b.sort();
// 예측: a 는 ?  b 는 ?
console.log("1. a =", a, " b =", b, " 같은 놈인가?", a === b);

// --- 2. [...] 로 새 배열을 만들면? (C: memcpy 로 다른 메모리에 복사)
const c = [3, 1, 2];
const d = [...c];
d.sort();
// 예측: c 는 ?  d 는 ?
console.log("2. c =", c, " d =", d, " 같은 놈인가?", c === d);

// --- 3. [...] 가 하는 일을 눈으로 보기
const e = [10, 20];
// 예측: 아래 두 줄은 각각 뭐가 찍힐까?
console.log("3-1.", [e]);
console.log("3-2.", [...e]);
console.log("3-3.", [0, ...e, 99]);

// --- 4. page.tsx 상황 재현
const posts = [
  { title: "first", date: "2026-10-20" },
  { title: "second", date: "2026-10-01" },
  { title: "third", date: "2026-10-25" },
];
const sorted = [...posts].sort((x, y) => y.date.localeCompare(x.date));
// 예측: posts 순서는 바뀌었을까?
console.log("4. posts  :", posts.map((p) => p.title));
console.log("   sorted :", sorted.map((p) => p.title));

// --- 5. 숙제: 4번에서 [...] 를 지우고 다시 실행. posts 가 어떻게 되는지 적기
// 그리고 page.tsx 에서 posts 가 바뀌면 누가 곤란해질지 한 줄로 쓰기
