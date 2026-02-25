# Project 0 — Logic and Proof (논리와 증명)

## I. 소개

수학의 언어와 증명(proof)의 기본 기법을 익힌다. 이 프로젝트는 이후 모든 수학 프로젝트의 기반이자 진단 도구다.

**브릿지(bridge)**: C의 boolean 표현식(`if (a && !b)`)은 명제논리(propositional logic)의 논리연결사(logical connective)다. SQL의 `WHERE` 절은 술어논리(predicate logic)의 양화사(quantifier)와 조건이다. DA에서 "모든 행에 대해 조건이 참인가?"를 확인하는 것은 전칭 양화(universal quantification)의 실전 경험이다. 이 대응은 빠르게 통과한다.

**신규 개념** (프로그래밍에 대응 없음 — 여기에 시간을 쓴다):
- **증명(proof)이란 무엇인가**: 코드는 돌아가면 되지만, 증명은 논리적 비약(logical gap)이 하나라도 있으면 무효
- **증명 기법(proof technique)의 선택**: 같은 명제(proposition)를 직접 증명(direct proof)/대우(contrapositive)/귀류법(contradiction)으로 다르게 증명할 수 있다. 왜 특정 기법이 더 자연스러운가
- **정의(definition)의 정확성**: 코드에서 타입이 맞아야 컴파일되듯, 수학에서 정의가 정확해야 증명이 성립
- **반례(counterexample)의 힘**: 하나의 반례가 보편 명제(universal statement)를 무너뜨린다. 테스트 케이스의 수학 버전이되 — 반례는 "통과"가 아니라 "반증"

---

## II. 공통 지침

### 허용
- 마크다운으로 증명 작성 (LaTeX 수식 표기 사용)
- Python(Colab)으로 수치 탐색/시각화 (탐색 과제)

### 금지
- 교재/인터넷에서 증명 복사 — 자신의 언어로 처음부터 구성할 것
- "자명하다(trivial)", "명백하다(obvious)" 사용 금지 — 모든 단계에 근거(justification)를 댈 것
- 정의를 "대충 이런 느낌"으로 쓰기 금지 — 정확한 진술(precise statement) 필수

### 표기법 규칙 (Notation)
- 명제(proposition): 대문자 $P, Q, R$ 또는 소문자 $p, q, r$ (프로젝트 내 일관되게)
- 전칭 양화사(universal quantifier): $\forall$ (for all)
- 존재 양화사(existential quantifier): $\exists$ (there exists)
- 논리연결사(logical connective): $\land$ (and), $\lor$ (or), $\lnot$ (not), $\to$ (implies), $\leftrightarrow$ (iff)
- 집합(set): 중괄호 $\{\ \}$, $\in$ (element of), $\subseteq$ (subset)
- 증명 끝: $\blacksquare$ 또는 Q.E.D.

---

## III. 정의 목록 (Definitions)

이 프로젝트에서 정확하게 진술해야 하는 14개 정의. `assignment/definitions.md`에 각 정의 + 직관(intuition) + 비예(non-example)를 작성한다.

| # | 정의 | 직관 힌트 |
|---|------|-----------|
| D1 | **명제 (Proposition)** | 참 또는 거짓을 판별할 수 있는 문장. "이 문장은 거짓이다"는? |
| D2 | **진리값 (Truth Value)** | 명제에 할당되는 참($T$) 또는 거짓($F$) |
| D3 | **논리연결사 (Logical Connective)** | $\land$, $\lor$, $\lnot$, $\to$, $\leftrightarrow$. 각각의 진리표(truth table)를 직접 구성 |
| D4 | **조건문 (Conditional, $P \to Q$)** | "$P$이면 $Q$이다." $P$가 거짓일 때 왜 전체가 참인가? C의 short-circuit evaluation과 비교 |
| D5 | **쌍조건문 (Biconditional, $P \leftrightarrow Q$)** | "$P$일 때 그리고 그때만 $Q$." 동치(equivalence)의 의미 |
| D6 | **전칭 양화사 (Universal Quantifier, $\forall$)** | "모든 $x$에 대해." SQL의 `NOT EXISTS ... WHERE NOT`과 대응 |
| D7 | **존재 양화사 (Existential Quantifier, $\exists$)** | "어떤 $x$가 존재하여." SQL의 `EXISTS ... WHERE`과 대응 |
| D8 | **대우 (Contrapositive)** | $P \to Q$의 대우는 $\lnot Q \to \lnot P$. 원래 명제와 논리적으로 동치(logically equivalent) |
| D9 | **역 (Converse)** | $P \to Q$의 역은 $Q \to P$. 원래 명제와 동치가 **아님** — 구분 필수 |
| D10 | **증명 (Proof)** | 공리(axiom)/정의(definition)/이미 증명된 정리(theorem)에서 출발하여 논리적 추론 규칙(rules of inference)만으로 결론에 도달하는 유한 논증(finite argument) |
| D11 | **공리 (Axiom)** | 증명 없이 참으로 받아들이는 기본 명제 |
| D12 | **정리 (Theorem)** | 공리와 정의로부터 증명된 명제 |
| D13 | **짝수/홀수 (Even/Odd)** | 정수 $n$이 짝수 $\Leftrightarrow$ $n = 2k$인 정수 $k$가 존재. 형식적 정의(formal definition)가 증명의 출발점 |
| D14 | **소수 (Prime Number)** | $1$보다 큰 자연수 중, $1$과 자기 자신만을 약수(divisor)로 가지는 수 |

