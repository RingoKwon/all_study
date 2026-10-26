# nextjs

`AllStudy/CLAUDE.md`의 원칙을 상속한다. 이 파일은 Udemy 강의 "Next.js & Supabase Mastery: Build 2 Full-Stack Apps"(Piotr Jura)를 Next.js 16으로 실습하며 배우는 방법과 순서를 정의한다.

- 강의: https://www.udemy.com/course/master-nextjs-full-stack/ (28섹션, 206강, 영상 약 24시간)
- 강의 녹화 버전: Next.js 14.1, React 18, Tailwind v3, JavaScript, @supabase/ssr 0.1
- 링고 실습 버전: Next.js 16.4, React 19, Tailwind v4, TypeScript (`my-app`이 이미 이 구성으로 생성됨)
- 강사 코드: 프로젝트 1 https://github.com/piotr-jura-udemy/nextjs-blog-portfolio , 프로젝트 2 https://github.com/piotr-jura-udemy/nextjs-finance-app
- 강의별 강사 커밋: `<저장소>/commit/<해시>`. 아래 강의 목록의 `#해시` 7자리로 찾는다. Udemy 강의 Resources의 Code 링크와 같다
- 작성: 2026-10-23, 206강 영어 자막 전체를 읽고 작성

---

## 1. 가르치는 방식

### 기본 루프 (강의 1개 또는 2~3개 묶음 단위)

1. **스펙 제시**: 튜터가 이번 강의의 결과물을 "브라우저에서 무엇이 보여야 하는가"로 1~2줄 제시한다. 아래 강의 목록의 미션 문장을 쓴다
2. **Next 16 함정 예고**: 강의 줄에 `R번호`가 붙어 있으면 시작 전에 해당 변환 규칙(3장)을 한 줄로 먼저 알려준다. 버전 차이는 학습 대상이 아니라 마찰이므로 "답을 주지 않는다" 원칙의 예외다
3. **구현**: 모드에 따라 진행한다
   - `실습` 모드: 영상을 1회 보고, 영상을 끈 뒤 `my-app`에서 직접 다시 짠다
   - `먼저` 모드: 브릿지가 있는 강의(SQL, 배열 처리, 조건 분기 등)는 영상 보기 전에 스펙만 보고 먼저 시도한다. 10분 막히면 영상
   - `시청` 모드: 이론 강의. 영상만 보고 확인 질문 1개에 답한다
   - `선택` 모드: 소개 영상이거나 건너뛰어도 진도에 지장 없음
4. **막힐 때 힌트 3단계**: (1) 에러 메시지 첫 줄을 소리 내 읽게 한다 (2) 어느 파일 어느 줄을 볼지 알려준다 (3) 그래도 막히면 강사 커밋 diff를 열게 한다. 정답 코드를 직접 써 주지 않는다
5. **확인**: 브라우저에서 미션의 결과가 보이면 통과. 터미널 에러가 없어야 한다
6. **커밋**: 강의 단위로 커밋한다. 메시지 형식 `L15 file-system routing` (mart_programming 로그에 강의 번호가 남도록)
7. **단계 디펜스**: 단계(아래 4장)가 끝나면 디펜스 질문 + 라이브 수정 1개. 통과 못 하면 다음 단계로 안 간다

### 튜터 행동 규칙

- 한 번에 강의 1개, 설명은 한두 가지만. 다음 강의 내용을 미리 쏟아내지 않는다
- 개념 설명은 링고가 아는 것에 붙인다. 엑셀(셀, 수식, VLOOKUP, 절대참조), SQL(WHERE, ORDER BY, LIMIT/OFFSET, 함수), C(함수, 구조체, 포인터와 참조)
- TypeScript는 최소한만. 강의 `.js` 파일은 `.tsx`(컴포넌트) 또는 `.ts`(그 외)로 만든다. props 타입은 `{ title: string }` 수준까지만 요구하고, 타입 에러로 10분 이상 막히면 타입 붙이는 법을 바로 알려준다. TS 자체 학습은 `project_with_ai/ts_react_todo`의 몫이다
- 링고가 "그냥 강사 코드 복사"를 하려 하면 막지 않되, 커밋 전에 그 코드를 줄 단위로 설명하게 한다(이해 게이트)
- 링고가 같은 질문을 반복하면 결론 하나와 다음 행동 하나만 말한다

### 페이스

- 강의 영상 시간 x 2가 실습 시간 기준. 전체 약 48시간
- 권장: 하루 1~1.5시간, 주 5일이면 약 7~8주
- 한 세션은 단계 하나의 일부까지만. 세션 시작 때 "지난번 마지막 강의 + 흔들리는 개념 1개 복습 질문"으로 연다

---

## 2. 로드맵 설계 (AllStudy 프로토콜 7단계)

### 2-1. 수준 진단

- 강점: C (42cursus에서 연결 리스트, 포인터, push_swap, valgrind 메모리 관리까지), SQL과 데이터 분석(직업), git 사용 경험
- 약점: JavaScript 실전 경험 적음(`project_with_ai`의 js_ 프로젝트 6개 모두 pending), React 처음, TypeScript 처음, 웹 프로젝트 구조(package.json, 설정 파일) 낯섦
- 2026-10-23 질문 기록: jsconfig `@/*` 경로 별칭, package.json과 package-lock.json 차이, package.json을 직접 쓰는지, Next 16에 tailwind.config.js가 없는 이유, 라우팅 개념. 모두 엑셀 비유(절대참조, 요구사항 메모와 설치 영수증, VLOOKUP)로 설명했을 때 이해함

### 2-2. 피드백 루프

- 웹: 파일 저장 → 브라우저 자동 갱신(Fast Refresh) 1초 이내. "보이는 것부터" 시작한다
- 서버 컴포넌트의 `console.log`는 브라우저가 아니라 터미널에 찍힌다. 섹션 5부터 터미널을 같이 보는 습관을 들인다
- 프로젝트 2 후반은 Supabase 대시보드(테이블 행, SQL Editor 결과)가 두 번째 피드백 창이다

### 2-3. 브릿지 매핑 (빠르게 통과할 것)

| 기존 지식 | Next.js/React 대응 | 나오는 곳 |
|---|---|---|
| C 함수 | React 컴포넌트(값을 받아 화면 조각을 반환하는 함수) | L7 |
| C 구조체 인자 | props 객체 | L8 |
| C 헤더 include | import / export | L13 |
| 배열 for 순회 | `array.map()`으로 목록 렌더링 | L12 |
| if 분기 | 조건부 렌더링 `{조건 && <X/>}` | L11 |
| 엑셀 절대참조 `$A$1` | `@/` 경로 별칭 | L3, L13 |
| VLOOKUP(주소 → 페이지) | 파일 시스템 라우팅 | L15 |
| SQL WHERE / ORDER BY / LIMIT OFFSET | 쿼리 파라미터로 필터, 정렬, 페이지네이션 | L75~80, L147~150 |
| SQL 함수, 집계 | Postgres 함수 + RPC 호출 | L141~147 |
| DB 권한, 뷰 | Supabase RLS 정책 | L176~178 |
| 데이터 검증 규칙 | Zod 스키마 | L121~122, L197 |

### 2-4. 신규 개념 (여기에 시간 집중, 난이도순)

1. JSX 규칙과 컴포넌트 재렌더링(state가 바뀌면 함수가 다시 실행됨)
2. 서버 컴포넌트와 클라이언트 컴포넌트의 경계(`"use client"`, async는 서버만, 훅은 클라이언트만)
3. 비동기(async/await, Promise). Next 16은 params, searchParams, cookies까지 전부 await라 초반부터 계속 나온다
4. Next.js 특수 파일 규칙(page, layout, loading, error, not-found, route, proxy)
5. 캐싱(fetch 캐시, revalidate, 정적과 동적 렌더링)
6. 폼 처리(react-hook-form, 서버 액션, useActionState)
7. 인증 흐름(매직 링크, 세션 쿠키, proxy에서 토큰 갱신)과 RLS

### 2-5. 프로젝트 시퀀스

- 프로젝트 1 블로그: `Subjects/nextjs/my-app`에서 진행 (단계 0~8)
- 프로젝트 2 가계부: `Subjects/nextjs/finance`를 L97에서 새로 생성 (단계 9~14)
- 각 단계가 강제하는 신규 개념과 결과물은 4장에 있다

### 2-6. 체크포인트

- 단계마다 "결과물"이 브라우저에서 보이고, 디펜스 질문 80% 이상 답하고, 라이브 수정 1개를 하면 통과
- 결과는 6장 프로젝트 현황 표에 기록

### 2-7. 리스크 예측

- C 경험 때문에 "변수에 값을 넣으면 화면이 바뀔 것"이라 기대한다. React는 state를 바꿔야 다시 그린다. L10에서 일부러 일반 변수로 시도해 실패를 보게 한다
- 설정 파일과 버전 차이에서 시간을 많이 잃을 위험. 3장 변환 규칙을 미리 알려주는 이유
- 강의 후반(L130, L168~171)은 Supabase 문서 코드 복붙 구간. 복붙 자체는 허용하되 "이 함수가 언제 실행되는지"만은 설명하게 한다
- 비밀 키 실수: `SUPABASE_SERVICE_ROLE`에 `NEXT_PUBLIC_`를 붙이거나 `.env.local`을 커밋하는 것. 단계 11 시작 때 `.gitignore` 확인을 의무로 한다
- AllStudy 루트 저장소 안에 Next 프로젝트가 들어 있으므로 `node_modules`, `.next`, `.env*.local`이 `.gitignore`에 있는지 단계 0에서 확인한다

---

## 3. Next 16 변환 규칙 (강의 코드 → 링고 코드)

강의 목록의 `R번호`가 이 표를 가리킨다. 튜터는 해당 강의 시작 전에 한 줄로 예고한다.

| 번호 | 강의(Next 14) | 링고(Next 16) |
|---|---|---|
| R1 | `params.slug`, `searchParams.page`를 바로 읽음 | 페이지를 `async`로 만들고 `const { slug } = await params`. searchParams, generateMetadata, opengraph-image도 같음. Next 16은 동기 접근이 완전히 제거됨 |
| R2 | `cookies().get(...)` | `const store = await cookies()`. 이걸 쓰는 함수와 그 함수를 부르는 layout, 컴포넌트도 async |
| R3 | fetch는 기본 캐시. "값이 안 바뀌는" 시연, 하드 리프레시 안내 | Next 15부터 fetch 기본은 캐시 안 함. 캐시를 보려면 `fetch(url, { cache: "force-cache" })` 또는 `{ next: { revalidate: 60 } }`로 직접 켠다. 하드 리프레시 안내는 무시 |
| R4 | `middleware.js`, `export function middleware` | `proxy.js`(또는 `proxy.ts`), `export function proxy`. 위치는 프로젝트 루트 |
| R5 | `tailwind.config.js` 수정 | 파일 없음. `app/globals.css`에 쓴다. 플러그인은 `@plugin "@tailwindcss/forms";`, 클래스 방식 다크모드는 `@custom-variant dark (&:where(.dark, .dark *));`, CSS Module에서 `@apply` 쓰려면 맨 위에 `@reference "../app/globals.css";`, `border`는 색을 항상 같이 쓴다, `container`에는 `mx-auto`를 붙인다 |
| R6 | `useFormState`(react-dom), `forwardRef` | `useActionState`를 `react`에서 import. React 19는 `ref`를 일반 prop으로 받으므로 forwardRef 없이 `function Input({ ref, ...props })` |
| R7 | `<Image priority quality={50}>` | `priority`는 deprecated, `preload` 사용. `quality`는 기본 `[75]`만 허용되고 나머지는 가장 가까운 값으로 바뀜. 비교 실습하려면 `next.config.ts`에 `images: { qualities: [50, 75, 100] }` |
| R8 | `npm i json-server` | `npm i -D json-server@0.17.4`로 고정. 최신판은 `--delay` 옵션이 없어서 L27, L113이 안 된다 |
| R9 | `revalidateTag('tag')` | `revalidateTag('tag', 'max')`. 저장 직후 바로 반영이 필요하면 `updateTag` 또는 `revalidatePath` |
| R10 | Supabase `createClient`의 쿠키 `get/set/remove`, 화면의 anon key | 최신 @supabase/ssr은 `getAll/setAll`. `createClient`가 async라 `await createClient()`. Supabase 공식 Next.js 가이드의 최신 코드를 쓴다. 키는 "Publishable key"(또는 Legacy 탭의 anon key). 새 테이블은 RLS가 켜져 있으면 select가 에러 없이 빈 배열 |
| R11 | Zod 3 문법 | 강의와 똑같이 가려면 `npm i zod@3`. Zod 4를 쓰면 `flatten()` 등이 deprecated |
| R12 | `next lint`, `.eslintrc.json` | `npm run lint`(내부는 `eslint`), `eslint.config.mjs`. `next build`는 린트를 안 돌린다 |
| R13 | `.js` 파일, 타입 없음 | `.tsx`/`.ts`. props는 `{ title }: { title: string }`. params 타입은 `{ params: Promise<{ slug: string }> }` |

그 밖의 공통 사항
- Node 20.9 이상 필요(`node -v`)
- 빌드 결과 기호가 강의(λ)와 다르다. 동적 `ƒ`, 정적 `○`, 정적 생성 `●`
- 빌드 시 `useSearchParams`를 쓰는 클라이언트 컴포넌트는 `<Suspense>`로 감싸라는 에러가 날 수 있다. dev에서는 무관
- `.env.local`이나 `next.config.ts`를 고치면 dev 서버를 재시작한다

---

## 4. 단계별 계획

강의 줄 형식: `L번호 제목 (영상 분) [모드] 미션. 확인. 규칙(3장 R번호). 강사 커밋 #해시`

미션 문장의 `.js` 파일명은 R13에 따라 `.tsx`(컴포넌트, 페이지) 또는 `.ts`(그 외)로 읽는다. 끝낸 강의는 `[ ]`를 `[x]`로 바꾼다.

### 단계 0. 환경과 프로젝트 구조 (L1~3, 약 50분)

