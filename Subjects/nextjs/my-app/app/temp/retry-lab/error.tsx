"use client";

export default function Error(props: { reset: () => void; retry: () => void }) {
  return (
    <div className="text-red-500 space-y-2">
      <p>에러가 났어요</p>
      <button className="border px-2 mr-2" onClick={props.reset}>
        reset (화면만 다시)
      </button>
      <button className="border px-2" onClick={props.retry}>
        retry (서버에서 다시)
      </button>
    </div>
  );
}
