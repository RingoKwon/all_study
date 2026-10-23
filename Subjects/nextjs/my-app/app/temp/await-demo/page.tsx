// 예시 2: async / await 만 (대괄호 폴더 없음)
// 주소: /temp/await-demo
//
// Promise = "나중에 값이 채워질 상자"
// await   = 상자가 채워질 때까지 기다렸다가 값을 꺼냄
// async   = 함수 안에서 await 를 쓰려면 함수 앞에 붙여야 하는 표시
//
// C로 치면:
//   char buf[100];
//   read(fd, buf, 100);   // 데이터가 올 때까지 여기서 멈춰서 기다림
//   printf("%s", buf);    // 다 온 다음에야 사용

// 2초 뒤에 "사과"가 채워지는 상자를 돌려주는 함수
function slowValue(): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => resolve("사과"), 2000);
  });
}

export default async function AwaitDemo() {
  const box = slowValue(); // 상자만 받음 (아직 비어 있음)
  const value = await box; // 2초 기다렸다가 꺼냄
  return (
    <div>
      <h1 className="text-xl">await 로 꺼낸 값: {value}</h1>
      <p>새로고침하면 화면이 2초 늦게 뜬다. 그게 await 가 기다린 시간.</p>
    </div>
  );
}
