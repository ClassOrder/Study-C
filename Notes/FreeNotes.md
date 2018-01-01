## 신규 자료형
- longlongint: 표현 => printf("%lld", var);
- long

## 부동소숫점자리
- 근사값에 의한 계산 떄문에 발생하는 오차
- float은 6자리 수준, double은 16자리 수준에서 발생

### 상수화된 문자배열
- 경계검사 ?
- 스트링 배열과 관련하여

### 결국 모든 것은 문서
- 이름과 주석의 중요성 강조
- 변수명 작성할 때 누구라도 알아볼 수 있도록 할 것
- 그럴 일은 보통 없겠지만... 변수 명 한글로 하지 말 것을 계속 강조..

### 표준 문서를 확인

# 논리사고

# 수학

##### 임베디드, 커널 개발자?
- OS 이론

# HCI - Human Computer Interaction
- CLI
- GUI
- UX

# Buffer?
- 메모리, 사전정의: 완충기

### getchar(), scanf(), gets()
- getchar() : 한글자씩 읽음
- scanf() : 규칙에 따라 읽음
- gets() : 한줄 단위로 읽음
- scanf, gets는 자체적으로 보안결함이 존재 => BOF에 의한 Overrun으로 인한 보안 결함 발생 => gets_s(), scanf_s()를 사용할 것을 추천 => scanf_s()는 윈도우에만 있어서 다른 것을 사용해야할 경우도 있음
- Non Buffered 계열의 _getchar() 같은 애들과는 근본이 다름(#include <conio.h>).