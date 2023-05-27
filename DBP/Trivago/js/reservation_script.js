const movpag=document.querySelector(".movpag");
const btn_adelante2=document.querySelector(".sigpag");

const btn_atras1=document.querySelector(".volver-pag1");
const btn_adelante3=document.querySelector(".adelantar-pag3");
const btn_atras2=document.querySelector(".volver-pag2");
const btn_adelante4=document.querySelector(".adelantar-pag4");
const btn_atras3=document.querySelector(".volver-pag3");
const btn_final=document.querySelector(".fin");

const progreso_texto=document.querySelectorAll(".paso p");
const progreso_check=document.querySelectorAll(".paso .check");
const num=document.querySelectorAll(".paso .num");

let max=4;
let cont=1;


btn_adelante2.addEventListener("click",function(e){
    e.preventDefault();
    movpag.style.marginLeft="-25%";
    num[cont-1].classList.add("active");
    progreso_check[cont-1].classList.add("active");
    progreso_texto[cont-1].classList.add("active");
    cont +=1;
});

btn_adelante3.addEventListener("click",function(e){
    e.preventDefault();
    movpag.style.marginLeft="-50%";
    num[cont-1].classList.add("active");
    progreso_check[cont-1].classList.add("active");
    progreso_texto[cont-1].classList.add("active");
    cont +=1;
});

btn_adelante4.addEventListener("click",function(e){
    e.preventDefault();
    movpag.style.marginLeft="-75%";
    num[cont-1].classList.add("active");
    progreso_check[cont-1].classList.add("active");
    progreso_texto[cont-1].classList.add("active");
    cont +=1;
});

/*btn_final.addEventListener("click",function(e){
    e.preventDefault();
    num[cont-1].classList.add("active");
    progreso_check[cont-1].classList.add("active");
    progreso_texto[cont-1].classList.add("active");
    cont +=1;
  //  alert("SU RESERVACION FUE HECHA CON EXITO")
});*/

btn_atras1.addEventListener("click",function(e){
    e.preventDefault();
    movpag.style.marginLeft="0%";
        num[cont-2].classList.remove("active");
    progreso_check[cont-2].classList.remove("active");
    progreso_texto[cont-2].classList.remove("active");
    cont -=1;
});

btn_atras2.addEventListener("click",function(e){
    e.preventDefault();
    movpag.style.marginLeft="-25%"; 
        num[cont-2].classList.remove("active");
    progreso_check[cont-2].classList.remove("active");
    progreso_texto[cont-2].classList.remove("active");
    cont -=1;
});

btn_atras3.addEventListener("click",function(e){
    e.preventDefault();
    movpag.style.marginLeft="-50%";
        num[cont-2].classList.remove("active");
    progreso_check[cont-2].classList.remove("active");
    progreso_texto[cont-2].classList.remove("active");
    cont -=1;
});

