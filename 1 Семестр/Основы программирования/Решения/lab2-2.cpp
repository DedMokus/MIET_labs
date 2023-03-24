#include <iostream>
#include <time.h>
#include <io.h>
#include <fcntl.h>
#include <algorithm>

using namespace std;
int main()
{
setlocale(LC_ALL,"Russian");

const int N=100;
int dig[N],col=10,max,colvo = 0,nuli = 0;
int i;
char s;
srand (time(0));
int verh[30] = {1,2,3,4,5,6,7,8,9,10,12,13,14,15,16,17,18,19,23,24,25,26,27,28,34,35,36,37,45,46};
int nizz[30] = {55,56,64,65,66,67,73,74,75,76,77,78,82,83,84,85,86,87,88,89,91,92,93,94,95,96,97,98,99,100};
int n = sizeof(verh) / sizeof(*verh);
cout<<"¬ычисление количества нулей и в в.о. и положительных чисел в н.о.\n";
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
        bool result =  find(verh,verh+n,i+1);
        if (result && dig[i] == 0)
	    {
	        nuli = nuli + 1;
	        printf("%d\n",i+1);
	        printf("%d\n", result);
        }
        if (dig[i] % 2 != 0 && dig[i] < 0)
        {
            colvo = colvo + 1;
        }
}
printf("\nmax=%d\n",max);
printf("\ncolvo=%d\n",colvo);
printf("\nnuli=%d\n",nuli);
cout<<"ѕродолжить или закончить? (y/n) : \n";
cin>>s;
cout<<"======================================="<<endl;
} while (s=='y');
system ("pause");
return 0;
}
