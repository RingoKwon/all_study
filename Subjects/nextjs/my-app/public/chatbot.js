// L57 실습용 가짜 챗봇: 외부 서비스(채팅 위젯, 분석 도구) 스크립트를 흉내 냄
console.log("chatbot.js 로드됨:", new Date().toLocaleTimeString());
const box = document.createElement("div");
box.textContent = "💬 무엇을 도와드릴까요?";
box.style.cssText =
  "position:fixed;right:16px;bottom:16px;padding:12px 16px;border-radius:12px;background:#2563eb;color:white;font-size:14px;box-shadow:0 4px 12px rgba(0,0,0,.3)";
document.body.appendChild(box);
