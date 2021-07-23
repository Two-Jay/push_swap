#!/bin/bash
make re

# by jeonpark
# 랜덤 생성 코드 by https://42born2code.slack.com/archives/CU6MU5TB7/p1618280285371100?thread_ts=1618252568.360600&cid=CU6MU5TB7
​
# push_swap 경로 설정해주세요
# CNT : 원소 개수
# LIMIT : 최대 operation 개수
​
CNT=$1
LIMIT=$2
ARG=`jot -r $CNT -2147483648 2147483647 | tr "\n" " "`
NUM=`./push_swap $ARG | wc -l`
​
while [ $NUM -lt $LIMIT ]
do
echo $NUM
ARG=`jot -r $CNT -2147483648 2147483647 | tr "\n" " "`
NUM=`./push_swap $ARG | wc -l`
done