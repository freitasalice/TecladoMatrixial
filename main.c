/*
 * File:   main.c
 * Author: 21192692
 *
 * Created on 6 de Maio de 2021, 14:27
 */

#include "config.h"
#include <xc.h>
#include "delay.h"
#include "dispLCD4vias.h"
#include "teclado.h"

void main (void)
{
    char string[] = "Tecla:          ";
    dispLCD_init();
    teclado_init();
    while( 1 )
    {
        string[7] = teclado();
        if( string[7] == 0)
            string[7] = ' ';
        dispLCD(0, 0, "Tertos project");
        dispLCD( 1, 0, string );    
    }   
    return; 
}