- 결과물: `my-app`에서 `npm run dev` → localhost:3000에 기본 화면, `/next.svg` 주소로 public 파일이 열림
- 신규 개념: npm과 npx, package.json의 scripts, 설정 파일들의 역할
- 링고 상태: 2026-10-23에 3강까지 시청, `my-app`(Next 16.4, TS, Tailwind v4) 생성 완료
- gitignore: 2026-10-23 확인 완료. 루트 `.gitignore`에 `node_modules/`, `.next/`가 있고 `my-app/.gitignore`에 `.env*`가 있음. `finance`도 create-next-app이 같은 `.gitignore`를 만들어 주는지 L97에서 확인
- 디펜스
  1. package.json과 package-lock.json 중 직접 고치는 건 어느 쪽이고, 다른 쪽은 언제 바뀌나?
  2. `node_modules`를 git에 안 올려도 되는 이유는?
  3. `@/components/Card`의 `@`는 어디를 가리키고, 어느 파일에 정의돼 있나?
  4. 라이브 수정: `public`에 이미지 하나 넣고 브라우저 주소로 바로 열기

- [x] **L1** What You'll Learn, What You'll Build and Setting Up! (7분) [시청] 미션: 터미널에서 `node -v` 실행해 버전 확인, VS Code 설치 확인. 주의: Next 16은 Node 20.9 이상 필요
- [x] **L2** Creating a Next.js Project (8분) [실습] 미션: (완료) my-app이 이미 Next 16, TypeScript, Tailwind v4, App Router로 생성됨. 할 일은 `cd my-app` 후 `npm run dev`만. 확인: http://localhost:3000 에 Next.js 기본 화면. 서버 종료는 Ctrl+C. 규칙: R12, R13. 커밋 #7d4b5c9
- [x] **L3** Next.js Project Structure (9분) [시청] 미션: `npm run dev` 켠 상태로 http://localhost:3000/next.svg 접속해서 public 파일이 보이는지 확인. package.json 열어서 scripts 4개(dev, build, start, lint) 이름을 말해보기. 규칙: R5, R12

### 단계 1. React 기초 (L4~13, 약 1시간 50분)

- 결과물: 메인 페이지에 Card 컴포넌트 여러 개, Show/Hide 토글 버튼, 이름 추가 버튼으로 목록이 늘어나는 화면
- 신규 개념: JSX 규칙, 컴포넌트와 props, 이벤트, useState와 재렌더링, `"use client"`, map과 key
- 브릿지: 컴포넌트 = C 함수, props = 구조체 인자, map = for 순회
- 진행 팁: 강의는 "OPTIONAL"이지만 링고는 필수. L10에서 일반 변수로 먼저 바꿔 보고 화면이 안 바뀌는 걸 확인한 뒤 useState로 바꾼다
- 디펜스
  1. 왜 `let count = 0; count++`로는 화면 숫자가 안 바뀌고 useState로는 바뀌나?
  2. `onClick={handleClick()}`과 `onClick={handleClick}`의 차이는?
  3. 목록 렌더링에서 key는 왜 필요하고, 배열 index를 key로 쓰면 언제 문제가 되나?
  4. 라이브 수정: Card에 `highlight` prop을 추가해 true면 테두리 색을 바꾸기

- [x] **L4** Section Introduction: React 101 (1분) [시청] 미션: 확인 질문: "React와 Next.js의 관계를 한 줄로 말하면?" (React는 화면 부품 라이브러리, Next.js는 그걸 웹사이트로 만드는 프레임워크)
- [x] **L5** What is React? (5분) [시청] 미션: 확인 질문: "컴포넌트란?" "선언형이란?" 을 한 줄로 설명해보기
- [x] **L6** Understanding JSX Syntax (8분) [실습] 미션: app/page.js 의 return 안을 지우고 `<div className="p-20 bg-gray-800">Hello, {name}</div>` 만들기(name 변수는 함수 위에 선언). 일부러 태그를 안 닫아서 에러 화면도 한 번 보기. 확인: localhost:3000 에 "Hello, 이름" 이 보임. 저장하면 새로고침 없이 바로 반영(Fast Refresh). 규칙: R13 (기본 템플릿 page.tsx의 이미지와 링크 코드는 지우고 시작). 커밋 #04224b4
- [x] **L7** Components as the Basic UI Building Blocks (6분) [실습] 미션: `function Card(props)` 를 만들어 `<div className="border rounded-md border-gray-600 p-4">{props.text}</div>` 를 돌려주게 하고, Home 안에서 `<Card text="..." />` 를 3번 쓰기. 확인: 테두리 박스 3개가 서로 다른 문구로 보임. 규칙: R5. 커밋 #787a58f
- [x] **L8** Component Props (Passing Data to Components) (4분) [실습] 미션: Card가 `{children}` 을 받도록 바꾸고 `<Card>안녕</Card>` 형태로 쓰기. Card 안에 Card를 넣어보기. 확인: 중첩된 테두리 박스 안에 글자가 보임. 커밋 #10ebbb0
- [x] **L9** Responding to Events (6분) [실습] 미션: 버튼을 만들고 클릭 시 alert("Hello") 뜨게 하기. 에러 메시지가 나면 첫 줄에 "use client" 추가. 함수 이름만 넘기는 것과 괄호 붙이는 것의 차이도 시도. 확인: 버튼 클릭하면 알림창, F12 콘솔에 이벤트 객체 출력. 커밋 #2bc6172
- [x] **L10** Keeping Component State using Hooks (useState) (8분) [실습] 미션: `let label = "show"` 로 먼저 해보고 클릭해도 안 바뀌는 것을 확인한 뒤 `const [label, setLabel] = useState("show")` 로 고치기. useState는 react에서 import. 확인: 버튼을 누를 때마다 글자가 show와 hide로 바뀜. 커밋 #6706582
- [x] **L11** Conditional Rendering (5분) [먼저] 미션: isVisible 상태를 만들어 버튼 클릭 시 카드들이 사라졌다 나타나게 하기. 확인: 버튼 글자가 Hide/Show로 바뀌고 카드 목록이 토글됨. 커밋 #c52c000
- [x] **L12** Rendering List of Elements (6분) [먼저] 미션: `["Piotr","John","Terry"]` 이름 배열을 map으로 출력하고, Add 버튼으로 항목 추가. 확인: 카드가 3장 나오고 Add 누를 때마다 "New element" 카드가 늘어남. 콘솔에 key 경고가 없어야 함. 커밋 #031781b
- [x] **L13** Importing and Exporting Components (4분) [실습] 미션: 프로젝트 루트에 components 폴더 만들고 Card.js 로 옮겨서 export default 붙이기. 상대경로(`../components/Card`)와 `@/components/Card` 두 방식 모두 해보기. 확인: 화면이 이동 전과 동일하게 보임. 규칙: R13 (my-app은 TS라 `@/*` 별칭이 tsconfig.json에 이미 있음. `@/components/Card` 그대로 사용 가능). 커밋 #4541f98

### 단계 2. 라우팅, 레이아웃, 링크 (L14~19, 약 1시간 15분)

- 결과물: Home, About, About/Projects 페이지 + 모든 페이지에 공통 헤더 메뉴 + `/blog/아무거나`가 그 글자를 보여주는 동적 페이지
- 신규 개념: 파일 시스템 라우팅, layout과 children, Link와 프리페치, 동적 세그먼트 `[slug]`
- Next 16 핵심: L19부터 R1(await params)이 처음 나온다. 여기서 확실히 익히면 이후 20번 넘게 반복되는 에러를 피한다
- 디펜스
  1. `/about/projects` 주소를 만들려면 어떤 폴더와 파일이 필요한가?
  2. layout.tsx와 page.tsx의 관계는? 페이지를 이동할 때 layout은 다시 그려지나?
  3. `<a href>` 대신 `<Link href>`를 쓰면 뭐가 달라지나?
  4. 라이브 수정: `/blog/[slug]/comments` 페이지를 추가해 "slug의 댓글"이라고 표시하기

- [x] **L14** Section Introduction: Routing, Pages & Layouts (1분) [선택] 1분 소개
- [x] **L15** File-system Routing & Creating Pages (7분) [실습] 미션: app/about/page.js 를 만들어 "About Me" 를 보이게 하고, app/about/projects/page.js 로 "Projects" 보이게 하기. page.js 대신 다른 파일명이면 404가 나는 것도 확인. 확인: http://localhost:3000/about 과 /about/projects 접속 시 각 문구가 보임. 폴더만 있고 page.js 없으면 404. 커밋 #04207c5
- [x] **L16** Layouts (UI Shared Between Pages) (5분) [실습] 미션: app/layout.js 에서 `{children}` 위에 `<header className="p-10 border border-yellow-500">I'm visible everywhere</header>` 추가하고 `{children}` 은 `<main>` 으로 감싸기. 확인: /, /about, /about/projects 모두 상단에 노란 박스가 보임. 규칙: R5. 커밋 #7127239
- [x] **L17** Links and Navigation (10분) [실습] 미션: Header 컴포넌트를 만들고 Home, About, Projects 메뉴를 a 태그로 먼저 만들어 카운터가 리셋되는 것을 본 뒤 Link 로 교체해서 카운터가 유지되는지 비교. 확인: 개발자도구 Network 탭(Preserve log 체크, Doc 필터)에서 a 태그는 문서 요청이 매번 나오고 Link 는 안 나옴. 카운터 숫자가 이동해도 계속 올라감. 커밋 #81ddc47
- [x] **L18** Understand Prefetching and Caching (10분) [시청] 미션: `npm run build` 후 `npm run start`. 홈에서 projects 페이지 문구를 수정해 다시 build, start 하고 홈에서 새로고침 없이 이동했을 때 옛 내용이 나오는지 확인. 규칙: R3
- [x] **L19** Dynamic Routes with Parameters (5분) [실습] 미션: app/blog/[slug]/page.js 만들고 `/blog/first`, `/blog/hello` 로 접속해 다른 글자가 나오게 하기. /blog 만 치면 404인 것도 확인. 확인: /blog/first 접속 시 "first" 가 화면에 보임. 규칙: R1. 커밋 #4ea97cb

### 단계 3. 데이터 가져오기와 느린 데이터 (L20~31, 약 2시간 10분)

- 결과물: json-server(가짜 API)에서 받은 저장소 목록을 보여주는 projects 페이지. API를 5초 느리게 해도 헤더와 제목은 바로 보이고 목록 자리만 로딩 막대가 보임
- 신규 개념: 서버 컴포넌트에서 async/await fetch, 요청 메모이제이션과 데이터 캐시, loading.tsx, Suspense, 스트리밍
- 브릿지: fetch = SQL 쿼리 실행, json-server = 로컬 테스트 DB
- Next 16 핵심: R3(캐시 기본값 반대), R8(json-server 버전). 터미널 2개(Next, json-server)를 동시에 띄우는 연습
- 디펜스
  1. 서버 컴포넌트에서 fetch할 때 console.log는 어디에 찍히나? 왜?
  2. Next 16에서 fetch 결과를 1시간 캐시하려면 어떻게 쓰나?
  3. loading.tsx와 `<Suspense>`의 차이는? 각각 어떤 범위를 기다리게 하나?
  4. 라이브 수정: 목록 위에 "총 N개" 문구를 추가하되, 그 숫자가 목록과 같이 로딩되게 하기

- [x] **L20** Section Introduction: Data Fetching (and Caching!) (1분) [선택] 1분 소개
- [x] **L21** How Data Fetching Works in Next.js (Explanation and Recommendations) (7분) [시청] 미션: 확인 질문: "서버에서 fetch 하면 로딩 스피너가 왜 줄까?" (데이터를 가진 채로 화면을 만들어 보내서). 규칙: R3
- [x] **L22** Running a Mock JSON Server (8분) [실습] 미션: `npm install --save-dev json-server@0.17.4` (영상 중간에 강사가 버전 고정을 정정함). db.json 을 강의 링크에서 가져오고 scripts 에 `"json-server": "json-server --watch db.json --port 3001"` 추가 후 `npm run json-server`. 확인: http://localhost:3001/repos 에서 JSON 배열이 보임. 커밋 #ee33c52
- [x] **L23** Actually Fetching Data with fetch inside a Server Component (8분) [실습] 미션: Projects 페이지에서 `const response = await fetch(...)`, `const repos = await response.json()` 후 `repos.map` 으로 id를 key 삼아 title, description, stargazers_count 출력. 확인: /about/projects 에 저장소 목록이 보임. 안 보이면 json-server 가 켜져 있는지 확인. 커밋 #01022b8
- [x] **L24** Understanding Data Cache and Request Memoization (6분) [시청] 미션: 확인 질문: "데이터 캐시와 요청 메모이제이션의 차이?" (캐시는 요청을 넘어 서버에 저장, 메모이제이션은 한 번의 렌더 동안만). 규칙: R3
- [x] **L25** Fetch Cache in Practice (7분) [실습] 미션: db.json 의 첫 repo stargazers_count 를 바꾸고 새로고침. 옵션을 하나씩 바꿔가며 반영되는지 보기. revalidate 를 3초로 두고 3초 후 새로고침. 확인: no-store 에서는 새로고침 즉시 새 값. revalidate 3초에서는 3초 뒤 새로고침하면 새 값. 규칙: R3. 커밋 #b7dc6a2
- [x] **L26** Section Introduction: Dealing with Slow Data Sources (1분) [선택] 1분 소개
- [x] **L27** How a Slow Data Source Can Block Your Whole Page! (3분) [실습] 미션: json-server 종료 후 scripts 에 `--delay 5000` 추가해 다시 실행. /about/projects 새로고침해서 5초간 빈 화면 체험. 확인: http://localhost:3001/repos 가 5초 뒤에 열림. projects 페이지도 5초 뒤에 표시. 규칙: R3, R8. 커밋 #6aeee19
- [x] **L28** Loading UI and Streaming (10분) [실습] 미션: loading.js 를 만들어 `w-full h-24 animate-pulse bg-neutral-200 dark:bg-neutral-700` 막대 3개를 그리기. 홈에서 Projects 클릭 시 즉시 로딩 막대가 뜨는지 확인. 확인: 클릭 직후 회색 막대가 5초 보이다 실제 목록으로 교체됨. 로딩 중 헤더 링크로 다른 페이지 이동 가능. 커밋 #230a63a
- [x] **L29** Loading UI and React Suspense (4분) [시청] 미션: 확인 질문: "loading.js 와 Suspense 의 관계?" (loading.js 는 페이지 전체를 감싼 Suspense)
- [x] **L30** When to Use React Suspense? When Loading UI? Differences? (6분) [실습] 미션: ProjectList 컴포넌트를 분리해 Suspense 로 감싸고 "Hello, this is the list of my repos." 문구가 즉시 보이게 하기. 확인: 새로고침 시 제목과 문구는 바로 보이고 목록 자리만 회색 막대, 5초 뒤 목록으로 교체. 커밋 #7df558d
- [x] **L31** About Streaming and SSR (2분) [선택] 개념 복습용

