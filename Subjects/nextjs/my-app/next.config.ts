import type { NextConfig } from "next";

const nextConfig: NextConfig = {
  /* config options here */
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

export default nextConfig;
