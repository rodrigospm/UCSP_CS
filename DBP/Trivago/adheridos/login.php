<?php 

$server="localhost";
$user="root";
$pass="";
$db="datosdbp";

$conex = mysqli_connect("localhost", "root", "", "datosdbp"); 
// $conexion= new mysqli($server, $user, $pass, $db);

/*
if($conex) {
	echo "todo correcto";
} else {
	echo "error";
}
*/
if (isset($_POST['login'])) { //Si se apreta "enviar consulta"
    if (strlen($_POST['username']) >= 1 && strlen($_POST['passw']) >= 1) { // Si name y email no esta vacio
	    $username = trim($_POST['username']);
	    $password = trim($_POST['passw']);
	    $fechareg = date("d/m/y"); // Dia mes y año fecha registro
	    $consulta = "INSERT INTO datoslogin(username, password, fechareg) VALUES ('$username','$password','$fechareg')"; //SQL INSERT COPY/PASTE
	    $resultado = mysqli_query($conex,$consulta);
	    if ($resultado) { // Si resultado es correcto
	    	?> 
	    	<h3 class="ok">¡Ingresaste correctamente!</h3>
           <?php
	    } else {
	    	?> 
	    	<h3 class="bad">¡Ups ha ocurrido un error!</h3>
           <?php
	    }
    }   
	else { // En caso q name y email esten vacios, no se completen los campos
	    	?> 
	    	<h3 class="bad">¡Por favor complete los campos!</h3>
           <?php
    }
}

?>