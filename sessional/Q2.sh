echo "Write your number"
read num
temp=$num
reverse=0
sumofdigits=0
while [ $temp -gt 0 ]
do
lastDigit=`expr $temp % 10`
reverse=`expr $reverse \* 10 + $lastDigit`
sumofdigits=`expr $sumofdigits + $lastDigit`
temp=`expr $temp / 10`
done
echo "Reverse number is $reverse"
echo "Sum of Digits is $sumofdigits"