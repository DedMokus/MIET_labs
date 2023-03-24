#include <iostream>
#include <time.h>
#include <io.h>
#include <fcntl.h>

using namespace std;
int main()
{
setlocale(LC_ALL,"Russian");

const int N=30;
int dig[N],col=5,max,colvo = 0;
int i;
char s;
srand (time(0));
cout<<"Вычисление максимального элемента массива\n";
do
{
// заполнение массива с помощью датчика случайных чисел
for (i=0; i<N; i++)    dig[i]=rand()%100 - 50;
// печать массива в col колонок
for (i=0; i<N; i++)
{
    cout<<dig[i];
    if ((i + 1) % col)
	    cout << "\t";
    else
	    cout << "\n";
}
// поиск максимума
max=dig[0];
for (i=0; i<N; i++)
{
        if (dig[i] > max && dig[i] % 2 == 0)
	    {
	        max = dig[i];
        }
        if (dig[i] % 2 != 0 && dig[i] < 0)
        {
            colvo = colvo + 1;
        }
}
printf("\nmax=%d\n",max);
printf("\ncolvo=%d\n",colvo);
cout<<"Продолжить или закончить? (y/n) : \n";
cin>>s;
cout<<"======================================="<<endl;
} while (s=='y');
system ("pause");
return 0;
}
