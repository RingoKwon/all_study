# sort-lab

`const sorted = [...posts].sort((a, b) => b.frontmatter.date.localeCompare(a.frontmatter.date));`
이 한 줄을 조각내서 이해하는 실습.

실행: `cd ~/AI/Programming/AllStudy/Subjects/nextjs/sort-lab && node step1.ts`

0. step0: 콜백 기초 (함수 담기, 넘기기, 남이 부르기, 인자와 리턴값)
1. step1: 숫자 sort, 비교 함수가 a, b 를 받는 모습 보기 (a - b)
2. step2: b - a 로 바꿔서 뒤집기
3. step3: 글자 비교 localeCompare
4. step4: 객체 배열을 칸(date)으로 정렬
5. step5: [...] 복사가 왜 필요한지
