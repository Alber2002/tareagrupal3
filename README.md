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
**codigos**

En el archivo códigos se ha declarado la clase personas con la palabra reservada:
 - class: que es el soporte de programción orientada a los objetos
 
Despues de crear la clase utilizaremos el comando private para determinar y encapsular las característica  unicas del objeto.
Se declararon las variables del menú a mas de dos variables mas de tipo:

 - string: que es el tipo de variables que almacena cadenas o caracteres (nombres, apellidos, cedula).
 
Ya hecho esto utilizaremos el comando private, que son todos los procesos que podran trabajar con los datos privados del objeto.

Llegados a este punto, para realizar la operación del primer caso del menú coloaremos el modo:

 - void: Es el tipo de resultado de una función que retorna se utiliza para poder llamar a unaunaoperación operación determinada
 
a los dos modos void le dimos el nombre de mostrar e ingresar respectivamente.

Dentro del primer modo(ingresar):

 - Mostramos mensajea al usuario que pidiendole que ingrese datos como, número de cédula, nombres, apellidos, peso, estatura, fecha de nacimiento.
 
 -  Despues que mostramos los mensajes, determinamos que los datos ingresados se almacenen en sus respectivas variables

Dentro del segundo modo(mostrar) mostramos mensajes diciéndole o reflejándole por pantalla al usuario los datos que acaba de ingresar.

Para realizar la operación requerida en el caso u opcion 2:

 - Creamos un modo denominado digitar
 
 - Igualaremos la fecha de nacimiento ingresada en primera instancia a 0
 
 - Dentro de ese modo le pediremos al usuario que ingrese la fecha actual y su fecha de nacimiento en los espacios reservados por arreglos.
 
    - Los arreglos de la fecha aactual y la fecha de nacimiento tienen 3 espacios respectvamente, en los arreglos los espacios reservados se cuentan desde 0, es por ello que decimos que los datos sealamaceneran de la siguiente manera: para la fecha actual ***(fa[2] para el dia actual , fa[1] para el mes actual y fa[2]para el año actual)*** y para la fecha de nacimiento ***(fn[2] para el dia de naciemiento, fn [1] para el mes de nacimiento y fn[0] para el año de nacimiento.)*** 
 
 - Déspues de que el usuario haya digitado las fechas se establecerán condiciones (if else) para evaluar las dos fechas y de esta manera poder calcular la edad, en el proceso tenemos que recordar que si se necesita incrementar dia, se restará un mes y se incrementaran 30 en el espacio que se almacenan los días, si se necesita incrementarlos meses se resta un año y se incrementan 12 en el espacio que se almacenan los meses.
 Los resultados de las operaciones se almacenaran en el arreglo edad [3] ***(edad[2] para el día, edad[2] para el mes y edad[0] para el año)***
 
 - Presentamos la edad de un amanera ordenada mostrando el arreglo edad [3] en conjunto de mensaje.
 
 Para realizar la operación requerida para el caso u opción 3:
 
 - Creamos un modo (void) denominado sent_masa
 
 - Dentro del modo igualamos el peso y la estatura a 0 para evitar cualquier problema en la ejecución del programa
 
 - Calculamos el indice de masa corporal con la formula peso/(estatura*estatura)
 
 - Almacenamos  el resultado de la operación en la variable correspondiente de indicede masa corporal (imc), y lo mostramos al usuario por pantalla
 
 - Brindamos recomendaciones al usuario para el cuidado de su imc de acuerdo al valor de de este, para ello evaluamos el imc del usuario con condiciones(if else) para determinar en qué intervalo se encuentra el indice de masa corporal para que de acuerdo a esto el programa refleje recomendaciones adecuadas porpantalla
 
Para realizar la operación requerida en el caso u opción 4: 

- creamos un modo (void) denominado save.

- Para guardar los datos del usuario en un archivo .txt utilizamos la función:

   - ofstream: representan ficheros para lectura y escritura respectivamente.
   
- Para determinar el nómbredel archivo .txt fue necesario que le otorgáramos un nombre al archivo de esta manera *ofstream archivo("persona.txt")*

- Después tuvimos que organizar el archivo escrito dándole mensajes de escritura y guardado de datos de la siguiente manera: *archivo<<"dato:  "<< variable del dato<< "\n\n";*  de esta manera pudimos hacer que el programa haga el guardado de los datos del usuario.

Para realizar la operación requerida en el caso u opción 5:

- Creamos un modo (void) denominado lectura.

- Para mostrar los datos almacenados en el archivo .txt en el programa, utilizamos la función: 
   - ifstream: esuna función exclusiva para leer datos de archivos de texto

- Declarámos una nueva bariable de tipo string (texto) para que se pudiera almacenar losdatos de lectura en el programa.

- Para que el proceso conozca lo que va amostrar por pantalla tenemos que abrir el archivo .txt guardado con la opción 4 en modo lectura, esto lo hacemos de la siguiente manera: ***archivo.open("persona.txt",ios::in)***

- Comprobaremos si el erchivo a tenido alguna clase de error o modificación en su nombre con una condición (if) *if(archivo.fail())* .

- Si se cumpliece lacondición, rebotaría un error en el programa y saldria de este, si no se cumple, el programa continuara con...

-  En código plasmamos que mientras no sea el final del archivo, elprograma tiene que segir recorriendo el archivo: *while (!archivo.eof())* .

- copiaremos todos los datos del archivo de texto en nuestra nueva variable declarada(texto) para poder mostrarlos datos en el programa: *getline(archivo,texto)*, como estamos trabajando con caracteres utilizamos el comando string.}

- Mostramos por pantalla la variable en laque se encuentran todos los datos del usuario.

#### *Instalación*

*Menú*

      -  Abrimos el documento de menú.
      - Copiamos el codigo con (control+C)
      - Abrimos  Dev-C++
      - Abrimos una ventana en Dev-C++ con (Control+N).
      - Pegamos el codigo con (Control+V). 
      - Nos dirigimos a la parte superior izquierda donde dice (File)
      - Damos click en la opcion (Save As)
      - Guardamos el codigo con el nombre de menú.
      
*Codigo*

        -  Abrimos el documento de codigos.h
        - Copiamos el codigo con (control+C)
        - Abrimos  Dev-C++
        - Abrimos una ventana en Dev-C++ con (Control+N).
        - Pegamos el codigo con (Control+V). 
        - Nos dirigimos a la parte superior izquierda donde dice (File)
        - Damos click en la opcion (Save As)
        - Guardamos el codigo con el nombre codigo.h
	
### *Ejecución*
              - Ejecutamos el codigo con (F10)
              - Se desplegara un menú de 6 opciones
              - Al colocar la opción 1 y da enter, puede llenar sus datos personales, como  (cedula, nombres, fecha de nacimiento, peso, estatura)
             - Al colocar la opción 2  y da enter, puede calcular su edad exacta.
      - Al colocar la opción 3 y da enter, muestra su indice corporal y se le brinda recomendaciones en caso si es necesario.
             - Al colocar la opción 4, se guardan todos los datos
             - Al colocar la opción 5, se realiza la lectura de los datos.
             - Al colocar la opción 6, puede salir del programa.
