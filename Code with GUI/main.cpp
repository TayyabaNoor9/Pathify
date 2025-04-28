#include <iostream>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
void gotoRowCol(int rpos, int cpos)
{
	int xpos=cpos, ypos = rpos;
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = cpos;
	scrn.Y = rpos;
	SetConsoleCursorPosition(hOuput, scrn);
}

void Print_Box(int rdim, int cdim,char b)
{
    for(int r=0;r<=rdim;r++)
    {
        for(int c=0;c<=cdim;c++)
        {
            if(r%5==0 || c%10==0)
            {
                gotoRowCol(r,c);
                cout<<b;
            }
        }
    }
}
void Print_in_Box(int rdim, int cdim,int num)
{
    for(int r=1;r<=rdim;r+=5)
    {
        for(int c=1;c<=cdim;c+=10)
        {
                gotoRowCol(r,c);
                cout<<num;
                num=num-1;
        }
    }
}

void print_snake_ladder()
{
    int r=32,c=71;
    for(int i=1;i<=11;i++)
    {
        gotoRowCol(r,c);
    cout<<"\\______\\"<<endl;
        c++;
        r++;
    }
    gotoRowCol(r,c);
    cout<<"\\      \\ "<<endl;
    r=12,c=60;
    for(int i=1;i<=16;i++)
    {
        gotoRowCol(r,c);
    cout<<"/______/"<<endl;
    if(i==4 || i==13 || i==9 || i==14)
    {
        c=c-2;
    }
    else
    {
        c--;
    }
        r++;
    }
    gotoRowCol(r,c);
    cout<<"/      / "<<endl;
    gotoRowCol(37,23);
    cout<<"  ? ";
    gotoRowCol(38,23);
    cout<<"('_')";
    r=39;
    while(r<=48)
    {
        gotoRowCol(r,24);
        if(r==48)   {cout<<" *";}
        else        {cout<<"***";}
        r++;
    }
    gotoRowCol(2,43);
    cout<<"  ? ";
    gotoRowCol(3,43);
    cout<<"('_')";
    r=4,c=44;
    for(int i=1;i<=20;i++)
    {
        gotoRowCol(r,c);
        if(i==20)   {cout<<" *";}
        else        {cout<<"***";}
        r++;
        c--;
    }


}
void scoreboard()
{
    int c=130,r=5;
    gotoRowCol(5,123);
    cout<<"SCORE BOARD";
    gotoRowCol(6,123);
    cout<<"-----------";
    gotoRowCol(8,120);
    cout<<"snake   :  28 --> 08";
    gotoRowCol(10,120);
    cout<<"snake   :  96 --> 58";
    gotoRowCol(12,120);
    cout<<"ladder  :  12 --> 33";
    gotoRowCol(14,120);
    cout<<"ladder  :  46 --> 74";
    gotoRowCol(17,120);
    cout<<"  player 1  (  $  )";
    gotoRowCol(19,120);
    cout<<"  player 2  (  #  )";
    gotoRowCol(25,127);
    cout<<"DISE";
    gotoRowCol(26,127);
    cout<<"----";
    gotoRowCol(27,133);
    cout<<"______";
    gotoRowCol(28,133);
    cout<<"|    |";
    gotoRowCol(29,133);
    cout<<"|    |";
     gotoRowCol(30,133);
    cout<<"|____|";
}

void snake_ladder1(int & r1,int & c1,int & score1)
{
    if(r1==38 && c1==28)//snake(28-8)
    {
        gotoRowCol(r1,c1);
        cout<<" ";
        r1=48;
        c1=28;
        score1=score1-20;
        gotoRowCol(r1,c1);
       cout<<"$";

    }
    else if(r1==3 && c1==48)//snake(96-58)
    {
        gotoRowCol(r1,c1);
        cout<<" ";
        r1=23;
        c1=28;
        score1=score1-38;
        gotoRowCol(r1,c1);
       cout<<"$";
    }
   else if(r1==43 && c1==88)//ladder(12-33)
   {
       gotoRowCol(r1,c1);
        cout<<" ";
       r1=33;
       c1=78;
       score1=score1+21;
       gotoRowCol(r1,c1);
       cout<<"$";
   }
   else if(r1==28 && c1==48)//ladder(46-74)
   {
       gotoRowCol(r1,c1);
        cout<<" ";
       r1=13;
       c1=68;
       score1=score1+28;
       gotoRowCol(r1,c1);
       cout<<"$";
   }

}
void snake_ladder2(int & r2,int & c2,int & score2)
{
    if(r2==36 && c2==28)//snake(28-8)
    {
        gotoRowCol(r2,c2);
        cout<<" ";
        r2=46;
        c2=28;
        score2=score2-20;
        gotoRowCol(r2,c2);
       cout<<"#";
    }
    else if(r2==1 && c2==48)//snake(96-58)
    {
        gotoRowCol(r2,c2);
        cout<<" ";
        r2=21;
        c2=28;
        score2=score2-38;
        gotoRowCol(r2,c2);
       cout<<"#";
    }
   else if(r2==41 && c2==88)//ladder(12-33)
   {
       gotoRowCol(r2,c2);
        cout<<" ";
       r2=31;
       c2=78;
       score2=score2+21;
       gotoRowCol(r2,c2);
       cout<<"#";
   }
   else if(r2==26 && c2==48)//ladder(46-74)
   {
       gotoRowCol(r2,c2);
        cout<<" ";
       r2=11;
       c2=68;
       score2=score2+28;
       gotoRowCol(r2,c2);
       cout<<"#";
   }
}

