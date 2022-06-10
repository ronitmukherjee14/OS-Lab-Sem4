echo "Enter size of the array"
read n
#taking input from user
for((i=0;i<n;i++))
do
echo "Enter $((i+1)) number"
read nos[$i]
done
#printing the entered number
echo "Numbers entered are"
for((i=0;i<n;i++))
do
echo ${nos[$i]}
done
#main loop
small=${nos[0]}
greatest=${nos[0]}
for((i=0;i<n;i++))
do
#logic for smallest number
if [ ${nos[$i]} -lt $small ]; then
small=${nos[$i]}
#logic for greatest number
elif [ ${nos[$i]} -gt $greatest ]; then
greatest=${nos[$i]}
fi
done
#printing smallest and greatest number
echo "Minimum element in an array is $small"
echo "Maximum element in an array is $greatest"