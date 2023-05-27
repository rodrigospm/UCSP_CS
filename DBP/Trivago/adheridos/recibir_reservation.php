<?php
$server="localhost";
$user="root";
$pass="";
$db="datosdbp";


//$conex=mysql_connect($server,$user,$pass,$db);
$conexion= new mysqli($server,$user,$pass,$db);

if ($conexion->connect_error) {
    die("La conexión ha fallado: " . $conn->connect_error);
}
echo "Conexión exitosa a la base de datos MySQL";

$nombre =$_POST["name"];
$apellido=$_POST["last_name"];
$hotel=$_POST["inn"];
$fecha_entrada=$_POST["date_entry"];
$fecha_salida=$_POST["date_end"];
$adultos=$_POST["adults"];
$niños=$_POST["kids"];
$habitaciones=$_POST["rooms"];
$clase=$_POST["class"];
$nro_tarjeta=$_POST["card"];
$fecha_expiracion=$_POST["date_expiration"];
$cod_seguridad=$_POST["security_code"];
$direccion=$_POST["adress"];



$consulta="INSERT INTO reserva(nombre,apellido,hotel,fecha_entrada,fecha_salida,adultos,niños,
 habitaciones,clase,nro_tarjeta,fecha_expiracion,codigo_seguridad,direccion) 
VALUES ('$nombre','$apellido','$hotel','$fecha_entrada','$fecha_salida','$adultos','$niños',
'$habitaciones','$clase','$nro_tarjeta','$fecha_expiracion','$cod_seguridad','$direccion')";
$resultado=mysqli_query($conexion,$consulta);
if($resultado){
    
echo "TU RESERVA HA SIDO GUARDADA";
    
}else{
    echo "ERROR. TU RESERVA NO HA SIDO GUARDADA";
}
 
?>