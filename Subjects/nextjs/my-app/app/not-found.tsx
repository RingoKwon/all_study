import Link from "next/link";

export default function NotFound() {
  return (
    <div className="space-y-2">
      <h1 className="text-2xl font-bold">404 - 페이지를 찾을 수 없어요</h1>
      <Link href="/" className="underline">
        홈으로 가기
      </Link>
    </div>
  );
}
