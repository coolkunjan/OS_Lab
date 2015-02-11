echo 'Do you want to revoke the read and write permissions for file '$1' ?'
echo 'If yes then type y'
read b
if [ $b = 'y' -o $b = 'Y' ]
then 
echo Enter permission mode:(777/755)
read c
chmod $c $1
else
echo No changes needed
fi
