#include <iostream>
using namespace std;

struct pos{
   int x;
   int y;
};

pos p[3];
int dist(int i,int j){
	return (p[i].x-p[j].x)*(p[i].x-p[j].x) + (p[i].y-p[j].y)*(p[i].y-p[j].y); 
}
int main(int argc, char** argv) {
	
	int i;
	pos temp;
	
   while(scanf("%d %d",&(p[0].x),&(p[0].y))!=EOF){
	  for(i=1;i<3;i++)
		scanf("%d %d",&(p[i].x),&(p[i].y));
      if(dist(1,0) == dist(1,2))
         swap(p[0],p[1]);
	  else if (dist(2,0) == dist(2,1))
	     swap(p[0],p[2]);
	  printf("%d %d\n",p[1].x+p[2].x-p[0].x,p[1].y+p[2].y-p[0].y);
    }
	return 0;
}