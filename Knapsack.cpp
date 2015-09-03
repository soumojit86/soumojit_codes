// knapsack problem using dynamic programming

#include<iostream>
#include<conio.h>
using namespace std;
class knapsack

{
  int w[20],v[20],d[10][10],n,c,i,j;

 public:
void input( );
void knap( );
int max(int,int);

void output( );
};

void knapsack::input()

{

cout<<"\n\t Knapsack using Dynamic programming";

cout<<"\nHow many items u need:";

cin>>n;

cout<<"\nEnter the capacity";

cin>>c;

cout<<"\nEnter "<<n<<"items:";

for(i=1;i<=n;i++)

{

cout<<"\nEnter the "<<i<<"Weight:";

cin>>w[i];

cout<<"\nEnter the "<<i<<" values";

cin>>v[i];

}

}

void knapsack::knap()

{

for(i=0;i<=n;i++)

d[i][0]=0;

for(j=1;j<=c;j++)

d[0][j]=0;

 

for(i=1;i<=n;i++)

{

for(j=1;j<=c;j++)

{

if((j-w[i])<0)

d[i][j]=d[i-1][j];

else

{

d[i][j]=max(d[i-1][j],v[i]+(d[i-1][j-w[i]]));

}

}

}

}

void knapsack::output()

{

cout<<"Highest value computation for"<< n <<" items:"<<endl;

for(i=0;i<=n;i++)

{

for(j=0;j<=c;j++)

{

 

cout<<"\t"<<d[i][j];

}

cout<<endl;

}

}

 

int knapsack::max(int a,int b)

{

if(a>b)

return a;

else

return b;

}

 

int main(void)

{

//clrscr();

knapsack k;

k.input();

k.knap();

k.output();

getch();
return(0);

}
