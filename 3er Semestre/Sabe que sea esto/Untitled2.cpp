#include <graphics.h>
#include <conio.h>

int main() {
   int gdriver = EGA;
   int gmodo = EGAHI;
   int trama, color;

/* Si has registrado los dispositivos para que formen parte de graphics.lib
** entonces usa estas sentencias:

   registerbgidriver( EGAVGA_driver );
   initgraph( &gdriver, &gmodo, "" );
*/

/* Si no, entonces has de "decir" dónde se encuentra el dispositivo gráfico */

   initgraph( &gdriver, &gmodo, "C:\\BC5\\BGI" );

   trama = SOLID_FILL;
   color = 4;
   setfillstyle( trama, color );

   fillellipse( 300, 150, 200, 50 );

   getch();    /* Pausa */
   closegraph();

   return 0;
}