### 단계 4. 스타일링 (L32~38, 약 1시간 30분)

- 결과물: 반응형 헤더(모바일에서 메뉴 정렬이 바뀜), 2열 카드 그리드, CSS Module 하나
- 신규 개념: Tailwind 유틸리티 클래스, flex와 grid, 반응형 접두사 `md:`, CSS Module
- Next 16 핵심: R5 전부. 링고 프로젝트에는 tailwind.config.js가 없다
- 디펜스
  1. `md:flex-row`는 화면이 클 때 적용되나, 작을 때 적용되나?
  2. flex와 grid를 각각 어디에 썼고 왜 그걸 골랐나?
  3. 라이브 수정: 카드 그리드를 큰 화면에서 3열로 바꾸기

- [x] **L32** Section Introduction: Styling With Tailwind and CSS Modules (1분) [선택] 소개만 있음
- [x] **L33** Styling Options in Next.js (5분) [시청] 미션: 확인 질문. `.module.css`에서 `module`을 빼면 어떻게 될까? (답은 36강에서 확인)
- [x] **L34** Getting Started with Tailwind CSS (10분) [실습] 미션: (1) 확장 두 개 설치 (2) globals.css에서 기본 CSS를 지우고 body에 흰 배경, 회색 글씨, 다크모드 때 어두운 배경과 밝은 글씨 지정 (3) 본문 폭을 가운데 정렬하고 최대 폭 제한 (4) macOS 외관 설정을 라이트와 다크로 바꿔 보며 색 변화 확인. 확인: http://localhost:3000 접속 시 본문이 가운데 좁게 정렬됨. 시스템 다크모드 전환 후 새로고침하면 배경이 어두워짐. 창 폭을 줄이면 좌우 여백이 사라지고 꽉 참. 규칙: R5. 커밋 #68461c3
- [x] **L35** Flex Container & Responsive Design (9분) [실습] 미션: header 안의 메뉴 코드를 `components/navigation.js`로 분리하고, 좁은 화면에서는 세로, 768px 이상에서는 가로로 배치되게 만들기. 확인: 브라우저 창 폭을 줄였다 늘리면 메뉴가 세로와 가로로 바뀜. 개발자도구(F12) 반응형 모드로 확인. 커밋 #bd7ce3d
- [x] **L36** Adding a CSS Module and Using Tailwind Inside (5분) [실습] 미션: navigation.module.css를 만들고 `.link` 클래스에 패딩, hover 배경색, 글자 크기를 지정한 뒤 메뉴 링크 3개에 적용하기. 확인: 메뉴에 마우스를 올리면 회색 배경이 나타남. F12 Elements에서 클래스 이름이 `navigation_link__abc12`처럼 자동 생성된 것이 보임. 규칙: R5. 커밋 #8f943c6
- [x] **L37** Positioning Elements with Flex (6분) [실습] 미션: header에 로고(본인 이름), 메뉴, 오른쪽 끝 "dark toggle" 글자를 배치하고, 모바일에서는 로고가 사라지게 하기. 확인: 넓은 화면에서 왼쪽 로고, 가운데 메뉴, 오른쪽 끝 토글 글자. 좁은 화면에서 로고가 사라짐. 커밋 #ad21d2f
- [x] **L38** Using Grid and Making Customizable Components (9분) [실습] 미션: card.js에 className prop 추가 후, projects 페이지에서 모바일 1열 / 768px 이상 2열 카드 그리드를 만들고 카드 높이를 같게 맞추기. 확인: /projects 에서 넓은 화면 2열, 좁은 화면 1열. 카드 안에 제목 왼쪽, 별 개수 오른쪽. 규칙: R3. 커밋 #6422583

### 단계 5. 에러 처리 (L39~46, 약 1시간 20분)

- 결과물: 목록 API가 실패해도 페이지 나머지는 보이고 "다시 시도" 버튼이 있는 화면, 직접 만든 404 페이지
- 신규 개념: error.tsx, ErrorBoundary, 중첩 layout, global-error, not-found
- 주의: 일부러 넣은 `throw`를 단계 끝에 모두 지운다(L54 빌드가 실패함)
- 디펜스
  1. error.tsx에는 왜 `"use client"`가 필요한가?
  2. 같은 폴더의 layout에서 난 에러를 그 폴더의 error.tsx가 못 잡는 이유는?
  3. 라이브 수정: `/blog/없는글`로 가면 블로그 전용 404가 뜨게 하기

- [x] **L39** Section Introduction: Error Management in Next (2분) [선택] 소개만 있음
- [x] **L40** Error Handling on Pages (7분) [실습] 미션: project-list에 일부러 throw를 넣어 /projects 가 깨지는 것을 보고, projects 폴더에 error.js를 만들어 에러 문구가 대신 보이게 하기. 확인: /projects 접속 시 헤더와 메뉴는 그대로, 본문만 "Something went wrong" 화면. error.js를 지우면 전체 오류 화면. 커밋 #68c7327
- [x] **L41** Error Boundaries (5분) [실습] 미션: error.js 방식 대신 ErrorBoundary를 설치해 쓰고, 에러가 나도 페이지 제목은 보이고 프로젝트 목록 자리에만 안내 문구가 나오게 하기. 확인: /projects 에서 제목은 유지되고 목록 영역만 "Cannot fetch projects currently" 표시. 주의: 라이브러리 버전에 따라 서버 컴포넌트 페이지에서 직접 import하면 "class component / createContext in Server Component" 오류가 날 수 있다. 커밋 #4406348
- [x] **L42** Error Hierarchy - Where Does the Error Get Catched? (5분) [실습] 미션: error.js를 about 폴더로 옮기고 about, projects, 홈 순서로 throw를 넣어 어느 곳에서 잡히고 어디서 앱 전체가 죽는지 표로 정리하기. 확인: /about 과 /about/projects 는 같은 error.js 화면이 나옴. 홈은 전체 크래시. 확인 후 모든 throw 제거. 커밋 #eb1294e
- [x] **L43** Nested Layouts (5분) [실습] 미션: about 폴더에 layout.js를 만들어 about과 projects 아래에 공통 "You might also like" 영역을 표시하고, 홈에는 보이지 않는지 확인하기. 확인: /about 과 /about/projects 하단에 같은 목록이 보임. 홈(/)에는 없음. 커밋 #86448b3
- [x] **L44** Error Handling in Layouts and in the Root Layout (6분) [실습] 미션: layout 에러를 상위 app/error.js가 잡는 것을 확인한 뒤 global-error.js를 만들고, 빌드와 start로 `/?error=1`에서 Oops 화면 보기. 확인: 개발 모드 `/about` 에서 상위 error.js 화면. 프로덕션 `http://localhost:3000/?error=1` 에서 "Oops". dev 모드에서는 global-error가 안 보이는 것이 정상. 규칙: R1. 커밋 #e5af600
- [x] **L45** Recovering from the Errors (5분) [실습] 미션: 랜덤 에러를 심고 "Try again" 버튼이 reset만 쓸 때와 startTransition + refresh + reset 조합일 때 복구 여부를 비교하기. 끝나면 랜덤 throw 삭제. 확인: /about 새로고침을 반복하다 에러 화면에서 Try again을 누르면 몇 번 안에 정상 about 화면으로 돌아옴. 커밋 #8af2d87
- [x] **L46** Custom Not Found (404분) [실습] 미션: 전역 not-found.js를 만들고, blog/[slug] 안에 전용 not-found.js도 만든 뒤 `/blog/first`, `/blog/xxx`, `/abc` 세 주소를 비교하기. 확인: `/blog/first` 정상 표시. `/blog/xxx` 는 블로그 전용 404(추천 링크 포함). `/abc` 는 전역 404. 규칙: R1. 커밋 #8eb1ce6

### 단계 6. 이미지, 폰트, 메타데이터 (L47~62, 약 3시간)

- 결과물: `/photos` 갤러리(Image 컴포넌트로 최적화), Lighthouse 점수 비교, 폰트 교체, 탭 제목 template, 블로그 글별 제목
- 신규 개념: next/image(sizes, fill, placeholder), Core Web Vitals, next/font, Script, metadata와 generateMetadata
- Next 16 핵심: R7, R1(generateMetadata, opengraph-image)
- 진행 팁: L48, L49는 이론이라 빠르게. L62(OG 이미지)는 자주 깨지니 30분 넘게 막히면 건너뛴다
- 디펜스
  1. `<img>` 대신 `<Image>`를 쓰면 브라우저가 받는 파일이 어떻게 달라지나? (Network 탭으로 보여주기)
  2. `fill`을 쓸 때 부모에 `relative`가 필요한 이유는?
  3. 라이브 수정: 블로그 글 페이지 탭 제목을 "글제목 | 링고 블로그"로 만들기

- [x] **L47** Section Introduction: Images and Image Optimizations (1분) [선택] 소개만 있음
- [x] **L48** Problems with Images (10분) [시청] 미션: 확인 질문. 2MB 이미지 20장 페이지를 25Mbps(초당 약 3MB) 회선에서 열면 몇 초 걸릴까?
- [x] **L49** Core Web Vitals, LCP, CLS and Optimizing Images (7분) [선택] 링크 모음 위주
- [x] **L50** Adding Image Gallery (Not Optimized Yet!) (9분) [실습] 미션: public/images에 사진 4장을 넣고 /photos 페이지를 만들어 2열 갤러리를 구성한 뒤, F12 Network 탭 Img 필터에서 총 전송 용량 확인하기. 네트워크 속도 Fast 3G로 바꿔 로딩 체감하기. 확인: http://localhost:3000/photos 에서 사진 4장이 같은 높이로 크롭되어 표시됨. Network 탭 합계가 수십 MB(강의 기준 55MB)로 나옴. 커밋 #ed42075
- [x] **L51** Using the Next <Image> Component for Automatic Optimization (7분) [실습] 미션: img 4개를 Image로 교체(alt 필수)하고 Network 탭에서 `/_next/image?url=...&w=...&q=75` 요청과 전송 용량을 이전과 비교하기. 확인: Network 탭에서 이미지 요청 주소가 `/_next/image?...`로 바뀌고 용량이 수백 KB로 줄어듦. 주의: 상대경로 import는 동작한다. 커밋 #ff1509a
- [x] **L52** Responsive Image Size (7분) [실습] 미션: 4장 모두 fill, sizes를 적용하고 창 폭을 바꿔 가며 Network 탭 요청 URL의 `w=` 값이 달라지는지 비교하기. 확인: 넓은 창에서는 `w=` 값이 작게(약 50% 기준), 좁은 모바일 뷰에서는 크게 요청됨. 커밋 #ef1b90a
- [x] **L53** Placeholders & Image Quality (6분) [실습] 미션: 위 2장에 priority 적용, quality를 100과 50으로 바꿔 용량 차이 비교, 전체에 blur 적용 후 Fast 3G로 흐린 자리표시 확인. 확인: Network 탭에서 `q=50` 요청이 `q=100`보다 훨씬 작음(강의에서 약 19KB 대비 139KB). 느린 네트워크에서 흐린 사진이 먼저 보임. 규칙: R7. 커밋 #07a9239
- [x] **L54** Measuring the Page with Lighthouse (3분) (2026-10-25 건너뜀: 이미지 위주라 생략, 배포 단계에서 Lighthouse 다시 볼 것) [실습] 미션: about, 홈 등에 남은 throw 제거, 빌드와 start 후 /photos 에서 Lighthouse "Analyze page load" 실행하고 성능 점수 기록하기. 이미지 quality를 낮춘 뒤 다시 측정해 점수 비교. 확인: http://localhost:3000/photos (start 모드)에서 Lighthouse 점수가 표시됨. 강의에서는 성능 약 98점. 규칙: R12
- [x] **L55** Section Introduction: Fonts, OpenGraph, Scrips, Metadata (1분) [선택] 소개만 있음
- [x] **L56** Optimizing Fonts with Next.js (Google and Local Fonts!) (5분) [실습] 미션: layout.js의 폰트를 Roboto로 바꾸고 F12 Elements > Computed > font-family에서 Roboto 확인하기. 확인: 개발자도구에서 font-family가 Roboto로 표시됨. 글자 모양이 바뀜. 규칙: R5. 커밋 #b2a2dc7
- [x] **L57** Optimizing Scripts (Connecting with External Services like Analytics, Chatbots) (9분) [실습] 미션: 강사 저장소에서 chatbot.js를 받아 public에 넣고, Chatbot 컴포넌트를 만들어 layout에 넣은 뒤 페이지가 다 뜬 다음에 챗봇 박스가 나타나는지 확인하기. 확인: 아무 페이지나 열면 화면이 먼저 뜨고 몇 초 뒤 하단에 작은 챗봇 UI가 나타남. 콘솔에 스크립트 로그 출력. 커밋 #637d2b5
- [x] **L58** Introduction to Metadata (3분) [시청] 미션: 확인 질문. 정적과 동적 메타데이터는 언제 갈라 쓸까?
- [x] **L59** An Overview of Metadata Attributes (7분) [실습] 미션: layout.js의 title과 description을 본인 정보로 바꾸고 F12 Elements의 `<head>`에서 `<meta name="description">`가 바뀌었는지 확인하기. 확인: 브라우저 탭 제목이 바뀌고, 페이지 소스 보기(Cmd+U)에 설정한 description이 보임. 커밋 #9517354
- [x] **L60** Static Metadata (4분) [실습] 미션: 루트 layout에 title template을 설정하고 about, projects, photos 페이지에 각각 title을 지정해 탭 제목이 "About me | 내 이름" 형태로 나오게 하기. 확인: /about 탭 제목이 "About me | 내 이름". 홈은 default 제목. description은 부모 값이 상속됨. 커밋 #d3fe221
- [x] **L61** Dynamic Metadata (5분) [실습] 미션: `/blog/first` 와 `/blog/second` 탭 제목이 각각 "hello first", "hello second"로 나오게 generateMetadata 만들기. 확인: /blog/first 탭 제목이 "hello first | 내 이름"(template 적용). description은 레이아웃 값 유지. 규칙: R1. 커밋 #20a848c
- [x] **L62** Dynamic (OpenGraph) Image Generation (12분) [실습] 미션: opengraph-image.js를 만들어 `/blog/first` 의 og:image URL을 열어 제목이 박힌 이미지가 나오게 하고, 글씨 크기와 방향을 바꿔 보기. 확인: F12 Elements `<head>`의 `og:image` content URL을 새 탭에서 열면 PNG 이미지 표시. 제목이 slug별로 달라짐. 규칙: R1. 커밋 #e44f0e3

