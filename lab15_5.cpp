#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int * a1,int * b1,int * c1,int * d1){
	
	int *d[4] = {a1,b1,c1,d1};
	
	int x,y ;
	int pos;
	int size = sizeof(d) / sizeof(d[0]);
	
	for (int i = 0; i < size; i++)
	{
		x = rand()%4;
		y = rand()%4;
		pos = *d[x];
		*d[x] = *d[y];
		*d[y] = pos;
	}
	
	a1 = d[0];
	b1 = d[1];
	c1 = d[2];
	d1 = d[3];
	
	
	
}
