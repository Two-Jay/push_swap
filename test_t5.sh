#!/bin/bash
make re
# echo "****** size 3 ******"
# ./push_swap 1 3 2
#  ./push_swap 2 1 3
#  ./push_swap 2 3 1
#  ./push_swap 3 1 2
#  ./push_swap 3 2 1

# echo "****** size 4 *******"
# ./push_swap 1 2 3 4
# ./push_swap 1 2 4 3
# ./push_swap 1 3 4 2
# ./push_swap 1 3 2 4
# ./push_swap 1 4 3 2
# ./push_swap 1 4 2 3
# ./push_swap 2 1 3 4
# ./push_swap 2 1 4 3
# ./push_swap 2 3 4 1
# ./push_swap 2 3 1 4
# ./push_swap 2 4 3 1
# ./push_swap 2 4 1 3
# ./push_swap 3 1 2 4
# ./push_swap 3 1 4 2
# ./push_swap 3 2 1 4
# ./push_swap 3 2 4 1
# ./push_swap 3 4 1 2
# ./push_swap 3 4 2 1
# ./push_swap 4 1 2 3
# ./push_swap 4 1 3 2
# ./push_swap 4 2 1 3
# ./push_swap 4 2 3 1
# ./push_swap 4 3 1 2
# ./push_swap 4 3 2 1

# echo "****** size 5 *******"
# ./push_swap 1 2 5 3 4
# ./push_swap 1 5 2 4 3
# ./push_swap 1 3 4 2 5
# ./push_swap 1 3 2 5 4
# ./push_swap 1 4 3 2 5
# ./push_swap 5 1 4 2 3
# ./push_swap 2 5 1 3 4
# ./push_swap 2 5 1 4 3
# ./push_swap 2 3 4 5 1
# ./push_swap 2 3 1 4 5
# ./push_swap 2 4 3 1 5
# ./push_swap 2 4 1 3 5
# ./push_swap 3 1 2 5 4
# ./push_swap 3 5 1 4 2
# ./push_swap 3 2 5 1 4
# ./push_swap 5 3 2 4 1
# ./push_swap 5 3 4 1 2
# ./push_swap 3 4 5 2 1
# ./push_swap 4 1 2 5 3
# ./push_swap 4 1 3 2 5
# ./push_swap 4 2 1 3 5
# ./push_swap 4 5 2 3 1
# ./push_swap 4 3 5 1 2
# ./push_swap 4 3 2 5 1



# by jeonpark
# 랜덤 생성 코드 by https://42born2code.slack.com/archives/CU6MU5TB7/p1618280285371100?thread_ts=1618252568.360600&cid=CU6MU5TB7
​
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