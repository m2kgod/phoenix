#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<string>
using namespace std;
void banner(),table(),squares(),height(),prime(); //prototype
void strings(),interest(),palindrome(),fibo(),fact();//prototype
void area(),add(),subtract(),product(),divi(); //prototype
int main()
{
    int i,re;
    char cho,ch,name[20],school[50];
    
    banner();
    cout<<"Welcome to the world of calculation ! Please enter your name to continue \n";
    cin.getline(name,20);
    cout<<"Hi ! "<< name <<",are you studying in school(y/n)";
    cin>>ch;
    if(ch=='y')
    {
        cout<<"Enter your school name :";
        cin>>school;
    }
    else
    {
        exit(0);
    }
    do
    {           
    cout<<" \n \n Now you are in the ph0en1x lab \n \n";
    cout<<"1.Multiplication table of a number \n \n";
    cout<<"2.sum of squares \n\n";
    cout<<"3.Checking the length of a string \n\n";
    cout<<"4.Find average Height of 10 items or students \n\n";
    cout<<"5.Find the simple interest \n\n";
    cout<<"6.Check palindrome or not \n\n";
    cout<<"7.To check weather a number is prime or not \n\n";
    cout<<"8.Fibonacci series \n\n";
    cout<<"9.Area of a rectangle ,circle, and a triangle \n\n";
    cout<<"10.Addition \n\n";
    cout<<"11.Subtraction \n\n";
    cout<<"12.Multiplication \n\n";
    cout<<"13.Division \n\n";
    cout<<"14.Finding factorial of a number \n\n";
    cout<<"15.Exit \n\n ";
    cout<<"Choose an option : \n\n";
    cin>>re;
    if(re==1)
    {
         table();
    }
    else if(re==2)
    {
        squares();
    }
    else if(re==3)
    {
        strings();
    }
    else if(re==4)
    {
        height();
    }
    else if(re==5)
    {
        interest();
    }
    else if(re==6)
    {
        palindrome();
    }
    else if (re==7)
    {
        prime();
    }
    else if(re==8)
    {
        fibo();
    }
    else if(re==9)
    {
        area();
    }
    else if(re==10)
    {
        add();
    }
    else if(re==11)
    {
        subtract();
    }
    else if(re==12)
    {
        product();
    }
    else if(re==13)
    {
        divi();
    }
    else if(re==14)
    {
        fact();
    }
    else
    {
        cout<<"\n Invalid option"<<endl;
        exit(0);
    }
    cout<<"\n Do you want to start the program again(y/n)\n";
    cin>>cho;
    
    } while (cho=='y');
    return 0;
}
void table()
{
    int num,i;
    cout<<"enter an integer for which table is to be created :";
    cin>>num;
    cout<<"\n\n Multiplication table of"<<num<<"\n";
    for(i=1;i<=10;i++)
    
    cout<<"\n"<<num<<"x"<<i<<"="<<i*num<<"\n";
}
void squares()
{
    int num,i,sum;
    cout<<"Enter an integer :";
    cin>>num;
    sum=0;
    for(i=1;i<=num;i++)
    sum=sum+i*i;
    cout<<"sum of the squares of first "<<num<<"numbers is "<<sum<<endl;
}
void strings()
{
    string str;
    int t=0,i;
    cout << "\n Enter a string : ";
    getline(cin, str);
    for(i=0; str[i]!='\0'; i++ )
    {
        if(str[i]==' ')
        t++;
    }
    cout << "total number of words : " << t << endl;
}
void height()
{
    int height[11],i,sum;
    float avg;
    sum=0;
    for(i=0;i<10;i++)
    {
        cout<<endl<<"Enter the height :";
        cin>>height[i];
        sum=sum+height[i]; 
    }
    avg=sum/100;
    cout<<"\n average height :"<<avg;

}

void interest()
{
    int p,n,ac;
    float i,rate;
    cout<<"Enter the principle amount : ";
    cin>>p;
    cout<<"\n Enter the number of years :";
    cin>>n;
    cout<<"\n Enter the type of account :\n 1. Current account \n 2. savings account \n";
    cin>>ac;
    switch(ac)
    {
        case 1 :
        rate = 8.5;
        break;
        case 2 :
        rate = 6.5;
        break;
        default:
        {
            cout<<"\n Invalid input \n";

        }    
    }
    i=p*n*rate/100;
    cout<<"\n Your interest is : "<<i<<endl;
}
void palindrome()
{
    char str[20];
    int i,l=0,j=0,f=0;
    cout<<"\n Enter the string";
    cin.getline(str,20);
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
        
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        if (str[i]!=str[j])
        {
            f==1;
            break;
        }
        
    }
    if(f==0)
    cout<<"The string is palindrome";
    else
    {
        cout<<"The string is not palindrome";
    }
}
void prime()
{
    int n,i,flag;
    flag=0;
    cout<<"\n Enter a number :";
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"\n The number is not a prime";
    }
    else
    {
        cout<<"\n The number is a prime number";
    }
    
}
void fibo()
{
    int f,s,c,i,n;
    cout<<"\n Enter the number of terms to be displayed :";
    cin>>n;
    f=0;
    s=1;
    c=f;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<c;
        f=s;
        s=c;
        c=f+s;
    }
    cout<<endl;
}

void banner()
{
    string str;
    fstream file("phoenix.txt",ios::in);
    while(getline(file,str))
    {
        cout<< str << endl;

    }
    file.close();
}

void area()
{
    int ch,i,w,area,r,b,h;
    cout<<endl<<"1.Area of a rectangle"<<endl;
    cout<<endl<<"2.Area of a circle"<<endl;
    cout<<endl<<"3.Area of a triangle"<<endl;
    cout<<endl<<"4.None of the above"<<endl;
    cout<<endl<<"Enter your choice"<<endl;
    cin>>ch;
    switch (ch)
    {
    case 1:
    {
        cout<<"Enter the length and breadth respectively"<<endl;
        cout<<endl<<"Length :";
        cin>>i;
        cout<<endl<<"Breadth :";
        cin>>w;
        area=i*w;
        cout<<endl<<"Area of rectangle = "<<area<<"cm^2";
    }
    break;
    case 2 :
    {
        cout<<endl<<"Enter the radius :";
        cin>>r;
        area=3.14*r*r;
        cout<<endl<<"area of circle is :"<<area;;
    }
    break;
    case 3 :
    {
        cout<<"Enter the base and height respectively "<<endl;
        cout<<endl<<"Base :";
        cin>>b;
        cout<<endl<<"Height :";
        cin>>h;
        area=0.5*b*h;
        cout<<endl<<"Area of triangle ="<<area;
    }
    break;
    default:
    {
        cout<<endl<<"Invalid input !!";
        exit(0);
    }
        break;
    }

}

void add()
{
    float a,b,sum;
    cout<<" Enter two numbers :";
    cin>>a>>b;
    sum=a+b;
    cout<<"Sum ="<<a<<"+"<<b<<sum;
}
void subtract()
{
    float a,b,answer;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    answer=a-b;
    cout<<"Difference ="<<a<<"-"<<b<<"="<<answer;
}
void product()
{
    float a,b,pro;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    pro=a*b;
    cout<<"Product ="<<a<<" x "<<b<<"="<<pro;
}
void divi()
{
    float a,b,quo;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    quo=a/b;
    cout<<"Quotient ="<<a<<" / "<<b<<"="<<quo;

}
void fact()
{
    int i,fact=1,number;    
    cout<<"Enter any Number: ";    
    cin>>number;    
    for(i=1;i<=number;i++)
    {    
      fact=fact*i;    
    }    
    cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
}