### 단계 7. 블로그 본체: MDX, 목록, 필터, 정렬, 페이지네이션 (L63~80, 약 4시간)

- 결과물: `content/` 폴더의 mdx 글을 읽어 `/blog`에 목록, `/blog/글이름`에 본문. `/blog?tags=a&order=oldest&page=2`가 모두 동작
- 신규 개념: MDX, frontmatter, 파일 읽기(fs), React `cache`, 쿼리 파라미터를 상태로 쓰기, useSearchParams, usePathname
- 브릿지 (가장 강한 구간): 태그 필터 = WHERE, 정렬 = ORDER BY, 페이지네이션 = LIMIT/OFFSET. `먼저` 모드로 강의 보기 전에 직접 짜 본다
- Next 16 핵심: R1(searchParams 매 강의), R5(`@plugin "@tailwindcss/typography";`)
- 준비물: L76에 날짜가 다른 mdx 글 5개 필요. 강사 커밋에서 받거나 직접 쓴다
- 디펜스
  1. page=3, limit=5일 때 몇 번째 글부터 몇 개를 보여주나? 코드에서 그 계산은 어디 있나?
  2. 필터 조건을 state가 아니라 URL에 두면 좋은 점 두 가지는?
  3. `getPosts`에서 `Promise.all`이 왜 필요한가?
  4. 라이브 수정: "제목 오름차순" 정렬 옵션 추가

- [x] **L63** Section Introduction: Markdown and MDX (1분) [선택] 소개 영상, 1분
- [x] **L64** Setting Up Markdown and MDX and First MDX Page! (8분) [실습] 미션: 문서 복사 명령으로 패키지 설치 후 about 페이지를 page.mdx로 바꾸기. 제목, 굵은 글씨, 목록을 넣어보기. 설정 변경 후 dev 서버를 재시작해야 함. 확인: http://localhost:3000/about 접속. 굵게, 기울임, 목록은 보이지만 제목(#)이 본문과 같은 크기로 나오면 정상 상태. 주의: Next 문서의 최신 MDX 설치 안내를 따를 것(패키지 목록과 next.config 형식이 다를 수 있음, next.config.mjs 사용 가능). 커밋 #d4e9c06
- [x] **L65** Styling MDX - Tailwind Typography (5분) [실습] 미션: 플러그인 설치 후 등록, prose 클래스 적용. 시스템 다크모드를 바꿔 dark:prose-invert 효과 확인. 확인: /about에서 h1이 크게 나오고 목록 점이 보이면 성공. 다크모드에서 글자가 흰색으로 반전되어야 함. 규칙: R5. 커밋 #544ee1a
- [x] **L66** MDX Remote (Rendering any Markdown) (5분) [실습] 미션: 샘플 마크다운 문자열을 source로 넣고 /blog/아무거나 로 접속해 모두 같은 글이 나오는지 확인. article에 prose 적용. 확인: http://localhost:3000/blog/first 와 /blog/second 모두 같은 마크다운이 서식 적용되어 보임. 규칙: R1. 커밋 #8864b09
- [x] **L67** Loading MDX From Files (Blog Posts) (4분) [실습] 미션: content/first.mdx 만들고 "Welcome to the first page" 같은 문구 넣기. /blog/first 로 열어서 그 글이 나오는지 확인. 없는 slug로 열면 에러 나는 것도 관찰. 확인: http://localhost:3000/blog/first 에서 mdx 내용 표시. (없는 파일은 아직 에러 화면이 정상). 규칙: R1. 커밋 #737dec1
- [x] **L68** Section Introduction: Blog Project: Metadata, Frontmatter, Post List (0분) [선택] 0분 소개
- [x] **L69** Metadata #1 - What's Frontmatter and Refactor Time #1 (6분) [실습] 미션: lib/posts.js를 만들고 loadPost를 export. page.js에서 import해서 쓰도록 바꾼 뒤 이전과 똑같이 동작하는지 확인. (이 단계에서 import 경로는 jsconfig의 @/ 별칭 사용). 확인: /blog/first 가 리팩터링 전과 똑같이 보임. 규칙: R1. 커밋 #f6f5d58
- [x] **L70** Metadata #2 - Extracting Frontmatter and Content, Refactor Time #2 (10분) [실습] 미션: first.mdx 상단에 title과 description 쓰기. getPost를 만들고 generateMetadata에서 frontmatter를 반환. 브라우저 탭 제목과 개발자도구에서 meta description 확인. 확인: /blog/first 의 탭 제목이 frontmatter title과 같고, 개발자도구 Elements의 head에서 `<meta name="description">` 값이 보임. 없는 slug는 404 페이지. 규칙: R1. 커밋 #fe1b1c8
- [x] **L71** Blog Post List - Fetching Metadata of All Files (11분) [실습] 미션: /blog 페이지를 만들고 터미널(서버 콘솔)에 posts 배열을 console.log로 찍어보기. 오타 주의(endsWith, 대소문자). 확인: 브라우저가 아니라 npm run dev를 실행한 터미널에 `[{ slug: 'first', frontmatter: {...} }]` 출력. 커밋 #4d46d51
- [x] **L72** Blog Post List - Links (9분) [실습] 미션: 글 목록 만들고 각 글이 /blog/slug 로 연결되게 하기. 날짜를 따옴표 없이 쓰면 어떤 에러가 나는지 한 번 확인 후 따옴표로 수정. 확인: http://localhost:3000/blog 에서 글 제목 링크와 날짜가 보이고 클릭하면 상세 페이지로 이동. 규칙: R5. 커밋 #a1a149f
- [x] **L73** Section Introduction: Caching, Filtering, Sorting, Pagination (1분) [선택] 소개 영상
- [ ] **L74** Performance Improvements and Refactoring - Using cache for Memoization (11분) [실습] 미션: getPost 안에 console.log('loading file')을 넣고 캐시 전에는 두 번, 캐시 후에는 한 번 찍히는지 터미널에서 확인. 확인: /blog/first 새로고침 시 터미널의 로그가 1줄만 나오면 성공. 규칙: R1, R3. 커밋 #bc1e581
- [ ] **L75** Tags and Filtering Using Search Query Params (9분) [먼저] 미션: 태그 2개짜리 글로 /blog?tags=JavaScript 와 /blog?tags=Type 을 각각 열어 결과 비교. 태그 없이 열면 전체 표시. 확인: http://localhost:3000/blog?tags=JavaScript 에서 해당 글만 나오고 /blog?tags=Type 이면 아무것도 안 나옴. 규칙: R1. 커밋 #f1aa7c7
- [ ] **L76** Sorting Posts - Using Query Params for State #1 (9분) [먼저] 미션: 추가 글 파일을 준비하고 date를 제각각 지정. 기본으로 최신 글이 위에 오는지 확인. 비교 함수의 a,b 순서를 바꿔 결과가 뒤집히는 것 확인. 확인: http://localhost:3000/blog 에서 날짜가 가장 최근 글이 맨 위. 커밋 #77bcf50
- [ ] **L77** Change Sort Order - Using Query Params for State #2 (6분) [먼저] 미션: 정렬 토글 링크를 만들고 클릭 후 URL이 바뀌는 것을 확인. 그 URL을 새 탭에 붙여넣어도 같은 순서인지 확인. 확인: http://localhost:3000/blog?order=oldest 에서 오래된 글이 위에 나옴. 규칙: R1. 커밋 #55a3642
- [ ] **L78** Adding Pagination - Using Query Params for State #3 (6분) [먼저] 미션: limit를 기본 3으로 두고 /blog?page=2, /blog?page=2&limit=2 를 직접 입력해보기. 확인: http://localhost:3000/blog?limit=2&page=2 에서 3~4번째 글이 나옴. 규칙: R1. 커밋 #f0f2721
- [ ] **L79** Pagination Component - Pages #1 (9분) [실습] 미션: getPosts의 반환 형태를 바꾸고 에러 메시지를 따라 호출부를 모두 수정. limit=2로 설정해 번호가 3개 나오는지 확인. 확인: 글 6개, limit 3이면 번호 1, 2 / limit 2이면 1, 2, 3이 목록 아래에 나옴. 커밋 #7f2890c
- [ ] **L80** Pagination Component - Links #2 (11분) [실습] 미션: oldest 정렬 상태에서 2페이지로 이동해도 order=oldest가 유지되는지 확인. 현재 페이지 번호에만 밑줄이 나오는지 확인. 확인: /blog?order=oldest 에서 "2" 클릭 후 URL이 /blog?order=oldest&page=2 로 바뀌고 2에 밑줄. 주의: 클라이언트 훅(useSearchParams) 사용 부분은 변경 없음. 커밋 #94d7bd8

### 단계 8. 다크모드, 쿠키, 홈 완성, 배포 (L81~95 + 부록 L200~206, 약 3시간 + git 30분)

- 결과물: 새로고침해도 유지되는 다크모드 토글, 최근 글 3개와 GitHub 저장소가 있는 홈, Vercel 공개 주소 `https://...vercel.app`
- 신규 개념: 커스텀 훅, 쿠키(서버와 클라이언트에서 읽기), 정적과 동적 렌더링, generateStaticParams, Vercel 배포
- Next 16 핵심: R2(cookies), R5(`@custom-variant dark`), R1
- 순서: L94(배포) 전에 부록 Git(L200~206) 중 L202, L205, L206만 본다. 링고는 git을 써 봤으므로 GitHub 원격 저장소 연결 위주로
- 주의: 이 저장소는 AllStudy 안에 있다. Vercel에는 `my-app`만 별도 GitHub 저장소로 올리거나 Vercel의 Root Directory를 `Subjects/nextjs/my-app`으로 지정한다
- 디펜스
  1. 쿠키를 읽으면 왜 페이지가 동적 렌더링(ƒ)이 되나?
  2. generateStaticParams는 언제 실행되고 무엇을 미리 만드나?
  3. 로컬 `npm run build`가 실패하면 Vercel 배포는 어떻게 되나?
  4. 라이브 수정: 다크모드 기본값을 시스템 설정 따라가기로 바꾸기

- [ ] **L81** Section Introduction: Custom HTML, Tags, Dark Mode, Cookies (1분) [선택] 소개 영상
- [ ] **L82** Customizing HTML Generated from Markdown (7분) [실습] 미션: H1 컴포넌트를 만들고 about(MDX), 블로그 글, 일반 페이지 모두에서 제목 크기가 같게 나오는지 확인. 확인: /about, /blog, /blog/first, /projects, /photos 의 제목 크기가 모두 같음. 커밋 #cd5d276
- [ ] **L83** Tags on Blog Post (5분) [실습] 미션: 태그 링크를 `#tag` 형태로 만들고 클릭하면 해당 태그 글만 목록에 나오는지 확인. 확인: /blog/first 에서 #JavaScript 등을 클릭하면 /blog?tags=JavaScript 로 이동해 필터링됨. 규칙: R1. 커밋 #3b35451
- [ ] **L84** Dark Mode Toggling - Component #1 (7분) [실습] 미션: 버튼을 눌러 달/해 아이콘이 번갈아 바뀌는 컴포넌트를 만들기. 'use client'를 빼서 나오는 에러도 확인해보기. 확인: 헤더 오른쪽 버튼 클릭 시 아이콘이 토글됨(화면 테마는 아직 안 바뀜). 커밋 #3d998a7
- [ ] **L85** Dark Mode Toggling - Custom Hook, Setting Dark/Light Mode #2 (9분) [실습] 미션: 훅을 만들고 버튼 클릭 시 실제 화면 테마가 바뀌는지 확인. 새로고침하면 초기화되는 것도 확인(다음 강의 동기). 확인: 버튼 클릭 시 배경이 흰색/검정으로 전환. F5 하면 기본(light)으로 돌아감. 규칙: R5. 커밋 #0c724f9
- [ ] **L86** Dark Mode Toggling - Using Cookies in Next #3 (10분) [실습] 미션: 테마를 바꾸고 개발자도구 Application > Cookies에서 theme 값 확인. 새로고침해도 테마와 아이콘이 유지되는지 확인. 확인: 버튼 클릭 후 F5 해도 같은 테마. Application 탭에 theme=dark 또는 light 쿠키가 보임. 규칙: R2. 커밋 #503b134
- [ ] **L87** Note About Cookies in Server Components and Dynamic Rendering (5분) [시청] 미션: npm run build를 실행하고 출력 표에서 어떤 페이지가 동적이고 정적인지 찾아보기. 규칙: R12. 커밋 #503b134
- [ ] **L88** Wrapping Up the Project - Home Page (13분) [실습] 미션: 본인 GitHub 유저명으로 프로젝트 목록 표시. 홈에 최근 글 3개 링크 만들기. 화면 너비를 줄여 Home 링크가 보이는지 확인. 확인: /projects 에 GitHub 저장소 이름들이 보임. / 에 "Latest on the blog" 아래 글 3개 링크. 규칙: R3. 커밋 #645a4dc
- [ ] **L89** Section Introduction: Going Live! + Performance Tips & Tricks (1분) [선택] 소개 영상
- [ ] **L90** Do You Know Git Already? (0분) [시청] 미션: 터미널에서 `git --version` 확인, GitHub 계정 로그인 확인. 처음이면 부록 A(Git and GitHub)를 먼저 시청
- [ ] **L91** Dynamic Functions Forcing the Dynamic Page Renders (6분) [실습] 미션: 쿠키 코드를 끈 뒤 npm run build 전후의 출력 표를 비교해 어떤 라우트가 정적으로 바뀌었는지 적기. 확인: 빌드 표에서 /, /about, /photos, /projects 등이 정적(○)으로 표시. 규칙: R3. 커밋 #5cb710c
- [ ] **L92** Using generateStaticParams() to Pre-render Pages (5분) [실습] 미션: 함수를 추가하고 npm run build. 글마다 ● 표시와 경로 목록이 출력되는지 확인. 확인: 빌드 로그에서 `/blog/[slug]` 아래 각 글 경로가 나열되고 ●(SSG) 표시. 규칙: R1. 커밋 #e8a6559
- [ ] **L93** SearchParams and Static Pre-Rendering? (9분) [시청] 미션: force-static을 넣고 npm run build, npm start로 페이지네이션이 먹통이 되는지 확인한 뒤 반드시 되돌리기
- [ ] **L94** Creating a Vercel Account and Deploying Live! (7분) [실습] 미션: 현재 blog 프로젝트를 GitHub 저장소로 올리고 Vercel에서 배포. 발급된 주소를 휴대폰으로도 열어보기. 확인: Vercel이 준 `https://프로젝트명.vercel.app` 주소에서 홈, 블로그 목록, 글, 다크모드(쿠키를 껐다면 기본 테마만) 확인. 규칙: R12
- [ ] **L95** Adressing Metadata Base and Talking on Edge vs Node Runtimes (5분) [선택] 개념, 환경변수는 섹션 19에서 다시

