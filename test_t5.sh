CNT=$1
LIMIT=700
INDEX=0
ITER=$2
NUM_OVER=0
MAX=$LIMIT
ARG=`jot -r $CNT -2147483648 2147483647 | tr "\n" " "`
NUM=`./push_swap $ARG | wc -l`
SUM=0
AVR=0
​
while [ $INDEX -lt $ITER ]
do
echo "$INDEX	:	$NUM"
if [ $NUM -ge $LIMIT ]; then
NUM_OVER=`expr $NUM_OVER + 1`
fi
if [ $NUM -gt $MAX ]; then
MAX=$NUM
fi
ARG=`jot -r $CNT -2147483648 2147483647 | tr "\n" " "`
NUM=`./push_swap $ARG | wc -l`
INDEX=`expr $INDEX + 1`
SUM=`expr $SUM + $NUM`
done
AVR=`expr $SUM / $ITER`
echo "$NUM_OVER overred operations for $ITER times"
if [ $NUM_OVER -gt 0 ]; then
echo "Biggest operation number : $MAX"
echo "average operation number : $AVR"
echo "fix it!!!!!!!!!!"
fi