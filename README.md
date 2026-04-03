## ¿Por qué es conveniente incluirlo?

Evita que subas por accidente contraseñas, archivos pesados que se generan automáticamente y archivos temporales de tu sistema.

## ¿Cuándo se debe hacer?

Se recomienda crearlo al inicio del proyecto pero se puede hacer cuando se quiera.

## ¿Cómo configuraría el archivo .gitignore?

Creando un archivo llamado exactamente .gitignore en la carpeta raíz de tu proyecto. Simplemente escribes el nombre de los archivos, carpetas o extensiones que quieres que Git ignore.

## Codigo sin funcionar:

_ Linea 17 y 23 error de sintaxis, faltaban " ; "
_ Linea 12 falta un " & " en la funcion scanf
_ No se incluyo la biblioteca "stdio.h" para poder usar las funciones printf y scanf
_ La funcion duplicar_numero necesitaba recibir la direccion del valor1 para poder cambiar el valor de la variable por referencia.
_ En la invocacion de la funcion se necesitaba pasar la direccion de memoria de la variable valor1

## Codigo misterioso:

_ La funcion f_alpha cambió a invertirNumero porque es lo que realiza la funcion, dentro de esta,el parametro que recibe es *ref_num en vez de *p que es la referencia de la variable que contiene el numero,cambie la variable rev a num_invertido ya que es la variable que va guardando el nuevo valor que se reasigna al final a la variable *ref_num.
_ La funcion f_beta cambió a dividirEntreDos ya que cuando recibe el parametro *ref_num en vez de *p igual que la anterior, esta funcion divide el valor guardado en ref_num en 2.
_ La funcion f_gamma cambió a agregarSumaDigitos porque cuando se ejecuta, primero guarda el valor de *ref_num en una variable temporal "temp", luego se inicializa un acumulador que renombré a suma_digitos que anteriormente se llamaba suma que cumple la funcion de sumar los digitos del numero que contiene temp, dentro de la iteración trabaja con temp para no cambiar el valor original y al final de la funcion, al valor original de *ref_num se le suma la suma de los digitos.
_ La funcion procesar_enigma se queda con ese nombre, y lo que hace es ejecutar en orden como estan escritas las tres funciones antes mencionadas devolviendo un valor transformado del numero_secreto que recibe.