
#!/bin/bash

choice=1;
while test $choice -ne 0 
do
a=99

while test $a -gt 50 
do

  echo "enter a number < 50"
 read a

done
s=$(($a*$a))
 echo "$s"
 echo "Press 0 to exit, any number to continue....!!!"
 read choice
 done
