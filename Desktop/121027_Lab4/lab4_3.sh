echo -n "Enter the last digit upto which you want the sum!"
read no
echo $no
n=`expr $no + 1 `
k=`expr $no \* $n `
ans=`expr $k / 2 `
echo $ans
 
