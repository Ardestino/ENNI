# E.N.N.I.

El sistema ENNI tiene la capacidad de generarse a si mismo y busca estar desarrollado completamente en C/C++ asi como ser multiplataforma.

E.N.N.I. (El Nombre No Importa) representa la filosofia conductual del desarrollo del proyecto, donde se evita gastar tiempo o destinar recursos en algo que no mejore la calidad del producto ya sean por ejemplo  archivos, documentos, codigos, procesos de produccion, dinero, etc.

## Objetivos
- Se busca reducir los pasos entre el codigo fuente y el binario final para disminuir el tamaño en memoria y que el codigo fuente sirba como un medio de exploracion del binario
- Se pretende que el lenguaje de programacion sea grafico con la finalidad de evitar errores de sintaxis a la hora de programar
- El sistema es autocontenido, esto significa que no necesita nada mas para existir y todo esta escrito en su lenguaje nativo
- El sistema puede leer codigos de otros lenguajes de programacion y adaptarlos a su sistema
- El sistema tiene su propio editor
- Que en un futuro el sistema sea lo suficientemente robusto para absorver un sistema operativo
- El sistema es un parasito, comienza utilizando un compilar instalado hasta crecer y remplazarlo completamente
- El sistema puede compartir mejoras con otros sistemas similares

## Instalacion

Windows:

    Requisitos:
        Instalar VS Build Tools v14
        Agregar "C:\Program Files (x86)\Microsoft Visual Studio\2017\BuildTools\VC\Auxiliary\Build" al path
    
    Comandos:
        vcvars64.bat
        cl1 boostrap.cpp
        boostrap

Windows MinGW:

    Requisitos:
        Instalar MinGW
        Agregar el directorio MinGW/Bin al path
    
    Comandos:
        vcvars64.bat
        cl1 boostrap.cpp
        boostrap

## Diseño

Clase                   |Responsabilidad
---                     |---
EscanerArchivos         | Escanear directorios en busqueda de dependencias
Explorador              | Mostrar los archivos escaneados
LectorArchivo           | Leer un archivo
Editor                  | Modificacion visual de un documento
BootStrap               | Primer archivo a compilar y ejecutar, el compila el demas codigo


## Dificultades
### Boostraping el codigo
- El codigo de C++ de boostrap tiene que ser portable
- Los comandos de cada compilador son diferentes

## Librerias para utilizar
Nombre      | Descripcion
---         |---
re2c        | Escaner Generador sencillo para interpretar textos
clang       | Compilador de C++
skia        | Biblioteca de generacion de graficos de Google
git         | Sistema de control de versiones
