# ENNI

El sistema ENNI tiene la capacidad de generarse a si mismo y busca estar desarrollado completamente en C/C++ asi como ser multiplataforma.

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

|Clase                  |Responsabilidad
|---                    |---                                
EscanerArchivos         | Escanear directorios en busqueda de dependencias
Explorador              | Mostrar los archivos escaneados
LectorArchivo           | Leer un archivo
Editor                  | Modificacion visual de un documento
BootStrap               | Primer archivo a compilar y ejecutar, el compila el demas codigo


## Dificultades
### Boostraping el codigo
- El codigo de C++ de boostrap tiene que ser portable
- Los comandos de cada compilador son diferentes

