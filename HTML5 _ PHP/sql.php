<?php
 $c = mysqli_connect("localhost","root","");
 if(!$c)
 	die("Error in connection.");
 $d = mysqli_select_db($c,"assignment1");
 if(!$d)
 	die("Error in database");
 $rlt = mysqli_query($c,"select * from team");
 if(!$rlt)
 	die("query not succesful.");
 while ($r = mysqli_fetch_assoc($rlt)) 
 {
 	echo $r['tid']." - ".$r["tname"]." - ".$r["city"]." - ".$r["coach"];
 	echo "<br>";
 }
 mysqli_free_result($rlt);
?>