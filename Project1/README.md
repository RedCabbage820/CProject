# CProject
 2025-2/8 ~ 2025-3/15 Project

# 목차

1.깃허브

-[1. 깃허브 데스크톱](#깃허브-데스크톱)

2.코드

-[2. 코드 기본 구성](#코드-기본-구성)

----[2-1. printf](#printf)

----[2-2. 서식 지정자](#서식-지정자)
<hr/>

# 깃허브 데스크톱

+ 설치 방법
  > https://desktop.github.com/download/

<hr/>

# 코드 기본 구성
+ 전처리기
+ main

```c
#include <stdio.h>

int main()
{
 printf("C programming");
 return 0;
}
```
# printf
> stdio.h에서 제공해주는 C언어의 대표적인 문장 출력용 기능(함수)입니다.
> 일반적으로 printf("작성하고 싶은 문장");을 작성해 사용합니다.

예시)
```c
int main()
{
 printf("Good day to Study!");
 return 0;
}
```

# 서식 지정자
|지정자 명칭|설명|
|-----|-----|
|%d|정수에 대한 지정자|
|%f|실수에 대한 지정자|
|%c|문자에 대한 지정자|

[목차로](#목차)
