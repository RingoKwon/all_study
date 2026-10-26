import type { NextConfig } from "next";
import createMDX from "@next/mdx";

const nextConfig: NextConfig = {
  /* config options here */
  // L64: .md / .mdx 파일도 페이지로 쓸 수 있게
  pageExtensions: ["js", "jsx", "md", "mdx", "ts", "tsx"],
  experimental: {
    agentFeedback: true,
  },
  // L53 화질 비교용: Next 16 은 기본으로 quality 75 만 허용
  images: {
    qualities: [50, 75, 100],
  },
  cacheComponents: true,
  // L72: 끔. 켜 두면 params 를 Suspense 밖에서 읽을 때마다 "instant" 에러가 남 (강의 범위 밖 최적화 기능)
  // partialPrefetching: true,
  turbopack: {
    rules: {
      // Tailwind는 globals.css에만 적용 (*.css 전체에 걸면 .module.css가 일반 CSS로 바뀌어 styles.link가 비어 버림)
      "globals.css": {
        loaders: ["@tailwindcss/turbopack"],
        as: "*.css",
      },
    },
  },
};

// L64: MDX 를 읽을 수 있게 nextConfig 를 한 번 감싸서 내보냄
const withMDX = createMDX({});

export default withMDX(nextConfig);