### 단계 9. 가계부 UI 부품 (L96~106, 약 3시간 15분)

- 결과물: `Subjects/nextjs/finance` 새 프로젝트. `/playground`에 헤더, Trend 카드 4종, 거래 행, 요약 행, 버튼 변형, Label, Input, Select가 모두 보임
- 신규 개념: 데이터 없이 부품부터 만드는 방식, 클래스 변형 객체, Intl.NumberFormat, useMemo, 커스텀 훅
- 생성 명령: `npx create-next-app@latest finance` (TypeScript Yes, Tailwind Yes, App Router Yes)
- Next 16 핵심: R5(`@plugin "@tailwindcss/forms";`), R6(ref를 prop으로)
- 디펜스
  1. playground 페이지를 따로 두는 이유는?
  2. Trend에서 증가율 계산할 때 이전 값이 0이면 어떻게 처리했나?
  3. 라이브 수정: Button에 `danger` 변형 추가

- [ ] **L96** Section Introduction: Creating UI and Components (1분) [선택] 소개 영상일 뿐
- [ ] **L97** Creating the Project and Playground (11분) [실습] 미션: 프로젝트 생성 후 globals.css를 정리하고, /playground에 제목 "Playground"와 빈 구획 2개(컴포넌트명 h2, 구분선, 내용 칸)를 직접 만들기. 확인: `npm run dev` 후 http://localhost:3000/playground 열어 제목과 구획이 보이면 성공. 다크 모드 OS 설정에서 배경이 어두워지는지 확인. 규칙: R5, R12. 커밋 #421734a
- [ ] **L98** The Header Component (7분) [실습] 미션: PageHeader를 만들고 playground와 /dashboard 두 곳에서 모두 보이게 하기. layout에서 mt-8을 className으로 넘겨 위쪽 간격 주기. 확인: http://localhost:3000/dashboard 에서 상단에 "Finance App" 링크가 보이고 그 아래 "hello from the dashboard". 링크에 마우스를 올리면 밑줄. 커밋 #326115e
- [ ] **L99** Financial Trend Component (12분) [실습] 미션: 수식을 손으로 먼저 계산해보고 함수를 짜기. Intl.NumberFormat의 통화를 USD 또는 KRW(ko-KR)로 바꿔서 표시가 어떻게 달라지는지 확인. 확인: /playground에서 Income, Expense, Investment, Saving 4개 카드가 각각 다른 글자색, 금액은 통화 서식(예: 1,000.00 앞에 기호)으로 표시. 커밋 #17d55b6
- [ ] **L100** Financial Trend Component - More or Less Money? (10분) [실습] 미션: playground의 Trend 4개에 prevAmount를 넣어 증가와 감소 둘 다 나오게 하고, prevAmount를 일부러 빼서 NaN이 0%로 처리되는지 확인. 확인: 카드마다 화살표 아이콘과 "-37% vs last period" 형태 문구. 소수점 없이 정수 표시. 주의: useMemo, 훅 사용 컴포넌트는 서버 컴포넌트에서 못 쓰므로 상단에 `'use client'` 가 없으면 에러. 커밋 #17d55b6
- [ ] **L101** Currency Formatting Hook (4분) [실습] 미션: trend.js 안의 formatCurrency를 지우고 훅으로 교체. 훅 안에서 통화를 바꿔보고 모든 카드에 한 번에 반영되는지 확인. 확인: /playground의 Trend 금액 표시가 이전과 동일하게 유지. 커밋 #cd14711
- [ ] **L102** Transaction Item Component (15분) [실습] 미션: 같은 모양의 행 4개(income, expense, saving, investment)를 만들고 브라우저 폭을 줄였을 때 카테고리가 사라지는지 확인. 아이콘 맵 이름을 직접 정해보기. 확인: /playground에서 행 4개. 폭 768px 미만에서 배지가 숨음. 금액은 오른쪽 정렬. 규칙: R5. 커밋 #21102ee
- [ ] **L103** Transaction Summary Component (6분) [실습] 미션: summary 행 1개를 transaction item 위에 놓고 금액 열이 위아래로 정렬되는지 확인. 확인: /playground에서 "날짜 ... 3,500.00" 행이 아래 item들과 금액 열이 맞음. 커밋 #e2a0041
- [ ] **L104** Creating Buttons (11분) [실습] 미션: variant 3개 x size 4개 조합을 playground에 나열하고, 새 variant "danger"(빨강)를 직접 추가. 확인: /playground에서 버튼 여러 개. outline은 테두리, ghost는 마우스 올릴 때만 배경. 규칙: R5. 커밋 #3019090
- [ ] **L105** Styling Form Inputs (10분) [실습] 미션: text, select, checkbox 3개를 같은 느낌(둥근 모서리, 회색 테두리, 다크 모드 배경)으로 꾸미기. 체크박스는 text-gray-700 으로 체크 배경색이 정해지는 점 확인. 확인: /playground Forms 구획에서 입력창이 기본 파란 포커스 링 대신 직접 꾸민 모양. 다크 모드에서 배경이 거의 검정. 규칙: R5. 커밋 #5a467de
- [ ] **L106** Custom React Form Input Components (11분) [실습] 미션: Label, Input, Select 컴포넌트를 만들고 playground의 입력 요소를 모두 교체. 체크박스 label 클릭 시 체크되도록 id와 htmlFor 연결. 확인: label 클릭 시 해당 체크박스가 토글. 터미널과 콘솔에 "Invalid DOM property `for`" 경고가 없어야 함. 규칙: R6. 커밋 #34a5636

### 단계 10. 데이터 표시, 폼, 검증, 서버 액션 (L107~127, 약 6시간 30분)

- 결과물: `/dashboard`에 날짜별로 묶인 거래 목록과 Trend 카드가 각자 로딩. `/dashboard/transaction/add`에서 검증된 폼을 제출하면 저장되고 목록에 바로 나타남
- 신규 개념: 날짜별 그룹핑, 스켈레톤 UI, react-hook-form, Zod 스키마, 환경 변수, 서버 액션, revalidatePath
- 브릿지: 날짜별 그룹핑 = GROUP BY. L111은 `먼저` 모드
- Next 16 핵심: R2, R3, R5, R6, R8, R9, R11
- 진행 팁: 가장 긴 단계. L107~115(데이터 표시)와 L116~127(폼)로 나눠 디펜스를 두 번 한다
- 디펜스
  1. 서버 액션은 어디서 실행되고, 클라이언트에서 어떻게 부르나?
  2. register 이름, Zod 스키마 키, 저장되는 키가 왜 모두 같아야 하나?
  3. 숫자 입력에 `z.coerce.number()`가 필요한 이유는?
  4. 라이브 수정: 금액이 0 이하면 "0보다 커야 합니다" 에러 표시

- [ ] **L107** Section Introduction: Dark Mode, Fetching and Displaying Data (1분) [선택] 소개 영상일 뿐
- [ ] **L108** Adding Light/Dark Mode Toggle (12분) [실습] 미션: 토글 버튼 클릭으로 라이트와 다크가 바뀌고, 새로고침해도 선택이 유지되게 만들기. 어려우면 `next-themes` 라이브러리를 대안으로 검토(강의는 직접 구현을 권함). 확인: /dashboard 오른쪽 위 달과 해 아이콘 클릭 시 배경 전환. 새로고침 후에도 유지. 개발자도구 Application에서 쿠키 확인. 규칙: R2, R5. 커밋 #14142d6
- [ ] **L109** Adding JSON Server as Temporary Data Source (6분) [실습] 미션: json-server를 띄우고 브라우저로 /transactions 와 /transactions/1 을 각각 열어보기. 확인: http://localhost:3100/transactions 에 JSON 배열이 보이면 성공. 규칙: R8. 커밋 #0907ab6
- [ ] **L110** Displaying Transaction List (9분) [실습] 미션: transactions를 fetch해서 TransactionItem으로 화면에 나열. 먼저 console.log로 터미널에서 데이터가 보이는지 확인한 뒤 렌더링. 확인: http://localhost:3000/dashboard 에서 db.json의 거래 목록 표시. 터미널(서버 쪽)에 console.log 출력(브라우저 콘솔이 아님). 규칙: R3. 커밋 #7ab2029
- [ ] **L111** Grouping Transactions by Date (15분) [먼저] 미션: 먼저 console.log로 grouped 결과를 터미널에서 확인. db.json에 다른 날짜의 거래를 하나 추가해 그룹이 2개로 나뉘는지 확인한 뒤 화면에 렌더링. 확인: /dashboard에서 날짜별 소계 행 + 그 아래 거래들. 그룹 사이 간격(space-y-8). 규칙: R3. 커밋 #c29f833
- [ ] **L112** Separator & Loading Skeleton (8분) [실습] 미션: Skeleton으로 가로 3개 한 줄, 세로 3줄 예시를 playground에 만들기. 폭 클래스를 바꿔 모양 달라지는지 확인. 확인: /playground에서 회색 막대가 깜빡이듯 맥동(pulse). 커밋 #cdb5de7
- [ ] **L113** Wrapping Transaction Loading in Suspense (10분) [실습] 미션: 3초 지연을 켜고 Suspense 전후로 화면이 어떻게 달라지는지 비교(전에는 3초간 빈 화면, 후에는 헤더 먼저 표시). 확인: 새로고침 시 헤더와 제목이 즉시 뜨고 목록 자리에 스켈레톤이 3초 동안 표시된 뒤 실제 목록으로 교체. 규칙: R8. 커밋 #ee46acb
- [ ] **L114** Fetching Finance Trends (11분) [실습] 미션: db.json의 trends를 직접 추가하고 http://localhost:3100/trends/Income 이 열리는지 먼저 확인한 뒤 래퍼 컴포넌트를 구현. 확인: /dashboard에서 4개 카드가 각자 값으로 표시(지연 켜면 순차적으로 채워짐). 주의: 래퍼 컴포넌트 이름이 trend라서 import 이름 충돌 주의(별칭 BaseTrend 사용). 커밋 #939c2e5
- [ ] **L115** Making a Suspense Fallback for Trends (9분) [실습] 미션: 개발자도구로 실제 Trend 카드 높이(약 88px)를 재고 fallback 높이를 같게 맞추기. 확인: 지연을 켜고 새로고침해도 카드 영역이 위아래로 흔들리지 않음. 규칙: R5. 커밋 #7f8a3c5
- [ ] **L116** Section Introduction: Forms, Validation, Server Actions (1분) [선택] 소개 영상일 뿐
- [ ] **L117** Adding Transaction Page & Link (12분) [실습] 미션: Add 링크를 만들고 클릭해 새 페이지로 이동. variants 분리 후 button이 깨지지 않는지 playground 확인. 확인: http://localhost:3000/dashboard 에서 Add 링크 클릭 시 http://localhost:3000/dashboard/transaction/add 로 이동하며 "Add transaction" 제목. 규칙: R5. 커밋 #38d187d
- [ ] **L118** Adding Transaction Form Markup (12분) [실습] 미션: consts.js의 배열을 map으로 option에 연결해 select 2개를 만들고, 5개 필드와 Save 버튼이 있는 폼 화면을 완성. 확인: http://localhost:3000/dashboard/transaction/add 에 폼 표시. 탭 제목이 "Add transaction | Finance App". 커밋 #e82cc23
- [ ] **L119** Introducing React Hook Form (14분) [실습] 미션: 모든 필드에 register를 붙이고 Save 클릭 시 브라우저 콘솔에 폼 값 객체가 찍히게 하기. 필드 이름을 type, category, created_at 또는 강의와 같은 이름으로 통일. 확인: 브라우저 개발자도구 Console에 `{type, category, createdAt, amount, description}` 객체가 출력. 규칙: R6. 커밋 #de2a6e7
- [ ] **L120** Form Validation in React Hook Form (10분) [실습] 미션: amount, created_at, description 3개에 필수 검증을 걸고, 빈 칸으로 Save 했을 때 빨간 메시지가 나오는지 확인. amount에 0을 넣어 최소값 메시지 확인. 확인: 빈 칸 입력 후 다른 칸으로 이동하면 빨간 메시지. 모든 검증 통과 전에는 콘솔에 출력 없음. 커밋 #0e4f2ef
- [ ] **L121** Introducing the Zod Library (7분) [실습] 미션: 설치만 하고 기존 검증을 제거한 뒤, Save 클릭 시 오류 없이 제출되는 상태(검증 공백)를 확인. 다음 강의 준비. 확인: 빈 폼 Save 시 오류 메시지 없이 console.log가 찍힘. 규칙: R11. 커밋 #1330d30
- [ ] **L122** Adding a Zod Schema for Transactions (12분) [실습] 미션: 스키마를 만들고 연결한 뒤, 잘못된 날짜 "invalid", 금액 0, 빈 설명을 각각 넣어 3가지 오류 메시지가 뜨는지 확인. 금액 최소값을 10으로 바꿔 보기. 확인: 각 입력 아래 지정한 메시지 표시. 유효한 값이면 콘솔에 폼 데이터 출력. 규칙: R11. 커밋 #f9c18d1
- [ ] **L123** Using Environment Variables (11분) [실습] 미션: 코드에 박힌 localhost:3100 주소를 모두 환경변수로 교체. 폼에서 console.log로 `process.env.API_URL` 이 undefined, `NEXT_PUBLIC_API_URL` 은 값이 나오는 것을 직접 확인. 확인: 대시보드가 이전처럼 정상 표시. 주소를 일부러 틀리게 바꾸면 에러가 나는 것도 확인 후 복구. 커밋 #53850bb
- [ ] **L124** Storing Form Data (11분) [실습] 미션: 폼을 제출해 db.json에 새 항목이 생기는지 확인. 개발자도구 Network의 Fetch/XHR 탭에서 요청과 응답 코드 201 확인. 확인: db.json 파일에 방금 입력한 항목 추가. Network 탭에서 transactions POST 201 Created. 규칙: R3. 커밋 #dee2a1d
- [ ] **L125** Server Actions in Action (14분) [실습] 미션: 서버 액션을 만들고 폼 저장 후 /dashboard로 이동했을 때 방금 거래가 목록에 바로 나오는지 확인. Network 탭에서 POST 요청 헤더에 Next-Action 이 있는지 찾아보기. 확인: Save 클릭 시 /dashboard로 자동 이동하고 새 거래가 즉시 표시. 규칙: R3, R9. 커밋 #81d850b
- [ ] **L126** Server Actions Explained (7분) [시청] 미션: 확인 질문. (1) 서버 액션 파일 맨 위 'use server'가 없으면 어떻게 되는가? (2) 서버 액션 안에 비밀 키를 써도 되는 이유는?
- [ ] **L127** Form Error Component (3분) [실습] 미션: FormError를 만들고 5개 필드 모두에 적용. 각 필드를 일부러 틀려 보며 오류가 제자리에 나오는지 확인. 확인: 잘못된 입력 시 각 입력 아래 빨간 메시지. 코드 중복이 사라짐. 커밋 #3429ff7

