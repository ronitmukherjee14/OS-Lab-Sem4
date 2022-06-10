echo "Enter basic salary : "
read b
echo "Enter Dearness allowance : "
read da
echo "Enter House rent allowance : "
read hra
sum=`expr $b + $da + $hra`
echo "Gross salary = $sum"