int Dise1(int & f)
{
    int c=0,a;
    if(f!=6)
    {
        gotoRowCol(28,120);
        cout<<"Player 01 : ";
        getch();
        srand(time(0));
        f=(rand())%6+1;
        gotoRowCol(29,135);
        cout<<f;
    }
    if(f==6)
    {
    do{
        gotoRowCol(28,120);
        cout<<"Player 01 : ";
         getch();
         srand(time(0));
         a=(rand())%6+1;
         gotoRowCol(29,135);
          cout<<a;
          c=c+a;
    }while(a==6);
    if(c>=18)
    {
        c=0;
    }
    return c;
    }
     else
     {
         return 0;
     }

}
int Dise2(int & g)
{
    int c=0,a;
    if(g!=6)
    {
        gotoRowCol(28,120);
        cout<<"Player 02 : ";
        getch();
        srand(time(0));
        g=(rand())%6+1;
        gotoRowCol(29,135);
        cout<<g;
    }
    if(g==6)
    {
    do{
        gotoRowCol(28,120);
        cout<<"Player 02 : ";
         getch();
         srand(time(0));
         a=(rand())%6+1;
         gotoRowCol(29,135);
          cout<<a;
          c=c+a;
    }while(a==6);
    if(c>=18)
    {
        c=0;
    }
    return c;
    }
     else
     {
         return 0;
     }
}

int rollingdise()
{
    int f=0,g=0,score1=0,score2=0,c1=108,r1=48,r2=46,c2=108;
    for(int i=1;score1!=100 && score2!=100;i++)
    {
    int n=Dise1(f);
    score1+=n;
    if(score1>100)
    {
        score1=score1-n;
        n=0;
    }
    gotoRowCol(30,140);
    cout<<n<<" ";
   gotoRowCol(r1,c1);
   cout<<" ";
   int d=0;
   for(int c=score1-n+1;c<=score1;c++)
   {
       if(c%10==1 && c!=1)
       {
           d=(c-(score1-n));
           r1=r1-5;
           c1=98;
       }
   }
   n=n-d;
   c1=c1-n*10;
   gotoRowCol(r1,c1);
   cout<<"$";
   Sleep(100);
   snake_ladder1(r1,c1,score1);

   if(score1==100)
    {
        system("CLS");
        gotoRowCol(20,70);
        cout<<"player 1 won by "<<"lead of "<<score1-score2<<" scores";
        getch();
        return 0;
    }

    else if(score2==100)
    {
        system("CLS");
        gotoRowCol(20,70);
        cout<<"player 2 won by "<<" lead of "<<score2-score1<<" scores";
        getch();
        return 0;
    }

    int m=Dise2(g);
    score2+=m;
    if(score2>100)
    {
        score2=score2-m;
        m=0;
    }
    gotoRowCol(30,140);
    cout<<m<<" ";

       gotoRowCol(r2,c2);
   cout<<" ";
   int e=0;
   for(int c=score2-m+1;c<=score2;c++)
   {
       if(c%10==1 && c!=1)
       {
           e=(c-(score2-m));
           r2=r2-5;
           c2=98;
       }
   }
   m=m-e;
   c2=c2-m*10;
   gotoRowCol(r2,c2);
   cout<<"#";
   Sleep(100);
   snake_ladder2(r2,c2,score2);
    }
    Sleep(1000);
    if(score1==100)
    {
        system("CLS");
        gotoRowCol(20,70);
        cout<<"player 1 won by "<<"lead of "<<score1-score2<<" scores";
        getch();
        return 0;
    }

    else if(score2==100)
    {
        system("CLS");
        gotoRowCol(20,70);
        cout<<"player 2 won by "<<"lead of "<<score2-score1<<" scores";
        getch();
        return 0;
    }

}
void display()
{
    gotoRowCol(20,70);
    cout<<"SNAKE LADDER GAME"<<endl;
    gotoRowCol(22,70);
    cout<<"____RULES____"<<endl;
    gotoRowCol(24,70);
    cout<<"->This game has two players"<<endl;
    gotoRowCol(25,70);
    cout<<"->You need a six to enter the game."<<endl;
    gotoRowCol(26,70);
    cout<<"->Winner will be the one who reaches 100 first."<<endl;
}

int main()
{
    display();
    getch();
    system("CLS");
    scoreboard();
    print_snake_ladder();
    Print_Box(50,100,219);
    Print_in_Box(46,96,100);
    rollingdise();

    return 0;
}
