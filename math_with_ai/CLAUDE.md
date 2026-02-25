# math_with_ai

`AllStudy/CLAUDE.md`의 원칙을 상속한다. 이 파일은 수학 학습 시스템의 규칙을 정의한다.

---

## 목표

어떤 수학 주제든 스스로 학습할 수 있는 자립. 콘텐츠 커버리지가 아니라 메타스킬(meta-skill).

정의(definition)를 정확히 진술하고, 증명(proof)을 구성하고, 반례(counterexample)로 경계를 테스트하고, 가정(assumption)을 바꿔 구조를 이해하는 능력. 이 네 가지가 되면 어떤 수학 교재든 독립적으로 읽을 수 있다.

---

## 피드백 루프 (Feedback Loop)

수학의 가장 빠른 피드백: **정의(definition) $\to$ 증명 시도(proof attempt) $\to$ 반례(counterexample)**.

- 정의가 부정확하면 증명이 성립하지 않는다 (즉각 피드백)
- 증명에 빈틈이 있으면 반례가 찌른다 (즉각 피드백)
- Claude가 1차 피드백 제공자 (브라우저 없으니까)

웹의 "코드 $\to$ 브라우저 렌더링"에 대응하는 것이 "정의 $\to$ 증명 $\to$ 반례"다. 이 루프를 끊지 않는다.

---

## Python (Colab)

탐색/검증 보조 도구. 증명의 대체가 아님.

- 증명 전 수치 실험(numerical experiment)으로 직관 잡기 (패턴 발견, 반례 후보 탐색)
- 시각화(visualization)로 기하적 직관 확인
- 스크래치패드(scratchpad)이므로 로컬 저장 안 함 — 증명이 핵심 산출물

---

## 표기 원칙 (Writing Conventions)

- **수학 기호는 LaTeX**: 인라인 `$...$` 사용. 유니코드 기호(→, ∀ 등) 대신 `$\to$`, `$\forall$` 등.
- **주요 용어 영어 병기**: 수학 용어가 처음 등장할 때 반드시 한국어(English) 형태로 병기. 이후 반복 시 생략 가능. SUBJECT.md, definitions.md, 증명 파일 모두 적용.
- **암기 대상은 반드시 영어 병기**: `definitions.md`에 작성하는 정의(definition)는 용어와 진술 모두 영어를 병기한다. 디펜스 정의 암송(definition recitation) 시 영어 용어도 함께 암기 대상.

---

## 네이밍 (Naming)

- 정식 프로젝트: `{NN}_{topic_name}` (예: `00_logic_and_proof`, `01_linear_algebra`)
- 갭 메움(gap fill): `gap/{topic_name}` (예: `gap/functions`, `gap/sequences`)

---

## 프로젝트 라이프사이클 (Project Lifecycle)

### 1. SUBJECT.md 작성

프로젝트 시작 전 Claude가 스펙을 작성한다. 이전 프로젝트가 done이 아니면 다음 SUBJECT.md를 작성하지 않는다.

### 2. (선택) Colab 탐색

SUBJECT.md의 탐색 과제(exploration task)를 Colab에서 수행. 수치 실험과 시각화로 직관을 먼저 잡는다. 증명 전 감 잡기 단계.

### 3. assignment/ 증명 작성

`definitions.md`에 정의를 작성하고, `proofs/`에 개별 증명을, `counterexamples/`에 반례 구성을 작성한다.

### 4. 디펜스 (Defense)

증명 워크스루(proof walkthrough) + 정의 암송(definition recitation) + 반례 도전(counterexample challenge) + 가설 수정(conjecture modification).

---

## assignment/ 구조

```
assignment/
├── definitions.md      # 정의 + 직관 + 비예(non-example). 프로젝트당 하나의 참조 문서.
├── proofs/             # 개별 증명 파일 (markdown). 파일명: P{N}_{topic}.md
└── counterexamples/    # 반례 구성 파일. 파일명: C{N}_{topic}.md
```

증명과 반례는 별개 활동이므로 분리한다.

---

## 논리적 체크포인트 (Logical Checkpoints)

시각적 체크포인트(웹)를 대체. 증명 작성 중 아래 시점에서 멈추고 확인한다:

