echo "Enter the three numbers"
read a b c
if [ $a -gt $b -a $a -gt $c ]
then
echo "$a is the gretest number"
elif [ $b -gt $a -a $b -gt $c ]
then
echo "$b is the gretest number"
else
echo "$c is the gretest number"
fi