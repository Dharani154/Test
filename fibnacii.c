echo "How many number of terms to be generated "
read n
a=0
b=1
count=2
echo "Fibanacci Series upto $n terms: "
echo "$a"
echo "$b"
while [ $count -le $n ]
do
  fib=`expr $a + $b`
  a=$b
  b=$fib
  echo "$fib"
  count=`expr $count + 1`
done
