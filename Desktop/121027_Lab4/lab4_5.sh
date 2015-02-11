choice=1;
while [ $choice -eq 1 ]
do
echo "Enter the Basic Salary";
read b;
if [ "$b" -gt "0" ] 
then
choice=0
else
echo "Enter valid number"
fi

done


echo "Your HRA is $hra";
echo "0.12 * $b" | bc
