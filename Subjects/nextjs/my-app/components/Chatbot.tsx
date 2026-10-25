import Script from "next/script";

// 외부 스크립트는 next/script 로 넣는다.
// strategy="lazyOnload": 페이지가 다 뜨고 브라우저가 한가해진 뒤에 받아서 실행
export default function Chatbot() {
  return <Script src="/chatbot.js" strategy="lazyOnload" />;
}
