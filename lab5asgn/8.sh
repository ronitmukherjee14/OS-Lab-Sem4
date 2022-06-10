echo "Enter basic Salary"
read sal
da=`expr $sal \* 15 / 100`
hra=`expr $sal \* 30 / 100`
gross=`expr $sal + $da + $hra`
echo "Gross Income $gross"