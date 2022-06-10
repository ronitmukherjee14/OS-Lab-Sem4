echo "Enter the range"
read num1 num2

for((i=num1;i<=num2;i++))
do

temp=$i
arm=0

while [ $temp -gt 0 ]
do
lastDigit=`expr $temp % 10`
arm=`expr $arm + $lastDigit \* $lastDigit \* $lastDigit`
temp=`expr $temp / 10`
done
if [ $arm -eq $i ]
then
echo "$i is Armstrong Number"
else
echo "$i is not Armstrong Number"
fi

done