
// compile with: gcc -lvga test.c  -o test
// apt-get install libsvga1-dev

/*
required library: 
  ii  libsvga1:armhf                  1:1.4.3-33                        armhf        console SVGA display libraries
  ii  libsvga1-dev                    1:1.4.3-33                        armhf        console SVGA display development libraries and headers
*/

#include <stdlib.h>
#include <stdio.h>
#include <vga.h> 

int main(void)
{   
   vga_init();   
   vga_setmode(G320x200x256);   
   vga_setcolor(4);   
   vga_drawpixel(10, 10);    
   sleep(5);   
   vga_setmode(TEXT);
   
   
}





