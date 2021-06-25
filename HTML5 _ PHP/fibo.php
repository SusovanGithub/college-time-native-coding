<?php
 $n=0;
 if(isset($_POST['t1']))
 	$n=$_POST['t1'];
 $a=0;
 $b=1;
?>


<!DOCTYPE html>
<html>
<head>
	<title></title>
</head>
<body>
	<form action="b.php" method="POST">
		<label>Enter the limit for Fibonacci Series</label>
		<br>
		<input type="text" name="t1">
		<input type="submit" name="">
	</form>
</body>
</html>

<?php
 for (; $a < $n ; ) 
 {
 	echo $a." ";
 	$c=$a+$b;
 	$a=$b;
 	$b=$c;
 }
?>