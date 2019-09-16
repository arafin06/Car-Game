#include<windows.h>
#include <GL/glut.h>
#include<stdio.h>

int x1=200,y1=10,x2=280,y2=80, sx=2, mx=10;
int a1=147,a2=153,b1=0,b2=650,c1=297,c2=303;

int xi1=30, xi2=120,yi1=600,yi2=680;
int xj1=180, xj2=270,yj1=1000,yj2=1080;
int xk1=330, xk2=420,yk1=800,yk2=880;

int xi11=30, xi22=120,yi11=1200,yi22=1280;
int xj11=180, xj22=270,yj11=1400,yj22=1480;
int xk11=330, xk22=420,yk11=1600,yk22=1680;

int xi111=30, xi222=120,yi111=1800,yi222=1880;
int xj111=180, xj222=270,yj111=2200,yj222=2280;
int xk111=330, xk222=420,yk111=2000,yk222=2080;

void myInit (void)
{

     glClearColor(.5,0.,30.50,0.20); // sets background color to white

     // sets a point to be 4x4 pixels

     glMatrixMode(GL_PROJECTION);

     glLoadIdentity();
   //  gluPerspective(45.0,(double)500/(double)400,1.0,200.0);

     gluOrtho2D(0.0, 500.0, 0.0, 400.0); // the display area in world coordinates.

}

void initRendering()

{

glEnable(GL_DEPTH_TEST);

}

void myDisplay(void)

