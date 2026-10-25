import { Suspense } from "react";
import Health from "./Health";

// L45 실습: 에러 화면에서 reset 과 retry 버튼 비교하기
export default function RetryLab() {
  return (
    <div>
      <h1>retry-lab</h1>
      <Suspense fallback={<p>불러오는 중...</p>}>
        <Health />
      </Suspense>
    </div>
  );
}
