//#include<stdio.h>
//int main()
//{
// int a,b;
// scanf("%d%d",&a,&b);
// printf("addition=%d",a+b);
// scanf("%d%d",&a,&b);
// printf("subtraction=%d",a-b);
// scanf("%d%d",&a,&b);
// printf("addition=%d",a+b);
// scanf("%d%d",&a,&b);
// printf("subtraction=%d",a-b);
//printf("hello");
//scanf("%d%d",&a,&b);
//printf("addition=%d",a+b);
//scanf("%d%d",&a,&b);
// printf("subtraction=%d",a-b);
// return 0;
//}

#include<stdio.h>
int subtract(int a,int b){
    printf("%d",a-b);
}
int main(){
    int a,b;scanf("%d%d",&a,&b);
    subtract(a,b);
}
