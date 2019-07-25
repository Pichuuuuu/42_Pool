b1=`echo $FT_NBR1 | sed 'y/'\''\\"?!/01234/'`
b2=`echo $FT_NBR2 | sed 'y/mrdoc/01234/'`
somebase5=`echo "ibase=5;$b1+$b2" | bc`
echo "obase=13;$somebase5" | bc | sed 'y/0123456789ABC/gtaio luSnemf/'