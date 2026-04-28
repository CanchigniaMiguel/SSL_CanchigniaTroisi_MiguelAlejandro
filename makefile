tarea1:
	echo "Hola Mundo"

compilaClase: Clase2704.c
	gcc Clase2704.c -o Clase2704

compilaEj1: Ejercicio1.c
	gcc Ejercicio1.c -o Ejercicio1

compilaEj2: Ejercicio2.c
	gcc Ejercicio2.c -o Ejercicio2

ejecutaCLase:
	./Clase2704

ejecutaEj1:
	./Ejercicio1

ejecutaEj2:
	./Ejercicio2

clean:
	del Clase2704.exe