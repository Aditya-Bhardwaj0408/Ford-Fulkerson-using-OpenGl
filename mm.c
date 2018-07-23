#include<GL/glut.h>
#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int w=0,x,y,z;
char buffer[10]={'\0'};
int abw=8,bcw=10,cdw=10,dew=7,efw=5,faw=10,fbw=2,ecw=8;
int max=11;
int *p,*q,*r,*s,*t;

int counter=0;

void init(void)
{
 glClearColor(0.3,0.3,0.3,1.0);
 glMatrixMode(GL_PROJECTION);
 gluOrtho2D(0,500,0,500);
}
void setPixel(GLint xCoordinate, GLint yCoordinate)
{
 glBegin(GL_POINTS);
 glVertex2i(xCoordinate,yCoordinate);
 glEnd();
 glFlush(); 
}



//DDA line

int round1(double number)
{
 return (number>=0) ? (int)(number+0.5):(int)(number-0.5);
}

void LineWithDDA(int x0,int y0,int x1,int y1)
{
 int dy=y1-y0;
 int dx=x1-x0;
 int steps,i;
 float xinc,yinc,x=x0,y=y0;
 if(abs(dx)>abs(dy))
 {
  steps=abs(dx);
 }
 else
 {
  steps=abs(dy);
 }
 xinc=(float)dx/(float)steps;
 yinc=(float)dy/(float)steps;
 setPixel(round1(x),round1(y));
 for(i=0;i<steps;i++)
 {
  x+=xinc;
  y+=yinc;
  setPixel(round1(x),round1(y));
 }
 glutSwapBuffers();
}



void fig1()
{     
      glBegin(GL_LINE_LOOP);
       glVertex2f(0, 250); 
       glVertex2f(100,100);
       glVertex2f(300,100);
       glVertex2f(400,250);
       glVertex2f(300,400);
       glVertex2f(100,400);
       glEnd();

       glBegin(GL_LINES);
       glVertex2f(100,400);
       glVertex2f(100,100);
       
       glEnd(); 

       glBegin(GL_LINES);
       
       glVertex2f(300,400);
       glVertex2f(300,100);
       glPointSize(7.0);
       glEnd(); 



       glBegin(GL_POLYGON);
       glColor3f(0,0.7,0.7);
       glVertex2f(0,0);
       glVertex2f(0,0);
       glVertex2f(0,0);
       glVertex2f(0,0);
       glEnd();
       
/*
       glBegin(GL_POLYGON);
       glColor3f(0,0.7,0.7);
       glVertex2f(290,410);
       glVertex2f(310,410);
       glVertex2f(310,390);
       glVertex2f(290,390);
       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(0,0.7,0.7);
       glVertex2f(90,110);
       glVertex2f(110,110);
       glVertex2f(110,90);
       glVertex2f(90,90);
       glEnd();

       glBegin(GL_POLYGON);
       glColor3f(0,0.7,0.7);
       glVertex2f(290,110);
       glVertex2f(310,110);
       glVertex2f(310,90);
       glVertex2f(290,90);
       glEnd();

       glBegin(GL_POLYGON);
       glColor3f(0,0.7,0.7);
       glVertex2f(0,260);
       glVertex2f(10,260);
       glVertex2f(10,240);
       glVertex2f(0,240);
       glEnd();

       glBegin(GL_POLYGON);
       glColor3f(0,0.7,0.7);
       glVertex2f(390,260);
       glVertex2f(410,260);
       glVertex2f(410,240);
       glVertex2f(390,240);
       glEnd();


*/

counter=0;

int i;
char cd[]="A";
char ce[]="B";
char cf[]="C";
char cg[]="D";
char ch[]="E";
char ci[]="F";
char cj[]="";
char ck[10]="";
 int num = 10;

char cl[10]={'\0'};
char cm[10]={'\0'};
char cn[10]={'\0'};
char co[10]={'\0'};
char cp[10]={'\0'};
char cq[10]={'\0'};
char cr[10]={'\0'};
char cs[10]={'\0'};

sprintf(cm, "%d", efw); //%d is for integers 
sprintf(cq, "%d", abw); //%d is for integers 
sprintf(cr, "%d", fbw); //%d is for integers 
sprintf(cs, "%d", ecw); //%d is for integers 
sprintf(co, "%d", cdw); //%d is for integers 
sprintf(cl, "%d", faw); //%d is for integers 
sprintf(cn, "%d", dew); //%d is for integers
sprintf(cp, "%d", bcw); //%d is for integers  




glRasterPos2f(50,350);
for(i=0;i<strlen(cl);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cl[i]);

glRasterPos2f(200,420);
for(i=0;i<strlen(cm);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cm[i]);

glRasterPos2f(350,350);
for(i=0;i<strlen(cn);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cn[i]);


//----
glRasterPos2f(350,150);
for(i=0;i<strlen(co);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,co[i]);

glRasterPos2f(200,80);
for(i=0;i<strlen(cp);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cp[i]);

glRasterPos2f(50,150);
for(i=0;i<strlen(cq);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cq[i]);

glRasterPos2f(80,250);
for(i=0;i<strlen(cr);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cr[i]);

glRasterPos2f(280,250);
for(i=0;i<strlen(cs);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cs[i]);


glRasterPos2f(10,245);
for(i=0;i<strlen(cd);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cd[i]);

glRasterPos2f(96,82);
for(i=0;i<strlen(ce);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ce[i]);

glRasterPos2f(296,82);
for(i=0;i<strlen(cf);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cf[i]);


//----
glRasterPos2f(375,245);
for(i=0;i<strlen(cg);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cg[i]);

glRasterPos2f(300,402);
for(i=0;i<strlen(ch);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ch[i]);

glRasterPos2f(96,402);
for(i=0;i<strlen(ci);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ci[i]);

glRasterPos2f(80,250);
for(i=0;i<strlen(cj);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,cj[i]);

glRasterPos2f(280,250);
for(i=0;i<strlen(ck);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ck[i]);

/*
sprintf(buffer, "%d", num); //%d is for integers 
 for(i=0;i<strlen(buffer);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,buffer[i]);
*/
}