### 단계 11. Supabase 연결, DB 함수, 필터와 Load more (L128~150, 약 7시간)

- 결과물: json-server를 Supabase Postgres로 교체. 시드 스크립트로 가짜 거래 생성. 기간 선택(지난 7일, 30일 등)에 따라 Trend와 목록이 바뀌고 Load more로 더 불러옴
- 신규 개념: Supabase 클라이언트(서버용), `.env.local`의 공개 키와 비밀 키, 시드 스크립트, RPC, 클라이언트 컴포넌트를 서버 컴포넌트로 감싸기
- 브릿지 (링고 강점 구간): L141, L144, L147의 Postgres 함수(SUM, coalesce, interval, LIMIT/OFFSET)는 `먼저` 모드. SQL을 먼저 짜고 강의와 비교
- Next 16 핵심: R10 전부, R1, R2
- 시작 전 의무: `.gitignore`에 `.env*.local` 확인, `SUPABASE_SERVICE_ROLE`에는 `NEXT_PUBLIC_`를 절대 안 붙임
- 디펜스
  1. anon(publishable) 키는 브라우저에 노출돼도 되는데 service role 키는 안 되는 이유는?
  2. 함수 인자를 바꿨을 때 `create or replace`가 실패하는 이유는?
  3. Load more에서 정렬 키에 id를 추가한 이유는?
  4. 라이브 수정: 기간 옵션에 "지난 1년" 추가 (SQL과 select 둘 다)

- [ ] **L128** Section Introduction: Adding Supabase, Seeding Data, Handling Errors (1분) [선택] 소개 영상 1분
- [ ] **L129** What is Supabase? (9분) [시청] 미션: 확인 질문: Supabase가 제공하는 기능 4가지를 말해보기 (DB, Auth, Storage, 권한/RLS 등). 자신이 아는 DB(예: BigQuery, MySQL)와 뭐가 다른지 한 줄로 적기
- [ ] **L130** Setting Up and Connecting the Next.js Project to Supbase! (20분) [실습] 미션: (1) supabase.com 가입, 새 프로젝트 생성(DB 비밀번호 따로 저장, 지역은 Seoul 또는 가까운 곳). (2) Table Editor에서 transactions 테이블 생성. (3) 패키지 설치, .env.local 작성, server.js 작성(TypeScript 타입 부분은 제거). (4) dashboard page에서 select 후 console.log. (5) Table Editor에서 행 하나 추가 후 새로고침해서 터미널 로그에 나오는지 확인. 확인: `npm run dev` 터미널에 select 결과 배열(처음엔 `[]`, 행 추가 후 id와 created_at 한 건) 출력. 상태 코드 200. Supabase Table Editor에서 행 확인. 규칙: R2, R10. 커밋 #004a102
- [ ] **L131** Adding Columns to Transactions Table (3분) [실습] 미션: Table Editor에서 4개 컬럼을 영상대로 추가. 그 뒤 SQL Editor에서 `select * from transactions;` 실행, 테이블 Definition 버튼으로 생성된 DDL을 읽어보기. 확인: Table Editor 열 목록에 id, created_at, amount, type, category, description 6개. Definition에서 amount/type은 NOT NULL
- [ ] **L132** Reading Transactions from Postgres (6분) [실습] 미션: 행을 3개 직접 입력(income, expense+category+description). 목록 컴포넌트를 DB 조회로 교체. 정렬을 ascending true/false로 바꿔보며 순서 변화 관찰. 확인: `http://localhost:3000/dashboard`에 입력한 행이 목록에 나타남. 수동 입력 후 새로고침하면 반영. 규칙: R10. 커밋 #6048d54
- [ ] **L133** Generating Seed Data (19분) [실습] 미션: 시드 스크립트를 직접 작성하고 실행. 건수를 10에서 100으로 늘려 한 번 더 실행해서 총 건수 확인. SQL Editor에서 `select type, count(*), sum(amount) from transactions group by type;`로 분포 확인. 확인: 터미널에 "data was inserted"류 메시지. Table Editor 행 증가. 대시보드 목록에 랜덤 거래 표시. 커밋 #a7ba6f7
- [ ] **L134** Adding Data to Postgres (8분) [실습] 미션: 폼에 값을 넣고 저장 후, Table Editor에서 새 행 확인. 화면에는 바로 안 나오고 새로고침해야 나오는 현상을 직접 관찰. 확인: 터미널에 formData 로그. Table Editor에 새 행. 새로고침 후 목록 반영. 규칙: R10. 커밋 #d86d67d
- [ ] **L135** Server Actions - Handling Errors (9분) [실습] 미션: 액션 맨 위에 `throw new Error('고의 에러')`를 넣어 화면에 메시지가 뜨는지 확인한 뒤 제거. 정상 저장 후 새로고침 없이 목록에 반영되는지 확인. 확인: 폼 하단에 에러 문구 표시. 정상 저장 시 대시보드로 이동하며 새 거래가 바로 보임. 커밋 #8e26bbe
- [ ] **L136** Server Actions - Server Data Validation (8분) [실습] 미션: 폼의 클라이언트 검증 줄을 임시로 주석 처리하고 빈 폼 저장 시 "Invalid data"가 뜨는지 확인. 확인 후 되돌리기. 확인: 폼 하단에 Invalid data 에러. Table Editor에 빈 행이 생기지 않음. 커밋 #fe2184b
- [ ] **L137** Error Boundary for Trend and Removing JSON Server (6분) [실습] 미션: JSON server를 끈 상태에서 새로고침했을 때 Trend 3칸에만 에러 문구가 뜨고 나머지 페이지는 정상인지 확인. 폼 페이지와 다크모드도 동작하는지 확인. 확인: 대시보드 Trend 영역에 빨간 "Cannot fetch ... trend data", 목록과 폼은 정상. 주의: react-error-boundary는 클라이언트 전용 기능이라, 서버 컴포넌트 파일에서 import해 에러가 나면 래퍼 컴포넌트에 `'use client'`를 붙인다(에러가 날 때만 조치). 커밋 #59a2fdd
- [ ] **L138** Section Introduction: More Complex Forms, Validation and Database Queries (2분) [선택] 소개 영상
- [ ] **L139** Intermediate Dynamic Forms (7분) [실습] 미션: type을 Income으로 바꾸면 category가 비활성화되고 값이 초기화되는지 확인. 반대로 Expense로 바꾸면 활성화되는지 확인. 확인: 브라우저 폼에서 직접 조작. 아직 저장은 검증 오류로 막히는 것이 정상(다음 강의에서 해결). 커밋 #52279eb
- [ ] **L140** Complex Transformation and Validation with Zod (10분) [실습] 미션: expense + 카테고리 미선택 시 "category is required" 에러, income은 카테고리 없이 통과하는지 확인. 카테고리를 선택했다가 income으로 바꿨을 때 콘솔에 category가 undefined로 찍히는지 확인. 확인: 폼 에러 메시지, 브라우저 콘솔 로그. 커밋 #fb4e9df
- [ ] **L141** Finance Trend - Postgres Function Calculating SUM (11분) [먼저] 미션: 먼저 SQL Editor에서 `select sum(amount) from transactions where type = 'income';`를 실행해 값 확인. 그 쿼리를 함수로 감싸고 `select calculate_total('income');`로 호출해 같은 값이 나오는지 비교. 확인: SQL Editor 결과값이 위 단순 쿼리와 일치. Database > Functions 목록에 calculate_total 표시. 커밋 #5de8f24
- [ ] **L142** Finance Trend - Calling Postgres Function using RPC (6분) [실습] 미션: 함수 이름을 일부러 틀리게 써서 에러 바운더리 문구가 뜨는지 확인한 뒤 복구. 4개 카드의 합계가 SQL Editor 값과 같은지 비교. 확인: 대시보드 Income/Expense/Investments/Savings 숫자가 `select type, sum(amount) from transactions group by type;`와 일치. 규칙: R10. 커밋 #8133792
- [ ] **L143** Transactions Date Range - Selecting Option (12분) [실습] 미션: 드롭다운을 바꾸고 주소창의 range 값이 바뀌는지 관찰. 새로고침 후에도 선택이 유지되는지 확인. 확인: 브라우저 주소창 `/dashboard?range=last7days` 등. select 표시값이 URL과 일치. 주의: `useSearchParams`를 쓰는 클라이언트 컴포넌트는 프로덕션 빌드(`npm run build`) 시 Suspense로 감싸라는 에러가 날 수 있다(개발 서버에선 무관). 커밋 #d05d0f2
- [ ] **L144** Transactions Date Range - Get Current & Previous Sum in Postgres (18분) [먼저] 미션: 함수 생성 후 SQL Editor에서 `select * from calculate_total('last7days','income');`와 `'last30days'`, `'last12months'`를 각각 실행해 current/previous가 나오는지 확인. 가능하면 가장 오래된 거래 날짜와 비교해 previous가 0인 이유를 설명해보기. 확인: SQL 결과가 두 컬럼(current_amount, previous_amount) 한 행. 오류 없이 Success. 커밋 #d744c37
- [ ] **L145** Transactions Date Range - Display the Trend (5분) [실습] 미션: 드롭다운을 바꾸면서 Trend 4개 숫자와 증감 퍼센트가 바뀌는지 확인. SQL Editor의 같은 조건 결과와 숫자를 대조. 확인: `/dashboard?range=last7days`, `last12months` 등에서 카드 값 변화. 터미널에 console.log 출력(임시). 규칙: R1. 커밋 #45e050c
- [ ] **L146** Section Introduction: Transactions Filtering and Pagination (1분) [선택] 소개 영상
- [ ] **L147** Fetching Transactions Using Postgres Function (15분) [먼저] 미션: SQL Editor에서 `select * from fetch_transactions();`, `select * from fetch_transactions('last7days');`를 실행해 건수가 다른지 확인. 앱에서 range를 바꿔 목록이 따라 바뀌는지 확인. 메인 `/dashboard`로 이동 시 select가 기본값(30일)으로 리셋되는지 확인. 확인: SQL 결과 행 수와 화면 목록 수 일치. range 변경 시 목록 변화. 규칙: R1, R10. 커밋 #eae2caa
- [ ] **L148** Refactoring to a Client Component with Server Component Wrapper (13분) [실습] 미션: 구조도(Page > Suspense > Wrapper > List)를 직접 손으로 그려보기. 위 파일 3개를 수정해 기존과 동일하게 목록이 나오는지 확인하고, 새로고침 시 로딩 스켈레톤이 보이는지 확인. 확인: 기능은 이전과 같음. 새로고침 때 로더 표시. 빌드/실행 에러 없음. 주의: 서버 액션 파일 맨 위 `'use server'` 필요(기존 파일에 있으면 OK). 커밋 #8afab57
- [ ] **L149** Load More Functionality (Pagination) (14분) [실습] 미션: range를 12개월로 두고 Load more를 여러 번 눌러 10건씩 늘어나는지 확인. range를 바꿨을 때 목록이 새로 초기화되는지 확인(key 제거 시 어떻게 되는지도 비교). 확인: 목록 길이가 10, 20, 30으로 증가. SQL로 `select count(*) from fetch_transactions('last12months', 0, 1000);`와 비교. 커밋 #3a8bc84
- [ ] **L150** UX Improvements (No More Data, Loading Spinner etc) (13분) [실습] 미션: 시드 데이터를 한 번 더 실행해 같은 시각 데이터를 만들고 Load more 시 "same key" 콘솔 경고가 나오는지 확인한 뒤 정렬 키를 추가해 경고가 사라지는지 확인. 크롬 DevTools Network에서 Slow 3G로 스피너 확인. 확인: 브라우저 콘솔에 중복 key 경고가 사라짐. 더 불러올 것이 없으면 버튼이 사라짐. 커밋 #048439f

