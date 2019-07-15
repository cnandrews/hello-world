#include<stdio.h>
#include<math.h>
int main()
{
	FILE *fp = NULL;
	fp = fopen("/home/robin/myc/test6.txt", "w+");
	int flag=1;int i;int j;
	int r[2]={2,3};
	fwrite(r,sizeof(int),2,fp);
	for(i=5;i<=1000000000;i=i+2){
        	int s=sqrt(i);
		for(j=3;j<=s;j=j+2){
			if(i%j==0) flag=0;
		}
		if(flag==1) {
		//	if(i%1000==0) printf ("%d:%d\n",a,i);
		 	//printf( "%d\n",i);
			r[0]=i;
			fwrite(r,4,1,fp);
		}
		flag=flag||1;
        }
	fclose(fp);
	return 0;
}
