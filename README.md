## ¿Por qué es conveniente incluirlo?

Evita que subas por accidente contraseñas, archivos pesados que se generan automáticamente y archivos temporales de tu sistema.

## ¿Cuándo se debe hacer?

Se recomienda crearlo al inicio del proyecto pero se puede hacer cuando se quiera.

## ¿Cómo configuraría el archivo .gitignore?

Creando un archivo llamado exactamente .gitignore en la carpeta raíz de tu proyecto. Simplemente escribes el nombre de los archivos, carpetas o extensiones que quieres que Git ignore.

### Codigo sin funcionar:

* Linea 17 y 23 error de sintaxis, faltaban " ; "
* Linea 12 falta un " & " en la funcion scanf
* No se incluyo la biblioteca "stdio.h" para poder usar las funciones printf y scanf
* La funcion duplicar_numero necesitaba recibir la direccion del valor1 para poder cambiar el valor de la variable por referencia.
* En la invocacion de la funcion se necesitaba pasar la direccion de memoria de la variable valor1

### Codigo misterioso:

* La funcion f_alpha cambió a invertirNumero porque es lo que realiza la funcion, dentro de esta,el parametro que recibe es *ref_num en vez de *p que es la referencia de la variable que contiene el numero,cambie la variable rev a num_invertido ya que es la variable que va guardando el nuevo valor que se reasigna al final a la variable *ref_num.
* La funcion f_beta cambió a dividirEntreDos ya que cuando recibe el parametro *ref_num en vez de *p igual que la anterior, esta funcion divide el valor guardado en ref_num en 2.
* La funcion f_gamma cambió a agregarSumaDigitos porque cuando se ejecuta, primero guarda el valor de *ref_num en una variable temporal "temp", luego se inicializa un acumulador que renombré a suma_digitos que anteriormente se llamaba suma que cumple la funcion de sumar los digitos del numero que contiene temp, dentro de la iteración trabaja con temp para no cambiar el valor original y al final de la funcion, al valor original de *ref_num se le suma la suma de los digitos.
* La funcion procesar_enigma se queda con ese nombre, y lo que hace es ejecutar en orden como estan escritas las tres funciones antes mencionadas devolviendo un valor transformado del numero_secreto que recibe.

## 4) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? ¿Es igual a los anteriores? ¿Por qué?

En los apartados 2 y 3 los resultados son los mismos, porque la variable puntero almacena la direccion de memoria de la variable a la que apunta, entonces la direccion de memoria que almacena es la misma que la direccion de memoria de la variable ya que es la apuntada, lo que obtenemos en el apartado 4 es la direccion de memoria propia del puntero, ya que al fin y al cabo tambien es una variable y tiene direccion de memoria propia y es distinta a la direccion a la que apunta.