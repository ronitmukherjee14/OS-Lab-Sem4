echo "Enter the number to be checked : "
read n
if [ $((n % 2)) -eq 0 ]
then
  echo "Entered number is even."
else
  echo "Entered number is odd."
fi