void Display()
{
 glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,0,0);
 glutSwapBuffers();
 fig1();
}





void mykeyboard(unsigned char key, int x, int y)
{
   char ab[10]={'\0'};
char bc[]="Path Maximum Flow is:";
   int i;

   if(key=='b')
   {  
      glColor3f(0,0,1);
      glRasterPos2f(310,250);
       glPointSize(4.0);
       LineWithDDA(0,250,100,100);
      glFlush();

            max=abw;
            

        
        if(counter==0)
       
         {  p=&abw;}
  else if(counter==1)
{ q=&abw;} 

            else if(counter==2)
               { r=&abw;}       
  else if(counter==3)
{ s=&abw;}
  else if(counter==4)
{ t=&abw;}
   

counter+=1;




   }


   else if(key=='c')
   {  
      glColor3f(0,0,1);
      glRasterPos2f(310,250);
       glPointSize(4.0);
      LineWithDDA(100,100,300,100); 
      glFlush();
     
              
           if(bcw<max)
{
          max=bcw;
}
             
        if(counter==0)
       {  p=&bcw;


        }
       else if(counter==1)
        { q=&bcw;

        } 
        else if(counter==2)
        { r=&bcw;
        }       
       else if(counter==3)
       { s=&bcw;
       }
  else if(counter==4)
{ t=&bcw;}
  

counter+=1;

   }


   else if(key=='q')
   {  
      glColor3f(0,0,1);
      glRasterPos2f(310,250);
       glPointSize(4.0);
      LineWithDDA(300,400,300,100);
      glFlush();

      if(max>ecw)
{

              max=ecw;

}

              


            
        if(counter==0)
       
         {  p=&ecw;}
  else if(counter==1)
{ q=&ecw;} 

            else if(counter==2)
               { r=&ecw;}       
  else if(counter==3)
{ s=&ecw;}
  else if(counter==4)
{ t=&ecw;}
   

counter+=1;

   }


   else if(key=='e')
   {  
      glColor3f(0,0,1);
      glRasterPos2f(310,250);
       glPointSize(4.0);
      LineWithDDA(300,400,400,250);
      glFlush();


           if(max>dew)
{

              max=dew;

}


                     
        if(counter==0)
       
         {  p=&dew;}
  else if(counter==1)
{ q=&dew;} 

            else if(counter==2)
               { r=&dew;}       
  else if(counter==3)
{ s=&dew;}
  else if(counter==4)
{ t=&dew;}
  
                  


counter+=1;



   }

 else if(key=='d')
   {  
      glColor3f(0,0,1);
      glRasterPos2f(310,250);
       glPointSize(4.0);
      LineWithDDA(300,100,400,250);
      glFlush();
if(max>cdw)
{
   max=cdw;
}
       

        if(counter==0)
       
         {  p=&cdw;}
       else if(counter==1)
         { q=&cdw;} 

        else if(counter==2)
         { r=&cdw;}       
       else if(counter==3)
         { s=&cdw;}
       else if(counter==4)
         { t=&cdw;}
       
             counter+=1;
   }

 else if(key=='f')
   {  
      glColor3f(0,0,1);
      glRasterPos2f(310,250);
       glPointSize(4.0);
      LineWithDDA(100,400,300,400);
      glFlush();

      if(max>efw)
{
         max=efw;

}
                   

        if(counter==0)
       
         {  p=&efw;}
       else if(counter==1)
         { q=&efw;} 

        else if(counter==2)
         { r=&efw;}       
       else if(counter==3)
         { s=&efw;}
       else if(counter==4)
         { t=&efw;}
       


          counter+=1;

   }

 else if(key=='g')
   {  
               
      glColor3f(0,0,1);
      glRasterPos2f(310,250);
       glPointSize(4.0);
      LineWithDDA(100,100,100,400);
      glFlush();
       if(max>fbw )
        
          {
              max=fbw;
           }
    
          

        if(counter==0)
       
         {  p=&fbw;}
       else if(counter==1)
         { q=&fbw;} 

        else if(counter==2)
         { r=&fbw;}       
       else if(counter==3)
         { s=&fbw;}
       else if(counter==4)
         { t=&fbw;}
       


counter+=1;

   }


 else if(key=='a')
   {  
      glColor3f(0,0,1);
      glRasterPos2f(310,250);
       glPointSize(4.0);
      LineWithDDA(0,250,100,400);
      glFlush();

     if(max>faw)
{

              max=faw;

}

                      

        if(counter==0)
       
         {  p=&faw;

         }
       else if(counter==1)
         { q=&faw;} 

        else if(counter==2)
         { r=&faw;}       
       else if(counter==3)
         { s=&faw;}
       else if(counter==4)
         { t=&faw;}
        
   

counter+=1;

}

 else if(key=='x')
   {  
     int count;
    

if(counter==5)
   {   *p-=max;
       *q-=max;
       *r-=max;
       *s-=max;
       *t-=max;
   }

    if(counter==4)
   {   *p-=max;
       *q-=max;
       *r-=max;
       *s-=max;
      
   } 
      if(counter==3)
   {   *p-=max;
       *q-=max;
       *r-=max;
       
}


 sprintf(ab, "%d", max);

max=11; 
glRasterPos2f(400,50);
for(i=0;i<strlen(ab);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,ab[i]);


glRasterPos2f(310,100);
for(i=0;i<strlen(bc);++i)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,bc[i]);


      glColor3f(1,0,0);
      glRasterPos2f(310,250);
       glPointSize(6.0);
      fig1();
 
      glFlush();    

   }



   else if(key=='z')
   {  
      glColor3f(1,0,0);
      glRasterPos2f(310,250);
       glPointSize(6.0);
      fig1();
glScissor(400,250,30,30);
glEnable(GL_SCISSOR_TEST);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // (or whatever buffer you want to clear)
glDisable(GL_SCISSOR_TEST);
      glFlush();

   }

   else if(key=='o')
{
glClearColor(0.0f, 0.0f, 0.0f, 1.0f );
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

}


int main(int argc, char**argv)
{
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(500,500);
 glutInitWindowPosition(0,0);
 glutCreateWindow("Bresenhems");
 init(); 
 glutDisplayFunc(Display);
 
 glutKeyboardFunc(mykeyboard);

 glutMainLoop();
}
