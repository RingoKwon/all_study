# L35 1단계: 메뉴를 Navigation 컴포넌트로 빼기

## ① 새 파일: my-app/components/Navigation.tsx

```tsx
import Link from "next/link";

export default function Navigation() {
  return (
    <nav className="flex gap-4">
      <Link href="/">Home</Link>
      <Link href="/about">About</Link>
      <Link href="/about/projects">Projects</Link>
    </nav>
  );
}
```

## ② app/layout.tsx 수정

맨 위에 추가:

```tsx
import Navigation from "@/components/Navigation";
```

header 안의 Link 3줄을 지우고 그 자리에:

```tsx
<header className="p-10 border border-yellow-500 flex gap-4">
  <Navigation />
  <Counter></Counter>
</header>
```

layout에서 더 이상 Link를 안 쓰니 `import Link from "next/link";` 줄은 지워도 된다.
