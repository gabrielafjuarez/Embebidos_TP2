/** @file alumno.c
 **
 ** @brief Codigo fuente de las funciones de alumno
 ** 
 ** | RV | YYYY.MM.DD | Autor          | Descripción de los cambios           |
 ** |----|------------|----------------|--------------------------------------|
 ** |  1 | 2022.10.01 | Gabriela Juarez| Version inicial del archivo          |
 ** 
 ** @defgroup plantilla Plantillas de Archivos
 ** @brief Plantillas de archivos normalizadas
 ** @{ 
 */

/* === Inclusiones de cabeceras ============================================ */
#include "alumno.h"
#include <stdio.h>

/* === Definicion y Macros privados ======================================== */

/* === Declaraciones de tipos de datos privados ============================ */

/* === Definiciones de variables privadas ================================== */

/* === Definiciones de variables publicas ================================== */

/* === Declaraciones de funciones privadas ================================= */

/* === Definiciones de funciones privadas ================================== */

/* === Definiciones de funciones publicas ================================== */

void nombre(const struct alumno_s * alumno){
    printf("Apellido de la Alumna: %s\r\n", alumno->apellido);
    printf("Nombres de la Alumna: %s\r\n", alumno->nombre);
    printf("Documento de la Alumna: %s\r\n", alumno->documento);
}

/* === Ciere de documentacion ============================================== */

/** @} Final de la definición del modulo para doxygen */

