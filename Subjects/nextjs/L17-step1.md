# L17 1걸음: a 태그로 메뉴 만들기

app/layout.tsx 의 header 줄을 아래로 바꾸기

지금:

    <header className="p-10 border border-yellow-500">I'm visible everywhere</header>

바꿀 것:

    <header className="p-10 border border-yellow-500 flex gap-4">
      <a href="/">Home</a>
      <a href="/about">About</a>
      <a href="/about/projects">Projects</a>
    </header>

- a 태그 = HTML 기본 링크. 누르면 href 주소로 이동
- flex gap-4 = 메뉴를 가로로, 간격 두고 배치
