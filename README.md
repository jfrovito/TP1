# Documentación del TP1 del grupo XX

Almunos:
  - Chaparro, Raúl Antonio (96222)
  - Fernando ()
  - Rovito, Juan Francisco (84948)
  
__Punto 1.c.ii.6__ 

Documentar mediante tablas c/texto e imágenes la estructura de archivos, su tipo/contenido (especialmente readme.txt) de c/proyecto sapi_examples/edu-ciaa-nxp/bare_metal/gpio/gpio_02_blinky

__Punto 1.c.ii.7__ 

Documentar mediante tablas c/texto e imágenes la secuencia de comandos: Clean firmware_v2 -> Buildfirmware_v2 -> Debug firmware_v2 -> Ejecutar gpio_02_blinky (ejemplo de aplicación)
    
    a. Completo (Resume), detener (Suspend) y resetear (Restart)  
    b. Por etapas colocando breakpoints (Resume)  
    c. Por línea de código (Step Into, Step Over, Step Return)  
    d. Recuerde siempre abandonar Debug (Terminate) antes de Editar o Compilar algún archivo, o abandonar el IDE (Exit)

__Punto 1.c.ii.8__ 

Migrar el proyecto sapi_examples/edu-ciaa-nxp/bare_metal/gpio/gpio_02_blinky (parpadeo del LEDs c/sAPI) a: projects/TP1

a. Documentar los pasos a seguir para concretar una migración exitosa
    
b. Identificar funciones de librería sAPI útiles para el parpadeo de un led
    
    1.  Documentar mediante tablas c/texto e imágenes la secuencia de funciones invocadas durante la ejecución del ejemplo de aplicación, en qué archivo se encuentran, su descripción detallada, qué efecto tiene la aplicación sobre el hardware (identificar circuitos, puertos, pines, niveles, etc.) así como la interacción entre las mismas (tanto enResetISR() como en main())
        
    2.  Idem c pero con datos (definiciones, constantes, variables, estructuras, etc.) (tanto enResetISR() como en main())
<!--stackedit_data:
eyJoaXN0b3J5IjpbMTMyNTQ0ODc4N119
-->