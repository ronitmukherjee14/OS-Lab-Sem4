echo "Enter your number"
read number
isEven=`expr $number % 2`
if [ $isEven -eq 0 ]
then
echo "Number is even "
else
echo "number is odd"
fi