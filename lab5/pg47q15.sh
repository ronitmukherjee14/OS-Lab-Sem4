echo "Enter a number : "
read n
i=1
sum=0
while [ $i -le $n ]
do
sum=`expr $sum + $i \* $i`
i=`expr $i + 1`
done
echo "Sum of squares from 1 to $n = $sum"