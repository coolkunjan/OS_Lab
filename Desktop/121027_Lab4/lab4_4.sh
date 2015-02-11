echo -n "Enter the number"
read nm
n=`expr $nm / 2 `
i=2
sym=0
if [ $nm == 2 ]
then
sym=0
elif [ $nm == 3 ]
then 
sym=0
else
while [ "$i" -le "$n" ]
do

d=`expr $nm % $i `

if [ $d == 0 ]
then
sym=1
#echo $sym
fi

i=`expr $i + 1 `
done
fi

if [ $sym == 1 ]
then
echo Composite number
else
echo Prime number 
fi 
