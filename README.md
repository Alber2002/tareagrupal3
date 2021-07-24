# Bienvenidos a nuestro repositorio

*Introducción*

creamos un programa que le permite al usuario ingresar sus datos personales, como peso, estatura, fecha de nacimiento, #cedula, y ya teniendo conocimientos de estos datosle permitirá saber al usuario su edad exacta y su indice de masa corporal, a mas de ello, el programa brinda recomendaciónes para regular o mantener, el indice de masa corporal del usuario. 

Integrantes*

- Alber Dayan Ulloa Mina: se encargó de realizar el menú del programa, el llamado de las operaciónes a las opciones del menú y el código que permite ingresar-mostrar los datos personales del usuario.

- Genesis Noelia Gallegos Pilligua:  Se engcargó de diseñar el código que permite calcular la edad de exacta del usuario.

- Heydi Juleysi Saldarriaga Vera: Se encargó de realizar el código que permite calcular el indice de masa corporal y brindar recomendaciónes sobre su cuidado.

- Ana Patricia Valencia Cuero: Se encargó de realizar el código que permite al usuario guardar sus tados en un archivo .txt

- Mayerli Rosa Parraga Bone:  Se encargó del código que permite al usuario mostrar los datos que se encuentran dentro del archivo .txt desde el programa.

#### *Composición* 

El programa está compuesto por dos archivos:
- Menú: Como su nombre mismo lo indica, es el menu de opciones que va a permitir que el programa se ejecute de una manera mas ordenada, este archifo es formato .cpp
- Códigos: En este archivo se encuentran contenidas las diferentes operaciones requeridas del programa (ingreso de datos, calculo de la edad,calculo imc, guardado y recuperar datos), este archivo es formato .h
#### *Descripción*

*Menú*

En el archivo denominado menú (principal), se han llamado las librerias de:

 - iostream: estaa libreria es la que se encarga de ejecutar las operacioens de entrada y de salida del programa
 
 - stdlib.h: esta libreria es la que se encaragará de almacenar los prototipos de las funciones, macros, y tipos para utilidades de uso general.
 
 - string.h: Esta libreria sirve para el fácil uso de las cadenas de caracteres, o sea, para poder almacenar palabras en una variable.
 
 - malloc.h: Esta libreria es necesaria para solicitar los espacios de memoria que necesitan los arreglos utilizados en el programa
 
 - fstream: esta libreria es nesesaria en el programa para poder guardar los datos en un archivo de texto y asi mismo para poder mostrar el contenido de ese archivo desde el programa.
 
A mas de haber utilizado librerias tambien se llamaron formas como el:
 
 - using namespace std: Es el que dá acceso al espacios de nombre, se lo utiliza tambien para evitar escribir los comandos de printf y scanf en cada linea de recepción de datos y muestra de mensajes.
 
Y no pudo faltar la función principal
 
 - int main(): etsa es la función que nos permitirá llamar al resto de las funciones, esta función es la que se encargas de distribuir las tareas a los diferentes comandos y librerias del programa.
 
 Proceso para la ejecución del Menú:
 
 Para empezar a realizar tuvimos que declarar las variables necesarias del programa, dentro del código encontramos dos tipos de variable:
 
  -  float: es el tipo de variables que nos permiten almacenar valores decimales(peso, estatura, imc)
 
   - int: es el tipo de variable que solo nos permite almacenar datos de tipo entero (fa[3], fn[3],edad[3])
 
 Tambien tuvimos que declarar variables de tipo entero para poder ejecutar el menú:
 
  - op: esta variable es de tipo entero y nos ayudará en el menú a poder determinar qué caso u opción decidió ejecutar el usuario
 
   - flag: esta variable es de tipo entero, y nos va a ayudar a limitar el número de opciones en el menu, el programa disparará un mensaje de error y posteriormente se cerrará.

 Para comenzar a agregar las opciones o casos, se utilizó un bucle (do-while), se utilizo este bucle para que el programa muestre las opciones o caso cada que termine el proceso  de la opción que elija el usuario se reflejen nuevamente las opciones en el programa.
Dentro del bucle utilizamos los comandos

  - cls: este comando es el que nos permite limpiar el programa, lo utilizamos al inicio del bucle para poder limpiar el programa cada que se termine de ejecutar una opción, para poder anclar ese comando en el bucle lo tuvimos que llamar con la función:
  
    - system: Es la función que nos permite utilizar o ejecutar comandos o procesos del sistema, y cls es uno de ellos.

  dentro del bucle tambien escribimos mensajes de salida que  den a conocer las diferentes opciones, en este caso 5, despues de hacer esto, comenzamos a determinar los casos con el comando:
  
    - case: que es el comando que evalua una opcion, en otras palabras, es la ejecución de un proceso según las dedeciciones del usuaro, en este caso son 5 decisiónes
	
	para poder llamar las operaciónes de cada caso es necesario que se llame la clase del segundo archivo (codigos). lo hacemos de modo 'name class'. 'void operación'(variales).

 ya llegados a este punto utilizamos condiciones:
   - if: únicamente cuando una condición se cumple
   
   Estas ondiciones se planteron para evaluar la opcion '0'
   
 Despues de realizar todo esto denteo del bucle lo termonaremos y utilizaremos una función del sistema para llamar a un proceso del siatema que en este caso es ause.
 despues se utilizó el la función:
 
    - return 0: Se encarga de evaluar todos los procesos  que estan plasmados en el programa
