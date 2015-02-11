echo "Enter word to find ";
read a;
echo "Enter the file name: ";
read c;
b= grep $a $c;
if [ $? -eq 0 ]
then              
echo Word found ;
else
echo Word not found;
fi
