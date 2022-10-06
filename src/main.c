/** @file main.c
 **
 ** @brief Programa principal del Trabajo Practico 2
 **
 ** Plantilla para los archivos de codigo fuente de prácticos de las 
 ** asignaturas Diseño Integrado de Sistemas Emebebidos y Sistemas Embebidos
 ** de Tiempo Real dictadas en de la Especialización en Integración de
 ** Sistemas Informaticos de la Univesidad Nacional de Tucumán
 ** 
 ** | RV | YYYY.MM.DD | Autor           | Descripción de los cambios          |
 ** |----|------------|-----------------|-------------------------------------|
 ** |  1 | 2022.10.01 | Gabriela Juarez | Version inicial del archivo         |
 ** 
 ** @defgroup TP2 Plantillas de Archivos
 ** @brief Plantillas de archivos normalizadas
 ** @{ 
 */

/* === Inclusiones de cabeceras ============================================ */
#include "main.h"
#include "alumno.h"
#include <stdio.h>

/* === Definicion y Macros privados ======================================== */

/* === Declaraciones de tipos de datos privados ============================ */

/* === Definiciones de variables privadas ================================== */

/* === Definiciones de variables publicas ================================== */

/* === Declaraciones de funciones privadas ================================= */

/* === Definiciones de funciones privadas ================================== */

/* === Definiciones de funciones publicas ================================== */

/**
 * @brief Funcion main del programa principal
 * 
 * Esta funcion tiene la estructura de alumno que es una varaible de tipo estatica, y un 
 * puntero a esa variable.
 * 
 * @param alumno Estructura de alumno y puntero al mismo.
 */

int main(void) {
	static const struct alumno_s alumno = {
		.apellido = "Juarez",
		.nombre = "Gabriela Fabiana",
		.documento = "26.782.425"
	};
	nombre(&alumno);
	return 0;
}
/* === Ciere de documentacion ============================================== */

/** @} Final de la definición del modulo para doxygen */