{

     glClear(GL_COLOR_BUFFER_BIT); // clears the screen

     glColor3f(1.0f,0.0,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (a1, b1);
          glVertex2i (a2, b1);

          glVertex2i (a2, b1);
          glVertex2i (a2, b2);


          glVertex2i (a2, b2);
          glVertex2i (a1, b2);


          glVertex2i (a1, b2);
          glVertex2i (a1, b1);

     glEnd();


     glColor3f(1.0f,0.0,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (c1, b1);
          glVertex2i (c2, b1);

          glVertex2i (c2, b1);
          glVertex2i (c2, b2);


          glVertex2i (c2, b2);
          glVertex2i (c1, b2);


          glVertex2i (c1, b2);
          glVertex2i (c1, b1);

     glEnd();


     glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (x1, y1);
          glVertex2i (x2, y1);

          glVertex2i (x2, y1);
          glVertex2i (x2, y2);


          glVertex2i (x2, y2);
          glVertex2i (x1, y2);


          glVertex2i (x1, y2);
          glVertex2i (x1, y1);

     glEnd();


     glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (xk1, yk1);
          glVertex2i (xk2, yk1);

          glVertex2i (xk2, yk1);
          glVertex2i (xk2, yk2);


          glVertex2i (xk2, yk2);
          glVertex2i (xk1, yk2);


          glVertex2i (xk1, yk2);
          glVertex2i (xk1, yk1);

     glEnd();



     glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (xj1, yj1);
          glVertex2i (xj2, yj1);

          glVertex2i (xj2, yj1);
          glVertex2i (xj2, yj2);


          glVertex2i (xj2, yj2);
          glVertex2i (xj1, yj2);


          glVertex2i (xj1, yj2);
          glVertex2i (xj1, yj1);

     glEnd();


     glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (xi1, yi1);
          glVertex2i (xi2, yi1);

          glVertex2i (xi2, yi1);
          glVertex2i (xi2, yi2);

          glVertex2i (xi2, yi2);
          glVertex2i (xi1, yi2);

          glVertex2i (xi1, yi2);
          glVertex2i (xi1, yi1);

     glEnd();

     //1ST WHEEL
     glColor3f(0.0f,1.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (x1-10, y1+10);
          glVertex2i (x2-60, y1+10);

          glVertex2i (x2-60, y1+10);
          glVertex2i (x2-60, y2-40);


          glVertex2i (x2-60, y2-40);
          glVertex2i (x1-10, y2-40);


          glVertex2i (x1-10, y2-40);
          glVertex2i (x1-10, y1+10);

     glEnd();


    //2ND WHEEL
     glColor3f(0.0f,1.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (x1-10, y1+40);
          glVertex2i (x2-60, y1+40);

          glVertex2i (x2-60, y1+40);
          glVertex2i (x2-60, y2-10);


          glVertex2i (x2-60, y2-10);
          glVertex2i (x1-10, y2-10);


          glVertex2i (x1-10, y2-10);
          glVertex2i (x1-10, y1+40);

     glEnd();

//3rd WHEEL
     glColor3f(0.0f,1.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (x1+60, y1+10);
          glVertex2i (x2+10, y1+10);

         glVertex2i (x2+10, y1+10);
          glVertex2i (x2+10, y2-40);


          glVertex2i  (x2+10, y2-40);
          glVertex2i (x1+60, y2-40);


          glVertex2i (x1+60, y2-40);
          glVertex2i (x1+60, y1+10);

     glEnd();

     //4th WHEEL
     glColor3f(0.0f,1.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (x1+60, y1+40);
          glVertex2i (x2+10, y1+40);

         glVertex2i (x2+10, y1+40);
          glVertex2i (x2+10, y2-10);


          glVertex2i  (x2+10, y2-10);
          glVertex2i (x1+60, y2-10);


          glVertex2i (x1+60, y2-10);
          glVertex2i (x1+60, y1+40);




     glEnd();

      glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (xi11, yi11);
          glVertex2i (xi22, yi11);

          glVertex2i (xi22, yi11);
          glVertex2i (xi22, yi22);


          glVertex2i (xi22, yi22);
          glVertex2i (xi11, yi22);


          glVertex2i (xi11, yi22);
          glVertex2i (xi11, yi11);

     glEnd();


 glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (xi111, yi111);
          glVertex2i (xi222, yi111);

          glVertex2i (xi222, yi111);
          glVertex2i (xi222, yi222);


          glVertex2i (xi222, yi222);
          glVertex2i (xi111, yi222);


          glVertex2i (xi111, yi222);
          glVertex2i (xi111, yi111);

     glEnd();

      glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (xj111, yj111);
          glVertex2i (xj222, yj111);

          glVertex2i (xj222, yj111);
          glVertex2i (xj222, yj222);


          glVertex2i (xj222, yj222);
          glVertex2i (xj111, yj222);


          glVertex2i (xj111, yj222);
          glVertex2i (xj111, yj111);

     glEnd();

      glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (xj11, yj11);
          glVertex2i (xj22, yj11);

          glVertex2i (xj22, yj11);
          glVertex2i (xj22, yj22);


          glVertex2i (xj22, yj22);
          glVertex2i (xj11, yj22);


          glVertex2i (xj11, yj22);
          glVertex2i (xj11, yj11);

     glEnd();

 glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (xk11, yk11);
          glVertex2i (xk22, yk11);

          glVertex2i (xk22, yk11);
          glVertex2i (xk22, yk22);


          glVertex2i (xk22, yk22);
          glVertex2i (xk11, yk22);


          glVertex2i (xk11, yk22);
          glVertex2i (xk11, yk11);

     glEnd();

      glColor3f(1.0f,0.0f,0.0f) ;// setsthe drawing colour

     glPointSize(4.0);

     glBegin(GL_POLYGON);

          glVertex2i (xk111, yk111);
          glVertex2i (xk222, yk111);

          glVertex2i (xk222, yk111);
          glVertex2i (xk222, yk222);


          glVertex2i (xk222, yk222);
          glVertex2i (xk111, yk222);


          glVertex2i (xk111, yk222);
          glVertex2i (xk111, yk111);

     glEnd();




        //for moving object
     yi1=yi1-sx;
     yi2=yi2-sx;

     yj1=yj1-sx;
     yj2=yj2-sx;

     yk1=yk1-sx;
     yk2=yk2-sx;

     yi11=yi11-sx;
     yi22=yi22-sx;

     yi111=yi111-sx;
     yi222=yi222-sx;

     yj111=yj111-sx;
     yj222=yj222-sx;

     yj11=yj11-sx;
     yj22=yj22-sx;

     yk11=yk11-sx;
     yk22=yk22-sx;

     yk111=yk111-sx;
     yk222=yk222-sx;



     //hit on bottom
     if(y2==yi1){
        if(x1>=xi1&&x1<=xi2 || x2>=xi1&&x2<=xi2){
            sx=0;
            mx=0;
        }
     }
     if(y2==yj1){
        if(x1>=xj1&&x1<=xj2 || x2>=xj1&&x2<=xj2){
            sx=0;
            mx=0;
        }
     }
     if(y2==yk1){
        if(x1>=xk1&&x1<=xk2 || x2>=xk1&&x2<=xk2){
            sx=0;
            mx=0;
        }
     }
     if(y2==yi11){
        if(x1>=xi11 && x1<=xi22 || x2>=xi11 && x2<=xi22){
            sx=0;
            mx=0;
        }
     }
     if(y2==yi111){
        if(x1>=xi111 && x1<=xi222 || x2>=xi111 && x2<=xi222){
            sx=0;
            mx=0;
        }
     }
     if(y2==yj111){
        if(x1>=xj111 && x1<=xj222 || x2>=xj111 && x2<=xj222){
            sx=0;
            mx=0;
        }
     }
     if(y2==yj11){
        if(x1>=xj11 && x1<=xj22 || x2>=xj11 && x2<=xj22){
            sx=0;
            mx=0;
        }
     }
     if(y2==yk11){
        if(x1>=xk11 && x1<=xk22 || x2>=xk11 && x2<=xk22){
            sx=0;
            mx=0;
        }
     }
     if(y2==yk111){
        if(x1>=xk111 && x1<=xk222 || x2>=xk111 && x2<=xk222){
            sx=0;
            mx=0;
        }
     }

     //hit on left
     if(x2==xi1){
        if(y1>=yi1&&y1<=yi2 || y2>=yi1&&y2<=yi2){
            sx=0;
            mx=0;
        }
     }
     if(x2==xj1){
        if(y1>=yj1&&y1<=yj2 || y2>=yj1&&y2<=yj2){
            sx=0;
            mx=0;
        }
     }
     if(x2==xk1){
        if(y1>=yk1&&y1<=yk2 || y2>=yk1&&y2<=yk2){
            sx=0;
            mx=0;
        }
     }
     if(x2==xi11){
        if(y1>=yi11 && y1<=yi22 || y2>=yi11 && y2<=yi22){
            sx=0;
            mx=0;
        }
     }
      if(x2==xi111){
        if(y1>=yi111 && y1<=yi222 || y2>=yi111 && y2<=yi222){
            sx=0;
            mx=0;
        }
     }
     if(x2==xj111){
        if(y1>=yj111 && y1<=yj222 || y2>=yj111 && y2<=yj222){
            sx=0;
            mx=0;
        }
     }
      if(x2==xj11){
        if(y1>=yj11 && y1<=yj22 || y2>=yj11 && y2<=yj22){
            sx=0;
            mx=0;
        }
     }
     if(x2==xk11){
        if(y1>=yk11 && y1<=yk22 || y2>=yk11 && y2<=yk22){
            sx=0;
            mx=0;
        }
     }
     if(x2==xk111){
        if(y1>=yk111 && y1<=yk222 || y2>=yk111 && y2<=yk222){
            sx=0;
            mx=0;
        }
     }

     //hit on right
     if(x1==xi2){
        if(y1>=yi1&&y1<=yi2 || y2>=yi1&&y2<=yi2){
            sx=0;
            mx=0;
        }
     }
     if(x1==xj2){
        if(y1>=yj1&&y1<=yj2 || y2>=yj1&&y2<=yj2){
            sx=0;
            mx=0;
        }
     }
     if(x1==xk2){
        if(y1>=yk1&&y1<=yk2 || y2>=yk1&&y2<=yk2){
            sx=0;
            mx=0;
        }
     }
     if(x1==xi22){
        if(y1>=yi11 && y1<=yi22 || y2>=yi11 && y2<=yi22){
            sx=0;
            mx=0;
        }
     }
     if(x1==xi222){
        if(y1>=yi111 && y1<=yi222 || y2>=yi111 && y2<=yi222){
            sx=0;
            mx=0;
        }
     }
     if(x1==xj222){
        if(y1>=yj111 && y1<=yj222 || y2>=yj111 && y2<=yj222){
            sx=0;
            mx=0;
        }
     }
     if(x1==xj22){
        if(y1>=yj11 && y1<=yj22 || y2>=yj11 && y2<=yj22){
            sx=0;
            mx=0;
        }
     }
     if(x1==xk22){
        if(y1>=yk11 && y1<=yk22 || y2>=yk11 && y2<=yk22){
            sx=0;
            mx=0;
        }
     }
     if(x1==xk222){
        if(y1>=yk111 && y1<=yk222 || y2>=yk111 && y2<=yk222){
            sx=0;
            mx=0;
        }
     }


     glFlush(); // sends all output to display;
//glutPostRedisplay();

}


void update(int value)

{


glutPostRedisplay();

glutTimerFunc(15,update,0);

}

void Keypress(unsigned char key, int x, int y)

{
    if(x2<=480){
        if (key =='d')
        {
            x1=x1+mx;
            x2=x2+mx;
        }
    }

    if(x1>=20){
        if (key =='a')
        {
            x1=x1-mx;
            x2=x2-mx;
        }
    }

	/*if(y2<200){
        if (key =='w')
        {
            y1=y1+mx;
            y2=y2+mx;
        }
	}

	if(y1>=6){
        if (key =='s')
        {
            y1=y1-mx;
            y2=y2-mx;
        }
	}*/
}



int main (int argc, char **argv)
{

     glutInit (&argc, argv); // to initialize the toolkit;

     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB); // sets the display mode

     glutInitWindowSize (450, 650); // sets the window size

     glutInitWindowPosition (0,0); // sets the starting position for the window

     initRendering();

     glutCreateWindow ("My first OpenGL program!"); // creates the window and sets the title

     glutDisplayFunc (myDisplay);

     glutKeyboardFunc(Keypress);


     myInit(); // additional initializations as necessary
     glutTimerFunc(5,update,0);

     glutMainLoop(); // go into a loop until event occurs
     return 0;
}