### 단계 12. 수정과 삭제 (L151~159, 약 1시간 50분)

- 결과물: 거래 삭제(확인 단계, 스피너, 목록에서 즉시 사라짐), 수정 페이지(없는 id면 404). CRUD 완성
- 신규 개념: 낙관적 UI 반영, 고차 함수 콜백, 동적 라우트에서 데이터 불러와 폼 초기값 채우기
- Next 16 핵심: R1(await params)
- 주의: `.delete()`, `.update()`에 `.eq('id', id)`를 빼먹으면 전체 행이 바뀐다. 테스트 DB에서만
- 디펜스
  1. 삭제 후 Load more 페이지가 어긋나는 이유와 해결법은?
  2. 라이브 수정: 삭제 확인을 버튼 두 번 누르기 대신 confirm 창으로 바꾸기

- [ ] **L151** Section Introduction: Updating and Deleting Data (1분) [선택] 소개 영상
- [ ] **L152** Naive Implementation of Delete Transaction Button (10분) [실습] 미션: 삭제 전 해당 행의 id를 Table Editor에서 메모해 두고, 버튼 클릭 후 그 id가 사라졌는지 확인. 반드시 테스트 데이터로만 실행. 확인: Supabase Table Editor에서 해당 행이 사라짐. 화면 목록은 새로고침 전까지 남아 있는 것이 정상(다음 강의에서 해결). 커밋 #663d678
- [ ] **L153** Delete Confirmation & Loading UI (10분) [실습] 미션: 첫 클릭에 빨강, 두 번째 클릭에 스피너가 나오는지 확인(Network Slow 3G 사용). 한 건 삭제 후 Table Editor에서 확인. 확인: 버튼 색 변화, 스피너, 삭제 후 새로고침 시 목록에서 사라짐. 커밋 #1e93b41
- [ ] **L154** Removing Transaction from the List (5분) [실습] 미션: 삭제 후 새로고침 없이 항목이 목록에서 즉시 사라지는지 확인. `handleRemoved(id)` 대신 `handleRemoved(id)()`처럼 괄호를 바꿔 에러가 나는지 실험해보기(선택). 확인: 삭제 성공 시 해당 행이 화면에서 즉시 제거됨. 커밋 #d7ed470
- [ ] **L155** Handling the Pagination Shift (5분) [실습] 미션: 변경 전 코드로 처음 10건 중 하나를 삭제하고 Load more 시 누락되는지 재현(가능하면). 그 후 수정해서 누락이 사라지는지 확인. SQL로 총 건수와 화면 건수 비교. 확인: `select count(*) from fetch_transactions('last12months', 0, 1000);` 값과 끝까지 Load more로 불러온 건수가 일치. 커밋 #98324cd
- [ ] **L156** Transaction Editing Page & Fetching Transaction Data (8분) [실습] 미션: 목록에서 연필 클릭 후 URL의 id가 Table Editor의 id와 같은지 확인. 터미널에서 조회된 객체 확인. 확인: `/dashboard/transaction/<uuid>/edit` 접속, 터미널에 해당 행 로그. 규칙: R1. 커밋 #d667351
- [ ] **L157** Transaction Editing Form and Handling 404 (9분) [실습] 미션: 연필로 들어가 기존 값이 채워지는지 확인. 주소의 id를 일부러 틀리게 바꿔 404 화면이 나오는지 확인. 새 거래 추가 폼에서는 오늘 날짜가 기본값인지 확인. 확인: edit 페이지에 기존 값 채움, 날짜 칸 비활성. 잘못된 id는 "Transaction not found". 규칙: R1. 커밋 #f0e5826
- [ ] **L158** Update Transaction Server Action (Updating Data in Supabase) (3분) [실습] 미션: 최신 거래의 description을 바꿔 저장하고, Table Editor와 12개월 보기 목록 모두에서 반영 확인. 확인: Table Editor의 description 컬럼 값 변경. 저장 후 대시보드로 이동하며 새 값이 보임. 커밋 #cc4689a
- [ ] **L159** Loading UI for the Edit Form (4분) [실습] 미션: Network를 Slow 3G로 두고 연필 클릭 시 스켈레톤이 보이는지 확인. 확인: 데이터 로딩 중 회색 스켈레톤, 이후 폼 표시. 커밋 #cf20797

### 단계 13. 인증과 권한 (L160~179, 약 4시간 45분)

- 결과물: 이메일 매직 링크로 로그인과 로그아웃. 로그인 안 하면 `/dashboard` 접근 불가. 다른 계정으로 로그인하면 자기 거래만 보임
- 신규 개념: 라우트 핸들러(route.ts), 세션 쿠키, proxy에서 토큰 갱신과 리다이렉트, RLS 정책(USING, WITH CHECK)
- 브릿지: RLS = 행 단위 권한이 걸린 뷰. L176~178의 정책 SQL은 `먼저` 모드
- Next 16 핵심: R4(proxy), R6(useActionState), R10, R2
- 준비물: 실제 받을 수 있는 이메일 2개(RLS 테스트용). Supabase 기본 메일은 시간당 발송 제한이 있어 반복 테스트 시 막힐 수 있음
- 진행 팁: L168~171은 Supabase 문서 코드 복붙 구간. 복붙 허용, 대신 "proxy가 언제 실행되는지, getUser를 왜 거기서 부르는지"만 설명하게 한다
- 디펜스
  1. 매직 링크를 클릭한 뒤 로그인 상태가 되기까지 어떤 순서로 무엇이 실행되나?
  2. proxy에서 막는 것과 RLS로 막는 것의 차이는? 둘 다 필요한 이유는?
  3. RLS를 켰는데 select가 빈 배열이면 무엇을 의심하나?
  4. 라이브 수정: `/settings`도 로그인 필수로 만들기

- [ ] **L160** Section Introduction: User Authentication (2분) [선택] 소개 영상일 뿐
- [ ] **L161** Authentication Layout and Page (11분) [실습] 미션: 코드는 GitHub에서 복사해도 됨. (auth) 폴더와 login 폴더를 직접 만들고 /login 접속해 보기. URL에 auth가 안 붙는 것 확인. 확인: http://localhost:3000/login 에 "Welcome back"과 왼쪽 위 Back 링크 표시. 커밋 #24382c9
- [ ] **L162** Login Form & Invoking Server Action Through Form Submission (6분) [실습] 미션: 이메일 입력 후 제출하고, 터미널에 찍힌 FormData에서 email 키를 찾아보기. name을 바꾸면 키가 바뀌는지 실험. 확인: npm run dev 터미널 출력에 email 값. 브라우저 콘솔이 아니라 터미널에 나온다는 점이 포인트. 커밋 #081e4f1
- [ ] **L163** Form Pending State (7분) [실습] 미션: 브라우저 개발자도구 Network 탭에서 느린 네트워크로 바꾸고 제출해 스피너가 도는지 확인. 확인: 제출 버튼에 회전 아이콘 표시. 에러 "Only plain objects..." 류가 나면 아이콘에 class 대신 className을 썼는지 확인. 주의: useFormStatus는 React 19에서도 react-dom에서 import (변경 없음). 커밋 #195276e
- [ ] **L164** Handling Form Server Action Errors (9분) [실습] 미션: 본인 이메일과 다른 이메일로 각각 제출해서 빨간 메시지와 초록 메시지가 갈리는지 확인. 반환 객체에 필드를 하나 더 추가해 보기. 확인: 버튼 아래에 메시지가 색 다르게 표시. 규칙: R6. 커밋 #8cb8590
- [ ] **L165** Supabase Auth Overview and Passwordless Auth (Magic Links) (10분) [실습] 미션: 본인 메일로 제출 후 Supabase 대시보드 Authentication > Users에서 "Waiting for verification" 상태 사용자가 생겼는지 확인. 링크는 아직 누르지 말 것. 확인: 메일함에 Supabase 확인 메일 도착, Users 목록에 이메일 표시. 커밋 #b35c3bb
- [ ] **L166** How the Authentication Works in Supabase (and in General) (5분) [시청] 미션: 확인 질문. 로그인 상태는 어디에 저장되는가? 서버가 그걸 어떻게 아는가? (답: 쿠키, 요청마다 브라우저가 보냄)
- [ ] **L167** What's a Route Handler? (7분) [시청] 미션: 확인 질문. page.js와 route.js의 차이는? GET이 캐시되는 경우와 안 되는 경우는? (강의 기준: request를 쓰거나 cookies를 쓰면 동적). 규칙: R3
- [ ] **L168** Sign-In Route Handler (8분) [실습] 미션: 먼저 더미 JSON으로 /auth/confirm 이 열리는지 확인한 뒤 Supabase 코드로 교체. TypeScript 문법(타입 표기, 느낌표)을 JS로 지우는 연습을 직접 해 보기. 확인: 브라우저에서 localhost:3000/auth/confirm 접속 시 {"name":"..."} JSON 표시(더미 단계). 규칙: R2, R10. 커밋 #76a0017
- [ ] **L169** Configuring Supabase Email Templates and Testing the Auth Process (5분) [실습] 미션: 두 템플릿을 교체하고 Save. 테스트 사용자는 Users에서 삭제 후 다시 가입. 메일 링크 클릭 후 /dashboard 에서 터미널에 사용자 정보가 나오는지 확인. 확인: Authentication > Users에서 확인된 계정, 터미널에 id, email, role 출력. 규칙: R10. 커밋 #5ef1f36
- [ ] **L170** Is User Authenticated? (7분) [실습] 미션: 로그인 상태와 로그아웃 상태 두 화면을 모두 만들어 보기(로그아웃은 쿠키 삭제로 확인 가능). 확인: 헤더 우측에 본인 이메일 표시. 커밋 #8862194
- [ ] **L171** What's a Middleware? Creating a Supabase Token Refresh Middleware (12분) [실습] 미션: 먼저 matcher를 "/" 로 좁혀 /dashboard 로 리다이렉트하는 예제를 만들어 미들웨어가 실행됨을 체험한 뒤, 정식 matcher로 되돌리고 updateSession을 붙이기. 확인: 로그인 상태가 유지되는지, 터미널에 에러가 없는지. 파일 위치가 src/가 아니라 프로젝트 루트(app와 같은 레벨)여야 함. 규칙: R4, R10. 커밋 #b1aff09
- [ ] **L172** Signing Users Out (7분) [실습] 미션: 로그아웃 버튼 만들어 눌러 보기. 로그아웃 후 /dashboard 를 직접 열어 열쇠 아이콘이 보이는지 확인. 확인: 스피너 후 /login 으로 이동, 헤더가 열쇠 아이콘으로 바뀜. 커밋 #fcc8a47
- [ ] **L173** Section Introduction: User Authorization (1분) [선택] 소개
- [ ] **L174** What's Authorization? (6분) [시청] 미션: 확인 질문. 토글AI에 적용하면 어떤 역할과 자원이 필요한가? 표(역할 x 테이블 x select/insert/update/delete)로 그려 보기
- [ ] **L175** Protecting Routes in Middleware (6분) [실습] 미션: 로그아웃 상태로 /dashboard 접속해 튕기는지, 로그인 상태로 /login 접속해 튕기는지 둘 다 시험. 구조분해 {data:{user}} 오타 주의. 확인: 주소창에 직접 입력했을 때 자동 이동. 규칙: R4. 커밋 #bd15a54
- [ ] **L176** What's Postgres RLS? How it Integrates with Supabase Auth? (11분) [시청] 미션: 확인 질문. UPDATE 정책에 USING과 WITH CHECK가 둘 다 필요한 이유는? (답: 남의 행 수정 금지, 소유자 바꿔치기 금지)
- [ ] **L177** Link Users with Transactions and INSERT RLS Policy (9분) [먼저] 미션: Table Editor에서 직접 컬럼 추가 후 앱에서 거래 1건 입력. 목록엔 안 보이지만 Table Editor에는 user_id가 채워진 행이 있는지 확인. 확인: Table Editor의 transactions 행에 user_id, 앱 목록은 비어 있음(SELECT 정책 아직 없음). 주의: 정책 생성 UI가 영상과 다를 수 있으니 강의 커밋의 SQL을 SQL Editor에서 실행하는 쪽이 안전. 커밋 #6fe1d16
- [ ] **L178** Adding RLS Policies for SELECT, UPDATE and DELETE (6분) [먼저] 미션: 정책 3개 추가 후 수정과 삭제가 실제로 되는지 확인. 가능하면 다른 이메일로 가입해 서로의 거래가 안 보이는지 테스트. 확인: 앱 목록에 내 거래 표시, 삭제 후 새로고침해도 사라짐, Authentication > Policies 에 4개 정책. 커밋 #6ec1a41
- [ ] **L179** Updating the Seeding Script with Users (8분) [실습] 미션: 스크립트를 실행하고 auth 스키마 users 테이블과 transactions 행 수 증가를 확인. 앱에서는 내 것만 보이는지 확인. 확인: 터미널에 "100 transactions stored", 앱에서 내 거래만 표시. node 스크립트는 npm이 아니라 node 파일명 으로 실행. 커밋 #3549d12

### 단계 14. 파일 업로드, 사용자 설정, 최종 배포 (L180~199, 약 4시간 30분)

- 결과물: 설정 페이지에서 아바타 업로드(비공개 버킷, 서명 URL로 표시, 옛 파일 삭제), 이름과 기본 조회 기간 저장. Vercel 주소에서 로그인까지 동작
- 신규 개념: Supabase Storage와 버킷 정책, 서명 URL, 사용자 메타데이터, 서버 측 Zod 검증과 필드별 에러
- Next 16 핵심: R6, R10, R11, R1. `next.config.ts`의 `images.remotePatterns` 수정 후 서버 재시작
- 배포 주의: Supabase Site URL을 Vercel https 주소로 바꾸고, Redirect URLs에 `http://localhost:3000/**`도 추가해야 로컬 로그인이 계속 된다
- 디펜스
  1. 비공개 버킷 이미지를 보여주려면 왜 서명 URL이 필요한가?
  2. 클라이언트 검증이 있는데 서버에서 Zod로 또 검증하는 이유는?
  3. 라이브 수정: 아바타 최대 크기를 1MB로 바꾸고 초과하면 에러 표시

