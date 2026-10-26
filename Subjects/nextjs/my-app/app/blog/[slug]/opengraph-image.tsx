import { ImageResponse } from "next/og";

// 링크 미리보기 이미지 크기 (카톡, 슬랙, 트위터 등이 쓰는 표준 크기)
export const size = { width: 1200, height: 630 };
export const contentType = "image/png";

// /blog/first 를 공유하면 "first" 가 박힌 PNG 를 자동으로 만들어 줌
export default async function Image(props: {
  params: Promise<{ slug: string }>;
}) {
  const p = await props.params;
  return new ImageResponse(
    (
      <div
        style={{
          width: "100%",
          height: "100%",
          display: "flex",
          flexDirection: "row",
          alignItems: "center",
          justifyContent: "center",
          background: "#111827",
          color: "white",
        }}
      >
        <div style={{ fontSize: 40, opacity: 0.6 }}>Ringo Blog</div>
        <div style={{ fontSize: 200, fontWeight: 700 }}>{p.slug}</div>
      </div>
    ),
    size
  );
}
