#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void printEnemy();
void printPlayer();
void eraseEnemy();
void moveEnemy();
void movePlayerLeft();
void movePlayerRight();
void erasePlayer();
void printAlien();
void moveAlien();

int pX=20, pY=20; 
int eX=2, eY=2;
int fX=1, fY=6;

main()
{
  system("cls");
  printMaze();  
  printPlayer();
  printAlien();
  printEnemy(); 
  while(true)
{ 
  if (GetAsyncKeyState(VK_LEFT))
  {
     movePlayerLeft();
  }
  if (GetAsyncKeyState(VK_RIGHT))
 {
     movePlayerRight();
 }
  moveEnemy();
  Sleep(300);
  moveAlien();
  Sleep(300);
}

}

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}


void printMaze()
{
cout<<"##########################################################################################"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"#                                                                                        #"<<endl;
cout<<"##########################################################################################"<<endl;

}

void printEnemy()
{
 gotoxy(eX,eY);
 cout<<"    (~~~~)   (~~~~)   "<<endl;
 gotoxy(eX,eY+1);
 cout<<"    |=| |    |=| |   "<<endl;
 gotoxy(eX,eY+2);
 cout<<"    |=| |    |=| |  "<<endl;
 gotoxy(eX,eY+3);
 cout<<"       \\      /     "<<endl;
 gotoxy(eX,eY+4);
 cout<<"        \\    /      "<<endl;
}

void printPlayer()
{
 
 gotoxy(pX,pY+8);
 cout<<"          /\\            "<<endl;
 gotoxy(pX,pY+9);
 cout<<"       __/~~\\__         "<<endl;
 gotoxy(pX,pY+10);
 cout<<"     /   |  |   \\       "<<endl;
 gotoxy(pX,pY+11);
 cout<<"    =====.  .=====      "<<endl;
 gotoxy(pX,pY+12);
 cout<<"         ||||           "<<endl;

} 
 
void eraseEnemy()
{
  gotoxy(eX,eY);
  cout << "                  ";
  gotoxy(eX,eY+1);  
  cout << "                  ";
  gotoxy(eX,eY+2);
  cout << "                  ";
  gotoxy(eX,eY+3);
  cout << "                  ";
  gotoxy(eX,eY+4);
  cout << "                  ";
}

void moveEnemy()
{
 eraseEnemy();
 eX = eX + 1;
 if(eX == 60)
{
 eX = 2;
}
 printEnemy();
}

void erasePlayer()
{
 gotoxy(pX,pY);
 cout<<"                       "<<endl;
 gotoxy(pX,pY+1);
 cout<<"                       "<<endl;
 gotoxy(pX,pY+2);
 cout<<"                       "<<endl;
 gotoxy(pX,pY+3);
 cout<<"                       "<<endl;
 gotoxy(pX,pY+4);
 cout<<"                       "<<endl;


}

void movePlayerLeft() 

{
  erasePlayer();
  pX=pX-1;
  printPlayer();

}

void movePlayerRight()

{
  erasePlayer();
  pX=pX+1;
  printPlayer();
}


void printAlien()
{ 
 gotoxy(fX,fY+6);
 cout<<"        ___  ___               "<<endl;
 gotoxy(fX,fY+7);
 cout<<"       |        |              "<<endl;
 gotoxy(fX,fY+8);
 cout<<"      (| **  ** |)             "<<endl;
 gotoxy(fX,fY+9);
 cout<<"       \\   5   /              "<<endl;
 gotoxy(fX,fY+10);
 cout<<"        \\     /               "<<endl;
 gotoxy(fX,fY+11);
 cout<<"       / _____\\              "<<endl;
 gotoxy(fX,fY+12);
 cout<<"      /  |   | \\             "<<endl;
 gotoxy(fX,fY+13); 
 cout<<"     /   | _ |  \\           "<<endl;
 gotoxy(fX,fY+14);
 cout<<"         \\   /                "<<endl;
 gotoxy(fX,fY+15);
 cout<<"          |_|                 "<<endl;

}








void eraseAlien()
{ 
 gotoxy(fX,fY+6);
 cout<<"                              "<<endl;
 gotoxy(fX,fY+7);
 cout<<"                             "<<endl;
 gotoxy(fX,fY+8);
 cout<<"                             "<<endl;
 gotoxy(fX,fY+9);
 cout<<"                            "<<endl;
 gotoxy(fX,fY+10);
 cout<<"                            "<<endl;
 gotoxy(fX,fY+11);
 cout<<"                            "<<endl;
 gotoxy(fX,fY+12);
 cout<<"                            "<<endl;
 gotoxy(fX,fY+13);
 cout<<"                            "<<endl;
 gotoxy(fX,fY+14);
 cout<<"                            "<<endl;
 gotoxy(fX,fY+15);
 cout<<"                             "<<endl;


}

void moveAlien()
{
 eraseAlien();
 fY = fY + 1;
 if(fY == 5)
{
 fY = 2;
}
 printAlien();
}