---

## III-b. 탐색 과제 (Exploration Tasks, Colab)

증명 전에 Colab에서 수치 실험/시각화로 직관을 잡는다. 스크래치패드이므로 로컬 저장 안 함.

| # | 과제 | 목적 |
|---|------|------|
| E1 | $1$~$1000$에서 $P \to Q$와 $\lnot Q \to \lnot P$의 진리값을 비교하는 코드 작성 ($P$: "$n$은 $4$의 배수", $Q$: "$n$은 짝수") | 대우(contrapositive)의 동치를 수치적으로 확인 |
| E2 | $\sqrt{2}$ 근사값을 소수점 100자리까지 계산, $(p/q)^2 = 2$를 만족하는 정수 $p, q$를 탐색 | 무리수(irrational number)의 직관 — "아무리 찾아도 없다"를 체감 |
| E3 | $1$~$10000$에서 소수(prime) 분포 시각화 (히스토그램), 소수 간 간격(gap) 분포 | 소수 무한 증명 전 직관 — 소수가 "끝나지 않는 느낌" |
| E4 | 비둘기집 원리(pigeonhole principle) 시뮬레이션: $n+1$개 공을 $n$개 상자에 랜덤 배치, $10^6$회 반복, 겹치는 상자가 항상 존재하는지 확인 | 귀류법(contradiction) 증명 전 직관 |

---

## IV. 필수 파트 (Required Part)

### 필수 증명 과제 (8개)

각 증명을 `assignment/proofs/P{N}_{topic}.md`에 작성한다. 증명 기법 태그(proof technique tag) 필수.

| # | 명제 (Proposition) | 기법 (Technique) | 의도 |
|---|------|------|------|
| P1 | $(P \to Q) \leftrightarrow (\lnot Q \to \lnot P)$ — 대우 동치(contrapositive equivalence) | `[direct]` | 진리표(truth table)에서 직접 보이기. 가장 기본적인 증명 연습 |
| P2 | $\sqrt{2}$는 무리수(irrational) | `[contradiction]` | 귀류법(proof by contradiction)의 표준 예제. 가정 $\to$ 모순의 구조 체험 |
| P3 | $n$이 짝수(even)이면 $n$은 $2$의 배수 — 정의에서 증명 쓰기 연습 | `[direct]` | 형식적 정의(formal definition)를 증명의 출발점으로 사용하는 연습 |
| P4 | $n$이 홀수(odd)이면 $n^2$은 홀수 | `[direct]` | 정의 전개 $\to$ 대수적 조작(algebraic manipulation) $\to$ 정의 재적용 패턴 |
| P5 | $n^2$이 짝수이면 $n$은 짝수 | `[contrapositive]` | 직접 증명이 어려운 것을 대우(contrapositive)로 바꾸는 전략 선택 |
| P6 | 소수(prime)는 무한히 많다 — 유클리드(Euclid) | `[contradiction]` | 고전적 귀류법. 유한 가정 $\to$ 새 소수 구성 $\to$ 모순 |
| P7 | 비둘기집 원리(Pigeonhole Principle): $n+1$개 객체를 $n$개 상자에 넣으면 최소 하나의 상자에 $2$개 이상 | `[contradiction]` | 결론 부정 $\to$ 최대 $n$개 $\to$ 모순 |
| P8 | $3n+1$이 짝수이면 $n$은 홀수 | `[cases]` + `[contrapositive]` | 같은 명제를 두 기법으로 증명. 기법 선택의 자유도를 체험 |

### 논리적 체크포인트 (Logical Checkpoints)

각 증명에서 아래 시점을 확인:

