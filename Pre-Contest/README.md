# SKKU Coding Platform 모의대회(Pre-Contest)
Date : 2021/01/04 ~ 2021/01/10  
Contest Result : 11th, 4 Solved 3 Unsolved.  

Upsolving Progress  
Problem A : Solved.  
Problem B : Solved.  
Problem C : Solved.  
Problem D : Solved.  
Problem E : Solved.  
Problem F : Solving.  
Problem G : Solving.

## Problem A  
각 조건을 파악한다면 상당히 쉬운 문제이다.  
각 조건에 대해 Condition을 걸어준다면 바로 해결이 가능하다.  

## Problem B  
주어지는 문자열이 H, I, N, O, S, X, Z 중에 하나인지 전부 검사하면 된다.  
일종의 문자열 Brute-Force형 문제.  

## Problem C  
같은 숫자로 Consecutive한 구간을 구하는 문제인데, 특정 숫자를 "무시"할 수 있다는 조건이 있다.  
현재 숫자를 기준으로 다음과 같은 행동을 할 수 있다.  

1. 같은 숫자일 경우 Pass  
2. 다른 숫자일 경우  
2-1. 만약 처음으로 보인 다른 숫자일 경우 저장 후 Pass.  
2-2. 저장된 숫자와 같은 숫자일 경우 Pass.  
2-3. 저장된 숫자와 다를 경우 Stop.  

이를 적용시켜 연속된 가장 긴 구간을 답으로 산출하면 된다.  
## Problem D  
간단하게 Union-Find로 해결할 수 있는 문제.  
+와 -가 서로 상쇄가 가능한가? 에 초점을 맞추어 관계로 이어진 구간의 총 합이 0이상이면 된다.  

참고로, 원래 문제의 의도는 DFS를 이용한 풀이라고 한다.  
(공식 Editorial 참고.)  

## Problem E

## Problem F

## Problem G
