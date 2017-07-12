 # include <iostream.h>
 # include <graphics.h>
 # include    <conio.h>
 # include     <math.h>

 void show_screen( );

 void dda_line(constint,constint,constint,constint);


 int
    {
       int color=getcolor( );

       int x1=x_1;
       int y1=y_1;

       int x2=x_2;
       int y2=y_2;

       if(x_1>x_2)
      {
         x1=x_2;
         y1=y_2;

         x2=x_1;
         y2=y_1;
      }

       float dx=(x2-x1);
       float dy=(y2-y1);

       int steps=abs(dy);

       if(abs(dx)>abs(dy))
      steps=abs(dx);

       float x_inc=(dx/(float)steps);
       float y_inc=(dy/(float)steps);

       float x=x1;
       float y=y1;

       putpixel(x,y,color);

       for(int count=1;count<=steps;count++)
      {
         x+=x_inc;
         y+=y_inc;

         putpixel((int)(x+0.5),(int)(y+0.5),color);
      }
    }

 /*************************************************************************///--------------------------  show_screen( )  ---------------------------///*************************************************************************/void show_screen( )
    {
       restorecrtmode( );
       textmode(C4350);

       cprintf("\nxxxxxxxxxxxx");
       cprintf("x x");
       cprintf("x x");
       cprintf("x x");
       cprintf("\nxxxxxxxxxxxx");

       textbackground(1);
       cprintf(" Digital Differential Analyzer Algorithm ");
       textbackground(8);

       cprintf("\nxxxxxxxxxxxx");
       cprintf("x x");
       cprintf("x x");
       cprintf("x x");
       cprintf("\nxxxxxxxxxxxx");

       for(int count=0;count<42;count++)
    
       cprintf("\nxxxxxxxxxxxx");
       cprintf("x x");
       cprintf("x x");
       cprintf("x x");
       cprintf("\nxxxxxxxxxxxx");

       gotoxy(1,2);
    }