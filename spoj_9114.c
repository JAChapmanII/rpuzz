#include <stdio.h>
main(c,v){long p,z,s,a,b,m,n,f;scanf("%ld",&z);for(p=0;p<z;p++){a=b=c=0;while((c=getchar())!=' ')(c==97)?a++:(c==98)?b++:0;scanf("%ld",&s);m=n=c=1;while(c<s+1)f=m+n,n=m,m=f,c++;printf("%ld\n",a*n+b*m);}}
