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
  partialPrefetching: true,
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
