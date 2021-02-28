//Sorry about the incomplete code. Ran into deadline. Please consider
#include <conio.h>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    FILE *fp, *ft;
    char another, choice;
    struct student
    {
        char first_name[50], last_name[50];
        char course[100];
        int section;
    };
    
    struct student e;
    char xfirst_name[50], xlast_name[50];
    long int recsize;
    fp=fopen("users.txt", "rb+");
    if (fp=NULL)
    {
        fp=fopen("users.txt", "wb+");
        {
            puts("Cannot open file");
            return 0;
        }
        
    }
    recsize=sizeof(e);
    while (1)
    {
        system("cls");
        cout<<"\nAdd\nExit\n\n Select your choice:";
        fflush(stdin);
        choice=getche();
         switch(choice)
        {
            case 1:
                fseek(fp, o, SEEK_END);
                another='Y';
                while(another=='Y'\\another=='Y')
                {
                    system("cls");
                    cout<<"First name: ";
                    cin>>e.first_name;
                    cout<<"Last name: ";
                    cin>>e.last_name;
                    cout<<"Course: ";
                    cin>>e.course;
                    cout<<"Section: ";
                    cin>>e.section;
                    fwrite(&e, recsize, 1, fp);
                    cout<<"Add another record: ";
                    fflush(stdin);
                    another=getchar()
                }
                break;
            case 2:
                system ("cls");
                another='Y';
                while(another=='Y'\\another=='Y')
                {
                    system("cls");
                    cout<<"First name: ";
                    cin>>e.first_name;
                    cout<<"Enter Last name: ";
                    cin>>x.last_name;
                    cout<<"Course: ";
                    cin>>e.course;
                    cout<<"Section: ";
                    cin>>e.section;
                    fwrite(&e, recsize, 1, fp);
                    cout<<"Add another record: ";
                    fflush(stdin);
                    another=getchar()
                }
                break;
        }
    }

    return 0;
}