| # | 체크포인트 | 확인 사항 |
|---|-----------|-----------|
| 1 | 정의 작성 후 | 보지 않고 재진술 가능한가? 비예(non-example) 3개 이상 있는가? |
| 2 | 증명 전략(proof strategy) 선택 후 | 왜 이 기법인가? 다른 기법이면 어떻게 달라지는가? |
| 3 | 증명 초안(draft) 후 | 각 줄이 이전 줄에서 논리적으로 따라오는가? |
| 4 | 증명 완성 후 | 가정(assumption)을 바꾸면 어디서 깨지는가? |

---

## IV-b. 진단용 과제 (Diagnostic Tasks, 4개)

고교 수학 갭을 식별하기 위한 과제. 막히면 `gap/`에 메움 여부를 결정한다.

| # | 명제 | 진단 대상 |
|---|------|-----------|
| D-1 | $A \cap (B \cup C) = (A \cap B) \cup (A \cap C)$ — 집합 분배법칙(distributive law of sets) | 집합 연산(set operation) 이해, 원소 추적 증명(element-chasing proof) |
| D-2 | $f: A \to B$가 전단사(bijection)이면 역함수(inverse function) $f^{-1}: B \to A$가 존재하고 유일함을 보여라 | 함수(function) 개념: 정의역(domain), 공역(codomain), 단사(injection), 전사(surjection) |
| D-3 | 연속 3정수의 곱은 $6$의 배수 | 나머지 분류(modular arithmetic), 경우 분할(case analysis) |
| D-4 | 두 점 $(x_1, y_1)$, $(x_2, y_2)$를 지나는 직선의 방정식(equation of a line)을 유도하고, $x_1 = x_2$인 경우를 처리하라 | 좌표기하(coordinate geometry) 기본, 경계 조건(boundary condition) 처리 |

**진단 결과 처리:**
- 막힘 없이 완료 $\to$ 해당 영역 갭 없음
- 개념이 흔들림 $\to$ `gap/{topic}/`에 미니 프로젝트 생성 여부 결정
- 완전히 막힘 $\to$ 반드시 `gap/{topic}/` 생성 후 메움

---

## V. 보너스 (Bonus)

필수 파트가 완벽히 완성되고 디펜스 준비가 될 때만 시도한다.

- 양화사의 드모르간 법칙(De Morgan's Laws for Quantifiers): $\lnot(\forall x\, P(x)) \leftrightarrow \exists x\, \lnot P(x)$, $\lnot(\exists x\, P(x)) \leftrightarrow \forall x\, \lnot P(x)$ 증명
- 수학적 귀납법(mathematical induction)의 원리를 자연수의 정렬 원리(well-ordering principle)에서 유도
- 삼단논법 — 긍정식(Modus Ponens), 부정식(Modus Tollens)의 형식적 정의와 증명에서의 사용 패턴 정리

---

## VI. 디펜스 (Defense)

### 예상 질문

**증명 워크스루 (Proof Walkthrough):**
- P2($\sqrt{2}$ 무리수)를 처음부터 끝까지 설명하라. 각 줄의 논리적 근거(justification)는?
- P8($3n+1$ 짝수 $\to$ $n$ 홀수)에서 두 기법의 증명 구조가 어떻게 다른가?

**정의 암송 (Definition Recitation, 100% 기준):**
- 조건문 $P \to Q$의 진리표를 그려라. $P$가 거짓일 때 왜 전체가 참인가?
- 증명(proof)의 정의를 노트 없이 정확히 진술하라.
- 짝수(even)의 형식적 정의를 쓰라. "2로 나누어떨어지는 수"는 왜 부족한가?
- 소수(prime)의 정의를 쓰라. $1$은 왜 소수가 아닌가?

**반례 도전 (Counterexample Challenge):**
- P4($n$ 홀수 $\to$ $n^2$ 홀수)의 역(converse)은 참인가? 반례 또는 증명.
- P5($n^2$ 짝수 $\to$ $n$ 짝수)에서 "정수(integer)" 조건을 "실수(real number)"로 바꾸면?
- P6(소수 무한)에서 구성한 수 $p_1 p_2 \cdots p_n + 1$이 반드시 소수인가?
- P7(비둘기집)에서 "$n+1$개"를 "$n$개"로 바꾸면 어떻게 되는가?

**가설 수정 (Conjecture Modification):**
- "$n^2 + n$은 항상 짝수"를 증명하라. (새 명제에 기존 기법 적용)
- "무한히 많은 짝수 소수(even prime)가 존재하는가?" (정의와 반례를 즉석 적용)

---

### Defense Log

| 회차 | 날짜 | 결과 | 비고 |
|------|------|------|------|