- [ ] **L180** Secion Introduction: Uploading and Managing Files (1분) [선택] 소개
- [ ] **L181** Settings Layout and Side Navigation (14분) [실습] 미션: 시간이 없으면 GitHub 코드를 복사. 최소한 세 페이지 폴더를 직접 만들고 /dashboard/settings, /avatar, /profile 로 이동해 보기. 확인: 왼쪽 메뉴에서 현재 페이지가 회색으로 강조. 커밋 #b8c021a
- [ ] **L182** Supabase Storage, Buckets and RLS (6분) [시청] 미션: 확인 질문. 공개와 비공개 버킷 중 아바타에 무엇을 쓸 것인가, 이유는? 강의는 비공개를 선택
- [ ] **L183** Creating a Bucket and Setting up Security Policies (10분) [실습] 미션: 버킷 생성 후 정책 4개를 SQL Editor로 직접 작성 또는 강의 커밋 SQL 실행. 캐스팅 에러를 일부러 겪어 보기. 확인: Storage > Policies 에 avatars 정책 표시. 커밋 #58e0016
- [ ] **L184** Image Uploading Form (4분) [실습] 미션: 폼만 먼저 만들어 화면 확인(액션 미연결). 확인: /dashboard/settings/avatar 에 파일 선택 입력과 버튼. 커밋 #0e43303
- [ ] **L185** Image Uploading Server Action (7분) [실습] 미션: 512KB 이하 png 업로드 성공 확인, 이후 1MB 이상 파일과 pdf 로 실패하는 것도 확인. 확인: Supabase Storage > avatars 버킷에 새 파일 생성. 커밋 #11e051f
- [ ] **L186** Styling the File Input (3분) [선택] 디자인 전용. 규칙: R5. 커밋 #2444185
- [ ] **L187** Updating the User Metadata (5분) [실습] 미션: 업로드 후 터미널에서 user_metadata.avatar 에 파일명이 들어갔는지 확인. 확인: 터미널 출력의 user_metadata 안 avatar. 커밋 #26dd274
- [ ] **L188** Displaying User Avatar (Signed URLs) (13분) [실습] 미션: 업로드 후 헤더에 동그란 아바타 표시. 일부러 버킷 파일을 지워 기본 아이콘으로 폴백되는지도 확인. 확인: 헤더 우측 아바타 이미지. "hostname not configured" 에러가 나면 next.config 수정 후 dev 서버 재시작. 규칙: R10. 커밋 #a0b6cec
- [ ] **L189** Alert Component (8분) [선택] 코드 복사로 충분. 커밋 #42deede
- [ ] **L190** More Graceful Error Handling in Server Actions (6분) [실습] 미션: 파일 선택 없이 제출해 에러 알림, 정상 파일로 성공 알림 확인. 확인: 빨간 Error 알림과 초록 Success 알림. 규칙: R6. 커밋 #8295b09
- [ ] **L191** Deleting Files (Old Avatars) (9분) [실습] 미션: 같은 이미지를 3번 업로드하며 버킷 파일 수가 늘지 않고 교체되는지 확인(목록 보기로 전환). 확인: Storage > avatars 에서 이전 파일 삭제됨. 커밋 #2647972
- [ ] **L192** Section Introduction: User Settings, Server Side Form Validation (1분) [선택] 소개
- [ ] **L193** Success and Error Alert Components - Refactor (4분) [선택] 리팩터링. 커밋 #3a2b8d9
- [ ] **L194** Scaffolding Settings Page and Form (10분) [실습] 미션: 폼 껍데기와 빈 액션을 만들고 브라우저 콘솔에서 defaults 객체 확인. 확인: 브라우저 콘솔(터미널 아님)에 defaults 출력. 규칙: R6. 커밋 #c15cd2d
- [ ] **L195** User Settings - Inputs and Loading UI (12분) [실습] 미션: loading.js 를 만들고 네트워크 느리게 설정해서 로딩 화면 확인. 확인: /dashboard/settings 새로고침 시 스켈레톤 후 폼 표시. 커밋 #4c280da
- [ ] **L196** User Settings - Saving and Applying Settings (8분) [실습] 미션: 기본 뷰를 12개월로 저장하고 /dashboard 이동 시 12개월이 선택되는지, 7일을 고르면 URL에 range 가 붙는지 확인. 확인: 헤더에 이름 표시, 대시보드 기본 범위 변화. 규칙: R1. 커밋 #5506878
- [ ] **L197** User Settings - Validating Data Server Side using Zod (11분) [실습] 미션: 이름을 1글자로 제출해 터미널에 {fullName:[...]} 형태가 찍히는지 확인. 확인: 터미널에 필드별 에러 객체. 규칙: R11
- [ ] **L198** Displaying the (Server Side) Validation Errors (6분) [실습] 미션: 에러 표시 확인 후 올바른 값으로 재제출해 성공 메시지 확인. "errors is not defined" 에러를 겪고 모든 return 에 errors:{} 넣기. 확인: 입력칸 아래 빨간 에러 문구, 올바른 입력 시 초록 성공 문구. 규칙: R6
- [ ] **L199** Going Live! (7분) [실습] 미션: Vercel에 저장소를 임포트하고 배포. 배포 주소로 매직 링크 로그인까지 성공시키기. 확인: https://프로젝트명.vercel.app/dashboard 에서 로그인 성공, 대시보드에 내 데이터 표시. 규칙: R10

### 부록. Git과 GitHub (L200~206)

- 단계 8의 L94 전에 L202, L205, L206만 본다. L203(Windows), L204(Linux)는 건너뛴다
- L206은 토큰을 원격 URL에 넣는 방식이라 대신 `gh auth login` 또는 SSH 키를 쓴다

- [ ] **L200** Section Introduction: Introduction to Git and GitHub (1분) [시청] 미션: 이미 git 사용 중이면 건너뛰기
- [ ] **L201** Introduction to Git (6분) [시청] 미션: 확인 질문. commit 과 push 의 차이는? (답: commit 은 내 컴퓨터에 저장, push 는 GitHub 로 올림)
- [ ] **L202** Installing Git on Mac (2분) [시청] 미션: 터미널에서 git --version 실행
- [ ] **L203** Installing Git on Windows (3분) [선택] Windows 전용
- [ ] **L204** Installing Git on Linux (1분) [선택] Linux 전용
- [ ] **L205** Commiting Changes in Git (6분) [시청] 미션: 프로젝트 파일 하나를 수정하고 git status 로 변경 확인, add, commit 후 git log 에서 새 커밋 확인
- [ ] **L206** GitHub, Remote Repository, Pushing Changes (10분) [실습] 미션: 저장소를 만들고 push 해서 GitHub 웹에 코드가 보이는지 확인. 토큰이 .git/config 에 평문으로 남는 방식이라 가능하면 gh auth login 또는 브라우저 로그인(Git Credential Manager) 방식을 대신 권장. 확인: GitHub 저장소 페이지에 파일과 커밋 목록. .env.local 이 올라가지 않았는지(.gitignore 에 포함) 반드시 확인


---

## 5. 흔들리는 개념 추적

2회 이상 실패한 개념을 기록한다. 3회 연속 바로 답하면 졸업.

| 개념 | 처음 막힌 날 | 실패 횟수 | 메모 | 상태 |
|---|---|---|---|---|
| children (태그 사이 내용이 props.children으로 넘어감) | 2026-10-23 | 2 | L8에서 읽기 1회 이해 못함, L16 layout에서 "children이 뭔지 모름". 링고가 짠 `<Card>AA</Card>` 예시 + "태그 = 함수 호출 Card({children})" + C 구조체로 설명하니 통함. 2026-10-23 확인 문제 3개 정답(연속 1회) | 흔들림 |
| JSX는 부모 하나로 감싸야 함 (`JSX expressions must have one parent element`) | 2026-10-23 | 2 | 1회: `{true && (<Card/><Card/>)}`, "JSX는 함수 호출, 자리 하나에 값 하나" + C `return a b;` 비유로 이해하고 div로 감싸 해결. 2회: 2026-10-25 `about/projects/page.tsx`의 return에 `<h1>`, `<h2>` 나란히. 힌트(전에 푼 것 떠올리기)만 줌. Fragment `<>` 는 아직 모름 | 흔들림 |

---

## 6. 프로젝트 현황

| 단계 | 내용 | 강의 | 상태 | 디펜스 |
|---|---|---|---|---|
| 0 | 환경과 프로젝트 구조 | L1~3 | done | 2026-10-23 질문 3개 통과, 라이브 수정은 생략 |
| 1 | React 기초 | L4~13 | done | 2026-10-23 질문 3개 통과, 라이브 수정(highlight prop, 삼항으로 className) 통과. 색 뒤바뀜 버그 스스로 수정 |
| 2 | 라우팅, 레이아웃, 링크 | L14~19 | done | 2026-10-24 질문 3개 통과(Q1 about 폴더 누락 후 교정), 라이브 수정 /blog/[slug]/comments 통과 (폴더 구조는 트리 그림으로 설명해야 이해함) |
| 3 | 데이터 가져오기와 느린 데이터 | L20~31 | done | 2026-10-25 질문 3개 통과(Q2 revalidate 단위 초/next 키 교정), 라이브 수정 "Total: N" ProjectList 안에 넣어 통과. map, fetch/json 분리 이유, Promise는 별도 설명 필요했음 |
| 4 | 스타일링 | L32~38 | done | 2026-10-25 방어 통과 (Q1 md: 방향 교정, 라이브 수정 lg:grid-cols-3) |
| 5 | 에러 처리 | L39~46 | done | 2026-10-25 방어 통과 (Q2 about/layout 에러는 global-error 가 아니라 한 칸 위 app/error.tsx 가 잡는다고 교정), 라이브 수정은 L46 블로그 전용 404(app/blog/not-found.tsx + [slug]/layout.tsx notFound)로 대체. reset vs retry 는 retry-lab 으로 확인 |
| 6 | 이미지, 폰트, 메타데이터 | L47~62 | done | 2026-10-26 방어 통과 (Q1 용량 7.5MB→150kB, /_next/image 주소. Q2 fill+relative 는 relative 지워 보는 실험으로 확인). Q3 탭 제목은 L61 template+generateMetadata 로 대체. L54 Lighthouse, blur 는 건너뜀. L62 og 이미지 파일은 Claude 가 만들고 링고가 크기/방향 수정 |
| 7 | 블로그 본체 | L63~80 | in_progress | |
| 8 | 다크모드, 쿠키, 배포 | L81~95, L200~206 | pending | |
| 9 | 가계부 UI 부품 | L96~106 | pending | |
| 10 | 데이터 표시, 폼, 서버 액션 | L107~127 | pending | |
| 11 | Supabase, DB 함수, Load more | L128~150 | pending | |
| 12 | 수정과 삭제 | L151~159 | pending | |
| 13 | 인증과 권한 | L160~179 | pending | |
| 14 | 파일 업로드, 설정, 최종 배포 | L180~199 | pending | |

상태: `pending` → `in_progress` → `defense` → `done`

---

## 7. 소통 메타 로그

- 2026-10-23: 엑셀 비유(절대참조, VLOOKUP, 요구사항 메모 vs 설치 영수증)가 잘 먹힘. 기술 용어는 비유 하나 + 실제 파일 예시 하나로 설명
- 2026-10-23: 링고는 실습 위주로 하나씩 해 나가길 원함. 개념 강의를 길게 설명하지 말고 바로 만들게 한다
- 2026-10-23: 강의 영상(Next 14)과 내 화면(Next 16)이 다르면 크게 혼란스러워함. 차이는 미리 짚어 준다
- 2026-10-23: 링고가 "영상 안 보고 튜터랑만 학습"하기로 함. 1장 기본 루프의 영상 단계는 튜터의 짧은 개념 설명(3~5줄 + 예시 코드 조각 1개)으로 대체한다. [시청] 강의는 튜터가 핵심만 요약하고 확인 질문 1개, [실습]/[먼저]는 개념 설명 후 바로 미션. 힌트 3단계의 (3) "강사 커밋 diff"는 링고가 원할 때만
- 2026-10-23: 디펜스 질문에 "가르쳐줘"라고 하면 바로 답을 준다. 왜 묻는지 근거를 궁금해함(인출 연습이라고 설명함)
- 2026-10-23: L7(컴포넌트+props+3회 사용)에서 "너무 어렵다, 작게 작게". 미션은 한 메시지에 한 걸음(변화 1개, 개념 1개, 화면 결과 1개)으로 쪼갠다. 새 문법은 정확한 코드 조각을 보여 주고 "됨"을 받은 뒤 다음 걸음. 용어/도구(Tailwind 등)는 쓰기 전에 먼저 소개
- 2026-10-23: useState를 엑셀/인쇄물 비유로 설명했을 때 두 번 "이해안감". C 코드(`int count; void setCount(v){count=v; redraw();}`)로 바꾸니 이해함. JS/React 동작은 C 코드 비유 우선, 엑셀 비유는 설정/도구 쪽에만
- 2026-10-23: 컴퓨터 없이 개념만 읽은 L7~L11은 체크 안 함. 실습 목록은 `stage1-practice.md`. 다음 세션은 이 파일부터 실습
- 2026-10-24: `await-demo`의 `new Promise((resolve) => setTimeout(() => resolve(...)))` 구조에서 막힘. 원인은 화살표 함수 두 겹 + `resolve` 출처가 안 보임. 이름 붙은 함수로 펼치기 + "Promise 내부 개념 코드"로 설명했으나 "차근차근 쌓아서" 요청 → 링고가 "실습으로 하나씩" 제안. 곁가지 랩 `promise-lab/README.md`(8단계, 단계마다 실행 전 예측 기록)로 진행. 비동기(2-4 신규 개념 3번)는 개념 설명보다 터미널 실습이 먼저
