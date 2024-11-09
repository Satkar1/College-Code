/*
Name:- Garje Satkar Devidas
Class:- TY-BTech-Computer , Div:- A
Roll No. :- 21
Assignment No 4
*/
#include<iostream>
using namespace std ;

void sort(double k[],int p[], int w[],int n)
{
    for(int i = 0; i < n; i++ ){
        for(int j = i+1; j < n; j++){
            if (k[i] < k[j]){
                swap(k[i],k[j]);
                swap(p[i],p[j]);
                swap(w[i],w[j]);
            }
        }
    }
}
int main ()
{
    int n;
    cout <<"Enter the number of objects : ";
    cin >> n;
    int p[n],w[n],m;
    cout <<"Enter the knapsack size : ";
    cin >> m;
    cout <<"Enter the array of Profit : ";
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    cout <<"Enter the array of Weights : ";
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }
    double k[n];
    for(int i = 0; i < n; i++){
        k[i]=1.0 * p[i] / w[i];
    }

    cout <<"calculating the pi/wi:\n\n";
    cout <<"object\tProfit\tweight\tpi/wi\n";
    for(int i = 0; i < n; i++){
        cout << i << "\t" << p[i] << "\t" << w[i] << "\t" << k[i] << endl;
    }
    
    cout <<"\n\nArranging in decerasing order of pi/wi:\n\n";
    sort(k, p, w, n);
    cout << "object\tprofit\tweight\tpi/wi\n";
    for(int i = 0; i < n; i++){
       cout << i << "\t" << p[i] << "\t" << w[i] << "\t" << k[i] << endl;
    }

    double x[n]={0};
    double totalProfit = 0 ;
    cout <<"\n\nCalculating the total profit:\n\n";
    cout <<"object\tpi\twi\txi\twixi\tpixi\n";

    int i = 0;
    for(i = 0; i < n; i++){
        if(w[i] > m){
            break;
        }
        x[i] = 1;
        m = m - w[i];
        totalProfit += p[i];
        cout << i << "\t" << p[i] << "\t" << w[i] << "\t" << x[i] <<
"\t" << w[i] << "\t" <<p[i] * x[i] << endl;
    }

    if(i < n){
        x[i] = (double)m / w[i];
        totalProfit += p[i] * x[i];
        cout << i << "\t" << p[i] << "\t" << w[i] << "\t" << x[i] <<
"\t" << w[i] * x[i] << "\t" <<p[i] * x[i] << endl;
    }
    cout << "\nTotal Profit: "<< totalProfit << endl;

    return 0 ;
}


//Output 
/*
Enter the number of objects : 3
Enter the knapsack size : 10
Enter the array of Profit : 40
10
20
Enter the array of Weights : 2
5
15
calculating the pi/wi:

object  Profit  weight  pi/wi
0       40      2       20
1       10      5       2
2       20      15      1.33333


Arranging in decerasing order of pi/wi:

object  profit  weight  pi/wi
0       40      2       20
1       10      5       2
2       20      15      1.33333


Calculating the total profit:

object  pi      wi      xi      wixi    pixi
0       40      2       1       2       40
1       10      5       1       5       10
2       20      15      0.2     3       4

Total Profit: 54
*/