echo "Enter a Number : "
read a
sum=0
num=$a
i=3
while [ $i -gt 0 ]
do
d=`expr $num % 10`
sum=`expr $sum + $d \* $d`
num=`expr $num / 10`
i=`expr $i - 1` 
done
echo "Sum of square of last 3 digits = $sum"

