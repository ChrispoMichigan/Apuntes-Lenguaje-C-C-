#include <graphics.h>
#include <conio.h>

int main() {
   int gdriver = EGA;
   int gmodo = EGAHI;
   int relleno;

/* Si has registrado los dispositivos para que formen parte de graphics.lib
** entonces usa estas sentencias:

   registerbgidriver( EGAVGA_driver );
   initgraph( &gdriver, &gmodo, "" );
*/

/* Si no, entonces has de "decir" dónde se encuentra el dispositivo gráfico */

   initgraph( &gdriver, &gmodo, "C:\\BC5\\BGI" );

   relleno = 1;

   setlinestyle( SOLID_LINE, relleno, THICK_WIDTH );
   circle( 300, 200, 80 );

   getch();    /* Pausa */
   closegraph();

   return 0;
}