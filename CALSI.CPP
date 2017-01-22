#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
class cal
{
	float a[100];
	int n;
	double result;
	double q;
	char g;
	public:
	void wel();
	void front();
	void arith();
	void add();
	void input();
	void sub();
	void mul();
	void div();
	void menu();
	void trigo();
	void sine();
	void cosine();
	void tang();
	void logg0();
	void logg1();
	void logg2();
	void quadratic();
	void abss();
	void con();
	void power();
	void root();
	void mod();
	void fact();
	void display();
	void fly1();
	void fly2();
}s;
void cal::wel()
{
	clrscr();
	for(int i=0;i<=15;i++)
	{
		clrscr();
		textcolor(i);
		gotoxy(5,1+i);cprintf(" Ü         Ü  ÜÜÜÜÜ  Ü        ÜÜÜÜÜÜÜ  ÜÜÜÜÜÜÜÜ  ÜÜÜÜ ÜÜÜÜ  ÜÜÜÜÜÜ");
		gotoxy(5,2+i);cprintf(" Û         Û  Û      Û        Û     Û  Û      Û  Û  Û Û  Û  Û     ");
		gotoxy(5,3+i);cprintf(" Û         Û  Û      Û        Û        Û      Û  Û  ÛÜÛ  Û  Û     ");
		gotoxy(5,4+i);cprintf(" Û  ÜÜÜÜÜ  Û  ÛÜÜÜÜ  Û        Û        Û      Û  Û       Û  ÛÜÜÜÜÜ");
		gotoxy(5,5+i);cprintf(" Û  Û   Û  Û  Û      Û        Û        Û      Û  Û       Û  Û     ");
		gotoxy(5,6+i);cprintf(" Û  Û   Û  Û  Û      Û        Û     Ü  Û      Û  Û       Û  Û     ");
		gotoxy(5,7+i);cprintf(" ÛÜÜÛ   ÛÜÜÛ  ÛÜÜÜÜ  ÛÜÜÜÜÜÛ  ÛÜÜÜÜÜÛ  ÛÜÜÜÜÜÜÛ  Û       Û  ÛÜÜÜÜÜ  Ü  Ü Ü");
		delay(100);
	}
}
void cal::front()
{
	for(int i=0;i<=35;i++)
	{
		gotoxy(40+i,2);
		cprintf("Û");
		delay(20);
		gotoxy(40-i,2);
		textcolor(GREEN);
		cprintf("Û");
	     //	delay(20);
		gotoxy(40+i,25);
		cprintf("Û");
		gotoxy(40-i,25);
		textcolor(YELLOW);
		cprintf("Û");
		delay(20);
	}
	textcolor(BLUE);
	for(i=0;i<=23;i++)
	{
		gotoxy(5,2+i);
		cprintf("ÛÛÛ");
		//delay(20);
		gotoxy(73,25-i);
		cprintf("ÛÛÛ");
		delay(20);
	}
	char b[]={"       PROJECT   ON            "};
	char d[]={"  èDEVELOPED BY:               "};
	char s[]={" BAIBHAV AGARWAL                 "};
	gotoxy(36,2);
	textcolor(RED);
	gotoxy(30, 5);
	cprintf(b);
	fly1();
	gotoxy(30,10);
	delay(50);
	textcolor(GREEN);
	gotoxy(10,20);
	cprintf(d);
	gotoxy(10,22);
	textcolor(GREEN);
	cprintf(s);
	delay(30);
	gotoxy(33,28);
	cout<<"enter password : ";
	cin>>g;
	if(g=='p')
	{
		wel();
		menu();
	}
	else
	exit(0);

}
void cal::arith()
{
	display();
	char p;
	gotoxy(40, 4);
	cout<<"'+' for addition:"<<endl;
	gotoxy(40,6);
	cout<<"'-' for substraction:"<<endl;
	gotoxy(40,8);
	cout<<"'*' for multiplication:"<<endl;
	gotoxy(40,10);
	cout<<"'/' for division:"<<endl;
	gotoxy(40, 12);
	cout<<"'%' for remainder:"<<endl;
	gotoxy(40, 14);
	cout<<"'!' for factorial:"<<endl;
	gotoxy(40, 16);
	cout<<"'$' back to menu:"<<endl;
	gotoxy(40,20);
	cout<<"enter your choice:";
	cin>>p;
	switch(p)
	{
		case '+':
		{
			add();
			cout<<endl;
			break;
		}
		case '-':
		{
			sub();
			break;
		}
		case '*':
		{
			mul();
			break;
		}
		case '/':
		{
			div();
			break;
		}
		case '%':
		{
			mod();
			break;
		}
		case '!':
		{
			fact();
			break;
		}
		case '$':
		{
			clrscr();
			menu();
		}
		default:
		{
		cout<<"wrong choice"<<endl;
		cout<<"enter again "<<endl;
		arith();
		}
	}
}
void cal::input()
{
	clrscr();
	display();
	gotoxy(40, 2);
	cout<<"enter no. of values";
	cin>>n;
	gotoxy(40, 3);
	cout<<"enter the values";
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void cal::add()
{
	input();
	result=0;
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		result+=a[i];
	}
	gotoxy(7,5);
	 for(i=0;i<n;i++)
	 {
		cout<<a[i];
		if(i<(n-1))
		cout<<" + ";
	 }
	 cout<<" = "<<result;
	 gotoxy(40,7);
	 cout<<"back to menu (y/n)";
	 cin>>g;
	 if((g=='y')||(g=='Y'))
	 arith();
	 else
	 exit(0);
}
void cal::sub()
{
	input();
	result=a[0];
	cout<<endl;
	for(int i=1;i<n;i++)
	{
		result=result-a[i];
	}
	gotoxy(7,7);
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		if(i<(n-1))
		cout<<" - ";
	}
	gotoxy(40, 5);
	cout<<" = "<<result;
	gotoxy(40,8);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	arith();
	else
	exit(0);
}
void cal::mul()
{
	result=1;
	input();
	for(int i=0;i<n;i++)
	{
		result=result*a[i];
	}
	gotoxy(7, 5);
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		if(i<(n-1))
		cout<<" * ";
	}
	cout<<" ="<<result;
	gotoxy(40,6);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	arith();
	else
	exit(0);
}
void cal::div()
{
	input();
	result=a[0];
	for(int i=1;i<n;i++)
	{
		gotoxy(40,4);
		if(a[i]==0)
		cout<<"not defined"<<endl;
		else
		result=(result/a[i]);
	}
	gotoxy(7,5);
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		if(i<(n-1))
		cout<<" / ";
	}
	cout<<" ="<<result;
	gotoxy(40,12);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	arith();
	else
	exit(0);
}
void cal::mod()
{
	clrscr();
	display();
	int a,b;
	gotoxy(40, 4);
	cout<<"enter the value of divident"<<endl;
	gotoxy(68, 4);
	cin>>a;
	gotoxy(40,6);
	cout<<"enter the value of divisor"<<endl;
	gotoxy(68, 6);
	cin>>b;
	result=a%b;
	gotoxy(8,5);
	cout<<a<<" % "<<b<<" = "<<result;
	gotoxy(40,10);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	arith();
	else
	menu();
}
void cal::fact()
{
	clrscr();
	display();
	n=1,result=1;
	gotoxy(40,4);
	cout<<"enter the no.";
	cin>>n;
	for(int i=1;i<=n;i++)
	result=result*i;
	gotoxy(8,5);
	cout<<n<<" ! "<<" = "<<result;
	gotoxy(40,8);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	{
	clrscr();
	arith();
	}
	else
	menu();
}
void cal::quadratic()
{
	display();
	float a,b,c,s,i;
	gotoxy(40,4);
	cout<<"quadratic equation in the form Axý+bx+C"<<endl;
	gotoxy(40,6);
	cout<<"enter the value of A =";
	cin>>a;
	gotoxy(40,8);
	cout<<"enter the value of B =";
	cin>>b;
	gotoxy(40,10);
	cout<<"enter the value of C =";
	cin>>c;
	if((pow(b,2)-(4*a*c))>=0)
	{
		s=((-b)+(pow(pow(b,2) -(4*a*c),1/2)))/2*a;
		i=((-b)- (pow(pow(b,2)-(4*a*c),1/2)))/2*a;
		textcolor(GREEN);
		gotoxy(8,5);
		cout<<"roots are "<<s<<","<<i;
	}
	else if((pow(b,2)-(4*a*c))<0)
	{
		textcolor(GREEN);
		gotoxy(8,5);
		cout<<"roots are not real";
	}
	gotoxy(40,14);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	menu();
	else
	exit(0);
}
void cal::abss()
{

	display();
	double q;
	gotoxy(40,5);
	cout<<"enter the no";
	cin>>q;
	cout<<endl;
	gotoxy(8,5);
	cprintf("absolute value:" );
	cout<<abs(q);
	gotoxy(40,9);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	menu();
	else
	exit(0);
}
void cal::sine()
{
	clrscr();
	display();
	double result,q;
	gotoxy(40,5);
	cout<<"enter the value of x=";
	cin>>q;
	result=sin(q);
	gotoxy(8,5);
	cout<<"sin"<<q<<"="<<result;
	gotoxy(40,10);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	menu();
	else
	exit(0);
}
void cal::cosine()
{
	clrscr();
	display();
	double result,q;
	gotoxy(40,5);
	cout<<"enter the value of x=";
	cin>>q;
	result=cos(q);
	gotoxy(8,5);
	cout<<"cos"<<q<<"="<<result;
	gotoxy(40,10);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	menu();
	else
	exit(0);
}
void cal::tang()
{
	clrscr();
	display();
	double result,q;
	gotoxy(40,5);
	cout<<"enter the value of x=";
	cin>>q;
	result=tan(q);
	gotoxy(8,5);
	cout<<"tan"<<q<<"="<<result;
	gotoxy(40,10);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	menu();
	else
	exit(0);
}
void cal::trigo()
{
	display();
	int p;
	gotoxy(40,4);
	cout<<"1.sin:"<<endl;
	gotoxy(40,6);
	cout<<"2.cos:"<<endl;
	gotoxy(40,8);
	cout<<"3.tan:"<<endl;
	gotoxy(40,10);
	cout<<"4.back to menu"<<endl;
	gotoxy(40,12);
	cout<<"enter your choice";
	cin>>p;
	switch(p)
	{
		case 1:
		{
			sine();
			cout<<endl;
			break;
		}
		case 2:
		{
			cosine();
			cout<<endl;
			break;
		}
		case 3:
		{
			tang();
			cout<<endl;
			break;
		}
		case 4:
		{
			clrscr();
			menu();
		}
		default:
		{
			cout<<"wrong choice"<<endl;
			cout<<"enter again "<<endl;
			trigo();
		}
	}
}
void cal::logg1()
{
	display();
	double result,x;
	gotoxy(40,5);
	cout<<"enter the value of x"<<x<<endl;
	cin>>x;
	result = log(x);
	gotoxy(8,5);
	cout<<"The common log of "<< x<<"="<< result;
	gotoxy(40,10);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	menu();
	else
	exit(0);
}
void cal::logg2()
{
	display();
	double result,x;
	gotoxy(40,7);display();
	cout<<"enter the value of x"<<x<<endl;
	cin>>x;
	result = log10(x);
	gotoxy(8,5);
	cout<<"The common log of "<< x<<"="<< result;
	gotoxy(40,10);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	menu();
	else
	exit(0);
}
void cal::menu()
{
	clrscr();
	textcolor(RED);
	for(int i=0;i<=14;i++)
	{
		gotoxy(40+i,2);
		cprintf("Û");
		delay(10);
		gotoxy(40-i,2);
		cout<<"Û";
		gotoxy(40+i,5);
		cprintf("Û");
		gotoxy(40-i,5);
		cout<<"Û";
		delay(10);
		gotoxy(40+i,24);
		cout<<"Û";
		gotoxy(40-i,24);
		cprintf("Û");
	}
	for(i=0;i<=19;i++)
	{
		textcolor(GREEN);
		gotoxy(25,5+i);
		cprintf("ÛÛÛ");
		delay(10);
		textcolor(GREEN);
		gotoxy(55,24-i);
		cprintf("ÛÛÛ");
	}
	int p;
	textcolor(RED);
	gotoxy(35, 4);
	cprintf("  MAIN MENU ");
	gotoxy(32,7);
	textcolor(GREEN);
	cprintf("1.  arithmetic:");
	cout<<endl;
	gotoxy(32,9);
	textcolor(BLUE);
	cprintf("2.  trignometric:")   ;
	cout<<endl;
	gotoxy(32,11);
	textcolor(GREEN);
	cprintf("3.  logrithmic:");
	cout<<endl;
	gotoxy(32,13);
	textcolor(BLUE);
	cprintf("4.  quadratic equation");
	cout<<endl;
	gotoxy(32,15);
	textcolor(GREEN);
	cprintf("5.  absolute value");
	cout<<endl;
	gotoxy(32,17);
	textcolor(BLUE);
	cprintf("6.  power");
	cout<<endl;
	gotoxy(32,19);
	textcolor(GREEN);
	cprintf("7.  conversions");
	cout<<endl;
	gotoxy(32,21);
	textcolor(BLUE);
	cprintf("8.  root");
	cout<<endl;
	gotoxy(32, 23);
	textcolor(GREEN);
	cprintf("9.  exit");
	cout<<endl;
	gotoxy(32, 37);
	cout<<endl;
	textcolor(YELLOW);
	gotoxy(5, 24);
	cprintf("enter your choice");
	cin>>p;
	switch(p)
	{
		case 1:
		{
			clrscr();
			arith();
			cout<<endl;
			break;
		}
		case 2:
		{
			clrscr();
			trigo();
			cout<<endl;
			break;
		}
		case 3:
		{
			clrscr();
			logg0();
			cout<<endl;
			break;
		}
		case 4:
		{
			clrscr();
			quadratic();
			cout<<endl;
			break;
		}
		case 5:
		{
			clrscr();
			abss();
			cout<<endl;
			break;
		}
		case 6:
		{
			clrscr();
			power();
			cout<<endl;
			break;
		}
		case 7:
		{
			clrscr();
			con();
			cout<<endl;
			break;
		}
		case 8:
		{
			clrscr();
			root();
			cout<<endl;
			break;
		}
		case 9:
		exit(0);
		default:
		{
			cout<<"wrong choice"<<endl;
			cout<<"enter again "<<endl;
			menu();
		}
	}
}

