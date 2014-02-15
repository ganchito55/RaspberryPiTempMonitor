RaspberryPiTempMonitor
======================

English:

A simple temperature monitor for Raspberry Pi.

How to build:

1) Open temp.c and change PATH and REFRESH

2) run gcc temp.c -o temp (or other c compiler)

How to run:
$ ./temp &

How to turn off:
$ kill -9 (PID of temp)

FAQs:

1) I use Control+C but the monitor don't turn off

I protected the software for all signals


Español:
Este software guarda un registro de la temperatura en un archivo.

Como contruirlo:

1) Abrir temp.c y editar las variables PATH y REFRESH

2) compilarlo, por ejemplo: $ gcc temp.c -o temp

Como ejecutarlo:
$ ./temp &

Como apagarlo:
$ kill -9 (PID de temp)

Preguntas frecuentes:


1) Pulso Control+C pero no se cierra
El software está protegido de todas las señales.
