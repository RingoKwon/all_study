import Link from "next/link";

export default function BlogNotFound() {
  return (
    <div className="space-y-2">
      <h1 className="text-2xl font-bold">그런 글은 없어요</h1>
      <p>이런 글은 어때요?</p>
      <ul className="list-disc pl-6">
        <li>
          <Link href="/blog/first" className="underline">
            first
          </Link>
        </li>
        <li>
          <Link href="/blog/second" className="underline">
            second
          </Link>
        </li>
      </ul>
    </div>
  );
}
