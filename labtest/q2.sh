echo "Enter all 3 sides triangle "
read a
read b
read c

d=`expr $a \* $a`
e=`expr $b \* $b`
f=`expr $c \* $c`

e1=`expr $d + $e`
e2=`expr $e + $f`
e3=`expr $f + $d`

if [ $e1 -eq $f -o $e2 -eq $d -o $e3 -eq $e ]
then 
echo "Triangle is right angled triangle"
else
echo "Triangle is not right angled triangle "
fi