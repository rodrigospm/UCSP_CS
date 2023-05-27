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
if (isset($_POST['register'])) { //Si se apreta "enviar consulta"
    if (strlen($_POST['name']) >= 1 && strlen($_POST['email']) >= 1 && strlen($_POST['user']) >= 1 && strlen($_POST['cont']) >= 1) { // Si name y email no esta vacio
	    $name = trim($_POST['name']);
	    $email = trim($_POST['email']);
		$user = trim($_POST['user']);
		$cont = trim($_POST['cont']);
	    $fechareg = date("d/m/y"); // Dia mes y año fecha registro
	    $consulta = "INSERT INTO datosregister(nombre, email, username, password, fechareg) VALUES ('$name','$email','$user','$cont','$fechareg')"; //SQL INSERT COPY/PASTE
	    $resultado = mysqli_query($conex,$consulta);
	    if ($resultado) { // Si resultado es correcto
	    	?> 
	    	<h3 class="ok">¡Te has registrado correctamente!</h3>
           <?php
	    } else {
	    	?> 
	    	<h3 class="bad">¡Ups ha ocurrido un error!</h3>
           <?php
	    }
    }   else { // En caso q name y email esten vacios, no se completen los campos
	    	?> 
	    	<h3 class="bad">¡Por favor complete los campos!</h3>
           <?php
    }
}

?>