void cal::logg0()
{
	display();
	x:
	int p;
	gotoxy(40,18);
	cout<<"1.natural log:"<<endl;
	gotoxy(40,20);
	cout<<"2.cmmon log:"<<endl;
	gotoxy(40,22);
	cout<<"3.back to menu"<<endl;
	gotoxy(40,24);
	cout<<"enter your choice";
	cin>>p;
	switch(p)
	{
		case 1:
		{
			clrscr();
			logg1();
			cout<<endl;
			break;
		}
		case 2:
		{
			clrscr();
			logg2();
			cout<<endl;
			break;
		}
		case 3:
		{
			clrscr();
			menu();
		}
		default:
		{
			cout<<"wrong choice"<<endl;
			cout<<"enter again"<<endl;
			logg0();
		}
	}
}
void cal::con()
{
	clrscr();
	display();
	int n,r,s=0,num,i=0,sum=0,p=0;
	int total[100];
	gotoxy(40,4);
	cout<<"1.binary to decimal:"<<endl;
	gotoxy(40,6);
	cout<<"2.decimal to binary:"<<endl;
	gotoxy(40,8);
	cout<<"3.decimal to octal:"<<endl;
	gotoxy(40,10);
	cout<<"4.decimal to hexadecimal:"<<endl;
	gotoxy(40,12);
	cout<<"5.back to menu:"<<endl;
	gotoxy(40,16);
	cout<<"enter your choice"<<endl;
	gotoxy(58,16);
	cin>>n;
	switch(n)
	{
		case 1:
		{
			clrscr();
			display();
			gotoxy(40,4);
			cout<<"please enter a binary no.:";
			cin>>num;
			while(num>0)
			{
				total[i]= num%10;
				num=num/10;
				i++;
			}
			int size=i;
			for(i=0;i<size/2;i++)
			{
				if((total[i]==0) || (total[i]==1))
				{
					int t=total[i];
					total[i]=total[(size-1)-i];
					total[(size-1)-i]=t;
				}
				else
				{
					cout<<"wrong input";
					break;
				}

			}
			for(i=0;i<size;i++)
			{
				p=pow(2,i);
				sum+=total[i] * p;
			}
			gotoxy(8,8);
			cout<<"the decimal no. is"<<sum;
			gotoxy(40,8);
			cout<<"back to menu (y/n)";
			cin>>g;
			if((g=='y')||(g=='Y'))
			con();
			else
			exit(0);
		}
		case 2:
		{
			clrscr();
			display();
			gotoxy(40,4);
			cout<<"please enter a decimal:";
			cin>>num;
			while(num>0)
			{
				total[i]=num%2;
				num=num/2;
				i++;
			}
			int size=i;
			for(i=0;i<size/2;i++)
			{
				int t=total[i];
				total[i]=total[(size-1)-i];
				total[(size-1)-i]=t;
			}
			gotoxy(7,5);
			cprintf("binary no. is");
			for(i=0;i<size;i++)
			{
				gotoxy(8+i,6);
				cout<<total[i];
			}
			gotoxy(40,8);
			cout<<"back to menu (y/n)";
			cin>>g;
			if((g=='y')||(g=='Y'))
			con();
			else
			exit(0);
		}
		case 3:
		{
			clrscr();
			display();
			gotoxy(40,4);
			cout<<"enter a decimal no. to form octal:";
			cin>>num;
			while(num>0)
			{
			total[i]=num%8;
			num=num/8;
			i++;
			}
			int size=i;
			for(i=0;i<size/2;i++)
			{
				int t=total[i];
				total[i]=total[(size-1)-i];
				total[(size-1)-i]=t;
			}
			gotoxy(7,8);
			cprintf("octal no. is =");
			for(i=0;i<size;i++)
			{
				gotoxy(8+i,8);
				cout<<total[i];
			}
			gotoxy(40,8);
			cout<<"back to menu (y/n)";
			cin>>g;
			if((g=='y')||(g=='Y'))
			con();
			else
			exit(0);
		}
		case 4:
		{
			clrscr();
			display();
			gotoxy(40,4);
			cout<<"enter a decimal no. to get hexadecimal"<<endl;
			cin>>num;
			while(num>0)
			{
				total[i]=num%16;
				num=num/16;
				i++;
			}
			int size=i;
			for(i=0;i<size/2;i++)
			{
				int t=total[i];
				total[i]=total[(size-1)-i];
				total[(size-1)-i]=t;
			}
			for(i=0;i<size;i++)
			{
				if(total[i]==10)
				total[i]='A';
				else if(total[i]==11)
				total[i]='B';
				else if(total[i]==12)
				total[i]='C';
				else if(total[i]==13)
				total[i]='D';
				else if(total[i]==14)
				total[i]='E';
				else if(total[i]==15)
				total[i]='F';
			}
			for(i=0;i<size;i++)
			{
				gotoxy(8+i,8);
				if((total[i]=='A')||(total[i]=='B')||(total[i]=='C')||(total[i]=='D')||(total[i]=='E')||(total[i]=='F'))
				{
					gotoxy(7,8);
				cout<<"result=";
					cout<<char(total[i]);
				}
				else
					cout<<total[i];
			}
			gotoxy(40,8);
			cout<<"back to menu (y/n)";
			cin>>g;
			if((g=='y')||(g=='Y'))
			con();
			else
			exit(0);
		}
		case 5:
		{
			clrscr();
			menu();
		}
		default:
		{
			cout<<"wrong choice"<<endl;
			cout<<"enter again"<<endl;
			con();
		}
	}
}
void cal::power()
{
	clrscr();
	display();
	float A,x,r;
	gotoxy(40,4);
	cout<<"enter the number:";
	cin>>r;
	gotoxy(40,6);
	cout<<"enter the value power:";
	cin>>x;
	A=pow(r,x);
	gotoxy(8,8);
	cout<<"the result is="<<A;
	gotoxy(40,10);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	menu();
	else
	exit(0);
}
void cal::root()
{
	display();
	float q,p,result,i;
	gotoxy(40,4);
	cout<<"enter the value";
	cin>>q;
	gotoxy(40,5);
	cout<<"enter the value of x in the form a^1/x";
	cin>>p;
	i=1/p;
	result=pow(q,i);
	gotoxy(8,5);
	cout<<"result is"<<result;
	gotoxy(40,7);
	cout<<"back to menu (y/n)";
	cin>>g;
	if((g=='y')||(g=='Y'))
	menu();
	else
	exit(0);
}
void cal::display()
{
	clrscr();
	textcolor(YELLOW);
	int d=0;
	for(int i=2;i<=24;i++)
	{
		gotoxy(2,i);
		cprintf("Û");
	}
	for(i=2;i<=24;i++)
	{
		gotoxy(30,i);
		cprintf("Û");
	}
	for(i=3;i<=30;i++)
	{
		gotoxy(i,24);
		cprintf("Û");
	}
	for(i=3;i<=29;i++)
	{
		gotoxy(i,2);
		cprintf("Û");
	}
	for(i=3;i<=30;i++)
	{
		gotoxy(i,7);
		cprintf("Û");
	}
	while(d<1)
	{
		for(i=3;i<=30;i++)
		{
			gotoxy(i,10);
			cprintf("Û");
		}
		textcolor(CYAN);
		gotoxy(3,9);
		cprintf(" 1 ³ 2 ³ 3 ³ + ³ - ³ % ³ =");
		cout<<endl;
		for(i=3;i<=29;i++)
		{
			textcolor(YELLOW);
			gotoxy(i,13);
			cprintf("Û");
		}
		textcolor(CYAN);
		gotoxy(3,12);
		cprintf(" 4 ³ 5 ³ 6 ³ * ³ ö ³ û ³ ^ ");
		cout<<endl;
		for(i=3;i<=29;i++)
		{
			textcolor(YELLOW);
			gotoxy(i,16);
			cprintf("Û");
		}
		textcolor(CYAN);
		gotoxy(3,15);
		cprintf(" 7 ³ 8 ³ 9 ³ 0 ³ . ³ ñ ³ ü ");
		cout<<endl;
		for(i=3;i<=29;i++)
		{
			textcolor(YELLOW);
			gotoxy(i,19);
			cprintf("ÛÛ");
		}
		textcolor(CYAN);
		gotoxy(3,18);
		cprintf(" SIN ³ COS ³ TAN ³ OFF ³ )");
		cout<<endl;
		gotoxy(3,21);
		cprintf(" ABS ³ LOG ³ ON ³( ³ CLEAR ");
		d++;
	}
	for(i=0;i<25;i++)
	{
	textcolor(GREEN);
	gotoxy(35,i);
	cprintf("Û");
	}
}
void cal::fly1()
{
	 for(int i=8;i<15;i++)
	 {
		  gotoxy(30,i);
  cout<<"S";
  delay(20);
  gotoxy(30,i);
  if(i!=14)
  cout<<" ";
 }
 for(i=8;i<15;i++)
 {
  gotoxy(32,i);
  cout<<"C";
  delay(20);
  gotoxy(32,i);
  if(i!=14)
  cout<<" ";
 }
  for(i=8;i<15;i++)
  {
   gotoxy(34,i);
   cout<<"I";
   delay(20);
   gotoxy(34,i);
   if(i!=14)
   cout<<" ";
  }
   for(i=8;i<15;i++)
   {
    gotoxy(36,i);
    cout<<"E";
    delay(20);
    gotoxy(36,i);
    if(i!=14)
    cout<<" ";
   }
   for(i=8;i<15;i++)
   {
    gotoxy(38,i);
    cout<<"N";
    delay(20);
    gotoxy(38,i);
    if(i!=14)
    cout<<" ";
   }
   for(i=8;i<15;i++)
   {
    gotoxy(40,i);
    cout<<"T";
    delay(20);
    gotoxy(40,i);
    if(i!=14)
    cout<<" ";
   }
   for(i=8;i<15;i++)
   {
    gotoxy(42,i);
    cout<<"I";
    delay(20);
    gotoxy(42,i);
    if(i!=14)
    cout<<" ";
   }
   for(i=8;i<15;i++)
   {
    gotoxy(44,i);
    cout<<"F";
    delay(20);
    gotoxy(44,i);
    if(i!=14)
    cout<<" ";
   }
   for(i=8;i<15;i++)
   {
    gotoxy(46,i);
    cout<<"I";
    delay(20);
    gotoxy(46,i);
    if(i!=14)
    cout<<" ";
   }
   for(i=8;i<15;i++)
   {
    gotoxy(48,i);
    cout<<"C";
    delay(20);
    gotoxy(48,i);
    if(i!=14)
    cout<<" ";
   }
   for(i=23;i>15;i--)
   {
    gotoxy(30,i);
    cout<<"C";
    delay(20);
    gotoxy(30,i);
    if(i!=16)
    cout<<" ";
   }
   for(i=23;i>15;i--)
   {
    gotoxy(32,i);
    cout<<"A";
    delay(20);
    gotoxy(32,i);
    if(i!=16)
    cout<<" ";
   }
   for(i=23;i>15;i--)
   {
    gotoxy(34,i);
    cout<<"L";
    delay(20);
    gotoxy(34,i);
    if(i!=16)
    cout<<" ";
   }
   for(i=23;i>15;i--)
   {
    gotoxy(36,i);
    cout<<"C";
    delay(20);
    gotoxy(36,i);
    if(i!=16)
    cout<<" ";
   }
   for(i=23;i>15;i--)
   {
    gotoxy(38,i);
    cout<<"U";
    delay(20);
    gotoxy(38,i);
    if(i!=16)
    cout<<" ";
   }
   for(i=23;i>15;i--)
   {
    gotoxy(40,i);
    cout<<"L";
    delay(20);
    gotoxy(40,i);
    if(i!=16)
    cout<<" ";

   }
   for(i=23;i>15;i--)
   {
    gotoxy(42,i);
    cout<<"A";
    delay(20);
    gotoxy(42,i);
    if(i!=16)
    cout<<" ";
    }
    for(i=23;i>15;i--)
   {
    gotoxy(44,i);
    cout<<"T";
    delay(20);
    gotoxy(44,i);
    if(i!=16)
    cout<<" ";
    }
    for(i=23;i>15;i--)
   {
    gotoxy(46,i);
    cout<<"O";
    delay(20);
    gotoxy(46,i);
    if(i!=16)
    cout<<" ";
}
 for(i=23;i>15;i--)
   {
    gotoxy(48,i);
    cout<<"R";
    delay(20);
    gotoxy(48,i);
    if(i!=16)
    cout<<" ";
    }
}
void main()
{
	clrscr();
	s.front();
	//s.display();
	getch();
}
