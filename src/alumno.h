#ifndef ALUMNO_H   /*! @cond    */
#define ALUMNO_H   /*! @endcond */

/** @file alumno.h
 **
 ** @brief Cabecera del modulo con las fucniones de alumno
 **
 ** | RV | YYYY.MM.DD | Autor          | Descripción de los cambios           |
 ** |----|------------|----------------|--------------------------------------|
 ** |  1 | 2022.10.01 | Gabriela Juarez| Version inicial del archivo          |
 ** 
 ** @defgroup plantilla Plantillass de Archivos
 ** @brief Plantillas de archivos normalizadas
 ** @{ 
 */

/* === Inclusiones de archivos externos ==================================== */

/* === Cabecera C++ ======================================================== */
#ifdef __cplusplus
extern "C" {
#endif

/* === Definicion y Macros publicos ======================================== */

/* == Declaraciones de tipos de datos publicos ============================= */

//!Estructura que contiene los datos de la alumna

typedef struct alumno_s {
    char apellido[30];      //!< Cadena de carateres que contiene el apellido de la alumna 
    char nombre[30];        //!< Cadena de carateres que contiene el nombre de la alumna 
    char documento[10];     //!< Cadena de carateres que contiene el documento de la alumna 
} * alumno_t;

/* === Declaraciones de variables publicas ================================= */

/* === Declaraciones de funciones publicas ================================= */

/**
 * @brief Funcion para mostrar el nombre de la alumna
 * 
 * Esta funcion muestra el nombre completo y el documento de la alumna por pantalla. 
 * Para esto, debe recibir un puntero a una estructura con los datos de la alumna que 
 * se quiere mostrar.
 * @param alumno Puntero a la estructura de datos de la alumna.
 */

void nombre(const struct alumno_s * alumno);

/* === Ciere de documentacion ============================================== */
#ifdef __cplusplus
}
#endif

/** @} Final de la definición del modulo para doxygen */

#endif   /* ALUMNO_H */
