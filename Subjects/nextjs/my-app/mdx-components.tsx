import type { MDXComponents } from "mdx/types";

// @next/mdx 를 App Router 에서 쓰려면 이 파일이 꼭 있어야 함 (지금은 비어 있음)
const components: MDXComponents = {};

export function useMDXComponents(): MDXComponents {
  return components;
}