| # | 체크포인트 | 확인 사항 |
|---|-----------|-----------|
| 1 | 정의 작성 후 | 보지 않고 재진술 가능한가? 비예(non-example) 3개 이상 있는가? |
| 2 | 증명 전략(proof strategy) 선택 후 | 왜 이 기법인가? 다른 기법이면 어떻게 달라지는가? |
| 3 | 증명 초안(draft) 후 | 각 줄이 이전 줄에서 논리적으로 따라오는가? 비약(gap)은 없는가? |
| 4 | 증명 완성 후 | 가정을 바꾸면 어디서 깨지는가? 역(converse)은 성립하는가? |

---

## 디펜스 프로토콜 (Defense Protocol)

### 단계

| 단계 | 내용 | 기준 |
|------|------|------|
| 1. 증명 워크스루 (Proof Walkthrough) | 각 단계의 논리적 근거(justification)를 설명 | 모든 줄의 근거를 대야 함 |
| 2. 정의 암송 (Definition Recitation) | 노트 없이 정확한 진술 | **100%** — 수학에서 정의가 부정확하면 그 위에 쌓은 모든 증명이 무효 |
| 3. 반례 도전 (Counterexample Challenge) | 조건 제거, 조건 약화, 역(converse) 확인, 일반화(generalization) 시도 | 적어도 하나의 반례를 직접 구성 |
| 4. 가설 수정 (Conjecture Modification) | Claude가 새 명제를 제시, 링고가 기법 적용 | 전이 능력(transfer) 테스트 — 외운 게 아니라 이해한 건지 |
| 5. 판정 (Verdict) | PASS / RETRY | - |

### PASS 조건 (모두 충족)

- 필수 증명 전체 완성
- 증명 워크스루에서 모든 단계의 논리적 근거 설명
- 정의 암송 100%
- 반례 도전에서 최소 하나의 반례 직접 구성
- 가설 수정 과제 완료

### RETRY

- 위 조건 미충족 시. 부족한 영역 명시 후 재도전.

### Defense Log 형식

디펜스 결과는 SUBJECT.md 하단 Defense Log 섹션에 기록:

```
### Defense Log

| 회차 | 날짜 | 결과 | 비고 |
|------|------|------|------|
| 1 | YYYY-MM-DD | PASS/RETRY | 부족한 영역 또는 특기사항 |
```

---

## gap 프로토콜 (Gap Protocol)

정식 프로젝트 진행 중 고교 갭 발견 시:

1. 정식 프로젝트 **일시 중단**
2. `gap/{topic}/`에 미니 SUBJECT.md 작성 (정의 + 핵심 증명 + 축소 디펜스)
3. 메운 후 정식 프로젝트 **복귀**

gap 프로젝트는 정식 프로젝트보다 가벼움. 정의 정확 진술 + 핵심 증명 몇 개 + 짧은 디펜스.

고교 갭을 미리 다 메우지 않는다. DA 7년 경력으로 직관적으로 아는 것에 시간 과투자 방지 (AllStudy 원칙: "대응 있는 개념에 시간을 과투자하지 않는다").

---

## 증명 기법 태그 (Proof Technique Tags)

증명 파일에 사용한 기법을 태그한다:

| 태그 | 기법 |
|------|------|
| `[direct]` | 직접 증명 (direct proof): 가정 $\Rightarrow$ 결론 |
| `[contrapositive]` | 대우 증명 (proof by contrapositive): $\lnot Q \Rightarrow \lnot P$ |
| `[contradiction]` | 귀류법 (proof by contradiction): 결론 부정 $\Rightarrow$ 모순 |
| `[induction]` | 수학적 귀납법 (mathematical induction) |
| `[cases]` | 경우 분할 (proof by cases / exhaustion) |
| `[construction]` | 구성적 증명 (constructive proof): 존재성(existence) |
| `[epsilon-delta]` | $\varepsilon$-$\delta$ 논법 ($\varepsilon$-$\delta$ argument) |

프로젝트가 진행되면 태그를 확장한다.

---

## 리스크 예측 (Risk Prediction)

mart_script 증거 기반. 링고의 인지 패턴이 수학 학습에서 어떤 형태로 나타나는지:

