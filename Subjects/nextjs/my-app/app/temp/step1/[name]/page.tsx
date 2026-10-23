// 예시 1: 대괄호 폴더만 (값 꺼내기 없음)
// 폴더 경로: app/temp/step1/[name]/page.tsx
//
// 주소 /temp/step1/apple, /temp/step1/banana, /temp/step1/아무거나
// 전부 이 파일 하나가 보여 준다.
//
// C로 치면:
//   if (strcmp(url, "about") == 0) ...  ← 일반 폴더 (딱 그 이름만)
//   default: ...                         ← 대괄호 폴더 (뭐가 와도 받음)
export default function Step1() {
  return <h1 className="text-xl">대괄호 폴더 페이지 (주소 뒷부분이 뭐든 이 화면)</h1>;
}
