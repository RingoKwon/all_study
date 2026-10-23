# L17 3걸음: a 태그를 Link로 바꾸기

## ① app/layout.tsx 맨 위 import 들 아래에 한 줄 추가

    import Link from "next/link";

## ② header 안의 메뉴 3줄을 이걸로 바꾸기

    <Link href="/">Home</Link>
    <Link href="/about">About</Link>
    <Link href="/about/projects">Projects</Link>

바뀐 건 딱 두 가지:
- 여는 태그의 a → Link
- 닫는 태그의 /a → /Link
href 는 그대로.