| 인지 패턴 (mart_script 증거) | 수학에서의 발현 | 대응 |
|------|------|------|
| 과도 추상화(over-abstraction) — 프레임워크가 근거를 앞지름 (Phase 4: circular proof 위험, 두점을 꼭 지나는가 \| 24:09~27:29) | 정의를 정확히 쓰지 않고 "대충 이런 느낌"으로 증명 시작 $\to$ 순환 증명(circular proof) | 논리적 체크포인트 #1: 정의 작성 후 반드시 비예 3개. 정의가 정확하지 않으면 증명 시작 금지 |
| 단일 오독(single misread) $\to$ 연쇄 붕괴(cascading failure) (Phase 3: `if`를 `while`로 읽고 전체 모델 붕괴, Gnl ms \| 00:12:11~00:14:53) | 정의의 한 조건을 잘못 읽으면 그 위의 모든 증명이 무효 | 논리적 체크포인트 #3: 증명 초안 후 각 줄 검증. Claude가 "이 줄의 근거는?" 질문 |
| 프레임워크 $>$ 근거 (Phase 2: 연역적 구조를 팀에 강제, Phase 4: backward-reasoning이 circular로 판명) | 증명 기법을 먼저 정하고 문제에 끼워맞춤 | 논리적 체크포인트 #2: 왜 이 기법인가? 다른 기법이면? |
| 추상화 수준 혼동(level-of-abstraction confusion) (Phase 3: 함수 계약과 표시 행동 혼동, Gnl ms \| 00:21:09~00:26:11) | 정의(definition)와 정리(theorem) 혼동, 필요조건(necessary condition)과 충분조건(sufficient condition) 혼동 | 디펜스 단계 3 (반례 도전): 조건 제거/약화로 필요/충분 구분 강제 |

---

## 시퀀스 설계 (Sequence Design)

교과서 순서(집합 $\to$ 함수 $\to$ 수열 $\to$ 극한 $\to$ 미분)가 아닌 목표 중심 시퀀스:

1. **00_logic_and_proof** — 메타스킬 (진단 겸용). 증명이란 무엇인가, 어떻게 하는가.
2. **01_linear_algebra** — 첫 실전 대학 주제. 미적분 없이 독립 진입 가능, 증명 훈련에 최적, CS/ML에 직결, 추상적 사고(abstract thinking)의 첫 관문.
3. **02_analysis_intro** — 해석학 입문 (introduction to analysis). $\varepsilon$-$\delta$ 논법. 극한(limit)의 엄밀한 정의.
4. 이후: P00 진단과 진행 중 식별된 갭에 따라 결정.

고교 과정을 선행 조건(prerequisite)으로 쌓지 않는다. 대학 주제를 하면서 막히는 고교 개념은 `gap/`에서 즉시 메운다.

---

## 프로젝트 현황

| # | 프로젝트 | 상태 | 핵심 메타스킬 |
|---|----------|------|-------------|
| 0 | 00_logic_and_proof | pending | 명제논리(propositional logic), 증명 기법(proof techniques), 정의 우선 사고(definition-first thinking) |
| 1 | 01_linear_algebra | pending | 벡터공간(vector space), 선형변환(linear transformation), 추상적 구조 증명 |
| 2 | 02_analysis_intro | pending | $\varepsilon$-$\delta$, 극한(limit), 엄밀한 논증(rigorous argument) |

상태: `pending` $\to$ `in_progress` $\to$ `defense` $\to$ `done`

---

## 학습자 프로필

| 항목 | 내용 |
|------|------|
| 수학 경험 | 고교 공통수학에 빈틈 있음 (본인 진술). DA 7년 경력으로 통계/확률 직관은 있음 |
| 강점 | 정의 우선 사고(definition-first thinking), 경계조건 테스트 본능(boundary-testing instinct) (mart_script Phase 4 증거) |
| 약점 | 과도 추상화(over-abstraction), 프레임워크가 근거보다 앞서감 (mart_script Phase 2, 4 증거) |
| 확실히 아는 것 | (프로젝트 진행하며 기록) |
| 흔들리는 개념 | (프로젝트 진행하며 기록) |

### 흔들리는 개념 추적

| 개념 | 증거 | 상태 |
|------|------|------|

### 소통 메타 로그

| 날짜 | 피드백 | 반영 |
|------|--------|------|
