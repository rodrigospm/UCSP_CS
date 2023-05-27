<!DOCTYPE html>
<html lang="en">

<head>
    <title> Login/Register </title>
    <link rel="stylesheet" href="../css/logreg_style.css">
</head>

<body>
    <div class="contenedor_todo">

        <div class="caja_trasera">

            <div class="parte_login">
                <h3>¿Ya tienes una cuenta?</h3>
                <p>Inicia sesión para entrar en la página</p>
                <button id="boton_iniciar-sesion">Iniciar Sesión</button>
            </div>

            <div class="parte_register">
                <h3>¿Aún no tienes una cuenta?</h3>
                <p>Regístrate para que puedas iniciar sesión</p>
                <button id="boton_registrarse">Regístrarse</button>
            </div>

        </div>

            <!--Div class formulario de Login y registro-->
            <div class="login_register">

            <!--Login-->
            <form method="post" class="formulario_login">
                <h2>Iniciar Sesión</h2>

                <input type="text" name="username" placeholder="Usuario">
                <input type="password" name="passw" placeholder="Contraseña">
                <input type="submit" name="login">

                <!-- <button>Entrar</button> -->
                <!-- Comentado pq no se puede linkear a un include de php, lo reemplazo con input submit x ahora-->
            </form>
            <?php 
            include("login.php"); 
            ?>

            <!--Register-->
            <form method="post" class="formulario_register">
                <h2>Regístrarse</h2>

                <input type="text" name="name" placeholder="Nombre completo">
                <input type="email" name="email" placeholder="Correo Electronico">
                <input type="text" name="user" placeholder="Usuario">
                <input type="password" name="cont" placeholder="Contraseña">
                <input type="submit" name="register">
                
                <!-- <button onclick="">Regístrarse</button> --> 
                <!-- Comentado pq no se puede linkear a un include de php, lo reemplazo con input submit x ahora-->
            </form>
            <?php 
            include("register.php");
            ?>

        </div>

    </div> 

    <script src="../js/script.js"></script>
</body>
</html>