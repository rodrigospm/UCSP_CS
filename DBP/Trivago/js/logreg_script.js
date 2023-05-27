
document.getElementById("boton_iniciar-sesion").addEventListener("click", iniciar_Sesion);
document.getElementById("boton_registrarse").addEventListener("click", registrarse);


var contiene_login_register = document.querySelector(".login_register");

var formulario_login    = document.querySelector(".formulario_login");
var formulario_register = document.querySelector(".formulario_register");

var parte_trasera_login= document.querySelector(".parte_login");
var parte_trasera_register = document.querySelector(".parte_register");



/*--iniciar sesion--*/

function iniciar_Sesion(){
    if(window.innerWidth>850){//ayuda al reducir la pagina
        formulario_register.style.display ="none";
        contiene_login_register.style.left ="10px";
        formulario_login.style.display="block";
    
        parte_trasera_register.style.opacity ="1";
        parte_trasera_login.style.opacity="0";
    }
    else{
        formulario_register.style.display ="block";
        contiene_login_register.style.left ="0px";
        formulario_login.style.display="none";
    
        parte_trasera_register.style.display ="block";
        parte_trasera_login.style.display="none";
    }

    
}





/*----registrarse---*/

function registrarse(){
    if(window.innerWidth > 850){
        formulario_register.style.display ="block";
        contiene_login_register.style.left ="410px";
        formulario_login.style.display="none";
    
        parte_trasera_register.style.opacity ="0";
        parte_trasera_login.style.opacity="1";
    }

    else {
        formulario_register.style.display ="block";
        contiene_login_register.style.left ="0px";
        formulario_login.style.display="none";
    
        parte_trasera_register.style.display ="none";
        parte_trasera_login.style.display="block";
        parte_trasera_login.style.opacity="1";
    }

    
}




