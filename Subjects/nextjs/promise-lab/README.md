# promise-lab: new, Promise, resolve, await 를 바닥부터 쌓기

시작: 2026-10-24

## 왜 하나

`app/temp/await-demo/page.tsx` 의 아래 코드 구조가 이해 안 됨.

```ts
function slowValue(): Promise<string> {
  return new Promise((resolve) => {
    setTimeout(() => resolve("사과"), 2000);
  });
}
```

Next 16 은 `params`, `searchParams`, `cookies` 까지 전부 `await` 로 꺼내야 한다 (CLAUDE.md 3장 R1, R2). 앞으로 계속 나오니까 여기서 한 번 제대로 쌓고 간다.

막힌 진짜 이유: 화살표 함수가 두 겹으로 겹쳐 있고, `resolve` 가 어디서 왔는지 안 보임.

## 진행 방법

- 이 폴더에서 `node stepN.ts` 로 실행. Node v26 이라 `.ts` 를 컴파일 없이 바로 돌린다
- Next 는 안 씀. 터미널 출력이 피드백 창
- 한 단계 = 파일 하나 = 개념 하나
- **실행 전에 예측을 먼저 적는다.** 예측과 결과가 다른 곳이 진짜 배울 곳
- 코드는 링고가 직접 친다. 막히면 튜터에게 질문

## 진도

| 단계 | 개념 | 파일 | 상태 | 날짜 |
|---|---|---|---|---|
| 1 | 함수도 값이다 | step1.ts | in_progress | 2026-10-24 |
| 2 | 화살표 함수 | step2.ts | pending | |
| 3 | `new` 와 클래스 | step3.ts | pending | |
| 4 | Promise 상자의 상태 | step4.ts | pending | |
| 5 | resolve 는 Promise 가 건네주는 버튼 | step5.ts | pending | |
| 6 | 타이머로 나중에 채우기 | step6.ts | pending | |
| 7 | async / await 로 꺼내기 | step7.ts | pending | |
| 8 | 원래 코드 다시 읽기 | (await-demo) | pending | |

---

## 1단계: 함수도 값이다

**개념**

C 에서 함수를 넘기려면 함수 포인터가 필요하다. JS 에서는 함수가 그냥 값이라 변수에 담고, 인자로 넘길 수 있다.

```
hello     함수 자체 (C 의 함수 포인터 hello)
hello()   함수를 지금 실행한 결과 (C 의 hello())
```

**미션** `step1.ts`

1. `"hi"` 를 출력하는 함수 `hello` 만들기
2. `const f = hello;` 로 담고 `f()` 호출. 같은 결과인지 확인
3. 아래 두 줄을 하나씩 실행해서 차이 관찰

   ```ts
   setTimeout(hello, 2000);
   setTimeout(hello(), 2000);
   ```

**예측** (실행 전에 적기)

- 3번 첫째 줄:
- 3번 둘째 줄:

**결과**

-

**확인 질문**: `setTimeout(resolve("사과"), 2000)` 이라고 쓰면 무슨 일이 일어나나?

---

## 2단계: 화살표 함수

**개념**

`() => { ... }` 는 이름 없는 함수를 그 자리에서 만드는 문법. 아래 둘은 같다.

```ts
function hello() { console.log("hi"); }
const hello = () => { console.log("hi"); };
```

본문이 한 줄이면 `{}` 를 생략할 수 있다: `const hello = () => console.log("hi");`

**미션** `step2.ts`

1. 1단계의 `hello` 를 화살표 함수로 다시 쓰기
2. 인자를 하나 받아 출력하는 화살표 함수 `say` 만들기. `say("사과")` → `사과`
3. 2초 뒤에 `say("사과")` 가 실행되게 `setTimeout` 쓰기. **1단계 3번에서 배운 것을 써야 한다**

**예측 / 결과 / 확인 질문**: 진행할 때 채운다

---

## 3단계: `new` 와 클래스

**개념**

C 로 치면 `malloc` + 초기화 함수를 한 번에 하는 것.

```c
t_box *b = malloc(sizeof(t_box));
box_init(b, "사과");
```

```ts
const b = new Box("사과");
```

`new` 와 함께 쓰는 틀 = 클래스. `Date`, `Map`, `Promise` 는 JS 에 이미 만들어져 있는 클래스.

**미션**: 진행할 때 채운다

---

## 4단계: Promise 상자의 상태

**개념**

`new Promise(...)` 로 만든 객체는 셋 중 하나의 상태를 가진다. 한 번 채워지면 다시 안 바뀐다.

```
pending (비어 있음) → fulfilled (값 채워짐) 또는 rejected (실패)
```

```c
typedef struct s_promise {
    int   state;   // PENDING / FULFILLED / REJECTED
    char *value;
} t_promise;
```

상자를 채우는 방법은 밖에서 `box.value = ...` 로 못 한다. 채우기 버튼은 상자 안에 숨어 있다.

**미션**: 진행할 때 채운다

---

## 5단계: resolve 는 Promise 가 건네주는 버튼

**개념**

`new Promise(setup)` 을 하면 Promise 가 `setup` 을 **즉시** 호출하면서, 첫 번째 인자로 "채우기 버튼" 함수를 넣어 준다. 그게 `resolve`.

```ts
// Promise 내부 (개념상)
const box = { state: "pending", value: undefined };
function resolve(v) {
  box.state = "fulfilled";
  box.value = v;
}
setup(resolve);   // 내가 넘긴 함수를 호출하며 버튼을 건네줌
return box;
```

- `resolve` 는 내가 만든 게 아니라 Promise 가 만들어서 넘겨준 함수
- 이름은 아무거나 가능. `(done) => ...` 이어도 똑같이 동작. 중요한 건 **첫 번째 자리**

**미션**: 진행할 때 채운다

---

## 6단계: 타이머로 나중에 채우기

**개념**

```ts
return new Promise((resolve) => {            // 상자 생성 + 버튼 받음
  setTimeout(() => resolve("사과"), 2000);   // "2초 뒤에 버튼 눌러 줘" 예약
});
```

빈 상자를 만들고, 받은 버튼을 타이머에 맡긴 뒤, 상자를 바로 돌려준다.

```
0초  slowValue() → 상자 생성 → 타이머 예약 → 빈 상자 반환 (즉시)
2초  타이머 울림 → resolve("사과") → 상자 채워짐
```

비유: 식당 진동벨. 주문하면 벨(Promise)을 바로 받고, 음식이 나오면 주방이 버튼(resolve)을 눌러 벨이 울린다.

**미션**: 진행할 때 채운다

---

## 7단계: async / await 로 꺼내기

**개념**

- `await 상자` = 상자가 채워질 때까지 이 함수를 멈추고 기다렸다가 값을 꺼낸다 (진동벨 울릴 때까지 자리에서 기다리기)
- `async` = 이 함수 안에서 `await` 를 쓰겠다는 표시

**미션**: 진행할 때 채운다

---

## 8단계: 원래 코드 다시 읽기

`app/temp/await-demo/page.tsx` 를 열고 줄마다 1~7단계 중 어느 개념인지 설명한다. 막힘 없이 설명되면 이 랩 졸업.
