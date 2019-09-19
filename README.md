# Documentación Trabajo Práctico N° 1
**Seminario de Electrónica: Sistemas Embebidos**

**LPC43xx Entradas y Salidas (Digitales) de Propósito General (GPIO)**

Objetivo:
 - Uso del IDE (edición, compilación y depuración de programas)
 - Uso de GPIO (manejo de Salidas y de Entradas Digitales)
 - Documentar lo que se solicita en c/ítems


Alumnos:
  - Chaparro, Raúl Antonio (96222)
  - García, Fernando (97770)
  - Rovito, Juan Francisco (84948)


## Punto 1. Uso del IDE (Integrated Development Environment) MCUXpresso

### Estructura de Archivos

Los proyectos de ejemplo están ubicados dentro de la carpeta:firmware_v2\sapi_examples

Allí encontramos una carpeta con documentación orientada al mapeo de periféricos para la EDU CIAA en

	firmware_v2\sapi_examples\documentation

Por otro lado encontramos la carpeta

	firmware_v2\sapi_examples\edu-ciaa-nxp

Allí encontramos todos los proyectos de ejemplo para la EDU-CIAA separados por proyectos de "hardware puro"

	firmware_v2\sapi_examples\edu-ciaa-nxp\bare_metal
Los proyectos 
Documentar mediante tablas c/texto e imágenes la estructura de archivos, su tipo/contenido (especialmente readme.txt) de c/proyecto sapi_examples/edu-ciaa-nxp/bare_metal/gpio/gpio_02_blinky

### Secuencia de Comandos

Una vez abierto el proyecto en cuestión, se deberá:

 1. Ir a la pestaña "Proyect" ----> "Clean".
 2. Luego "Project" ----> "Build project".

Para realizar el _debug_ se debe ir al ícono de "_debug_" y luego colocar la opción "_debug configurations_".
Una vez realizada la configuración del _debug_, hay que re 
Documentar mediante tablas c/texto e imágenes la secuencia de comandos: Clean firmware_v2 -> Buildfirmware_v2 -> Debug firmware_v2 -> Ejecutar gpio_02_blinky (ejemplo de aplicación)
    
a. Completo (Resume), detener (Suspend) y resetear (Restart)  
b. Por etapas colocando breakpoints (Resume)  
c. Por línea de código (Step Into, Step Over, Step Return)  
d. Recuerde siempre abandonar Debug (Terminate) antes de Editar o Compilar algún archivo, o abandonar el IDE (Exit)

### Parpadeo de LEDs c/sAPI

Migrar el proyecto sapi_examples/edu-ciaa-nxp/bare_metal/gpio/gpio_02_blinky (parpadeo del LEDs c/sAPI) a: projects/TP1

__Pasos de Migración__ 
Documentar los pasos a seguir para concretar una migración exitosa
 
__Funciones sAPI__

Identificar funciones de librería sAPI útiles para el parpadeo de un led
	i.  Documentar mediante tablas c/texto e imágenes la secuencia de funciones invocadas durante la ejecución del ejemplo de aplicación, en qué archivo se encuentran, su descripción detallada, qué efecto tiene la aplicación sobre el hardware (identificar circuitos, puertos, pines, niveles, etc.) así como la interacción entre las mismas (tanto enResetISR() como en main())
	ii.  Idem c pero con datos (definiciones, constantes, variables, estructuras, etc.) (tanto enResetISR() como en main())

	
## Punto 2: Sensado de Push Buttons c/sAPI
Migrar el proyecto sapi_examples/edu-ciaa-nxp/bare_metal/gpio/gpio_01_switches_leds (sensado de Push Buttons c/sAPI) a:projects/TP1

### Compilación Condicional

a. Documentar los pasos a seguir para mantener en el archivo TP1.c los fuentes del TP1-1 y TP1-2 (compilación condicional)

### Funciones sAPI

b. Identificar funciones de librería sAPI útiles para el sensado de un pulsador
	i.  Documentar mediante tablas c/texto e imágenes la secuencia de funciones invocadas durante la ejecución del ejemplo de aplicación, en qué archivo se encuentran, su descripción detallada, qué efecto tiene la aplicación sobre el hardware (identificar circuitos, puertos, pines, niveles, etc.) así como la interacción entre las mismas (tanto enResetISR() como en main())
	ii.  Idem c pero con datos (definiciones, constantes, variables, estructuras, etc.) (tanto en ResetISR() como en main())

## Punto 3: Uso de tickHooks c/sAPI

Migrar el proyecto sapi_examples/edu-ciaa-nxp/bare_metal/gpio/tick_01_tickHook (uso de tickHooks c/sAPI) a: projects/TP1
a. Mediante compilación condicional, mantener en el archivo TP1.c los fuentes del TP1-1, TP1-2 y TP1-3  

### Funciones sAPI

b. Identificar funciones de librería sAPI útiles para el colgarse de un tick
	i.  Documentar mediante tablas c/texto e imágenes la secuencia de funciones invocadas durante la ejecución del ejemplo de aplicación, en qué archivo se encuentran, su descripción detallada, qué efecto tiene la aplicación sobre el hardware (identificar circuitos, puertos, pines, niveles, etc.) así como la interacción entre las mismas (tanto enResetISR() como en main())
	ii.  Idem c pero con datos (definiciones, constantes, variables, estructuras, etc.) (tanto en ResetISR() como en main())

## Punto 4: Uso de tickHooks & LEDs c/sAPI

Hacer portable el uso de tickHooks & LEDs c/sAPI
a.  Mediante compilación condicional, mantener en el archivo TP1.c los fuentes del TP1-1, TP1-2, TP1-3 y TP1-4
b.  Documentar la modificación la configuración del tickHook en función de la constante TICKRATE_MS (1mS/10mS/100mS)
c.  Documentar la modificación el parpadeo del led en función de la constante LED_TOGGLE_MS (100mS/500mS/1000mS)
d.  Modificar ejemplo de aplicación para soportar todos los LEDs (encender/apagar -500mS/500mS- uno a la vez en secuencia)

## Punto 5: Envío de mensajes de depuración por puerto serie c/sAPI

Agregar al ejemplo anterior (4.d) envío de mensajes de depuración por puerto serie c/sAPI

### Funciones sAPI

c. Identificar funciones de librería sAPI útiles para esta nueva funcionalidad
	i.  Documentar mediante tablas c/texto e imágenes la secuencia de funciones invocadas durante la ejecución del ejemplo de aplicación, en qué archivo se encuentran, su descripción detallada, qué efecto tiene la aplicación sobre el hardware (identificar circuitos, puertos, pines, niveles, etc.) así como la interacción entre las mismas (tanto enResetISR() como en main())
   ii.  Idem c pero con datos (definiciones, constantes, variables, estructuras, etc.) (tanto en ResetISR() como en main())

## Punto 6: Sensado de Push Buttons c/sAPI

d.  En caso que no funcione correctamente el ejemplo de aplicación documentar la forma de la señal digital “pulsador” a sensar: no oprimido // transición a oprimido // mantener oprimido // transición a no oprimido) // ...


<!--stackedit_data:
eyJoaXN0b3J5IjpbLTEzNTA1MTgzMzAsNjcxMDI2OTYzLDE4MD
UwMjc1OTUsMTMzMjYzMzEwNiwxMjIwOTk2NDgwLDEzMzI2MzMx
MDYsMTIyMDk5NjQ4MCwxMDUxMjE2NzE5XX0=
-->