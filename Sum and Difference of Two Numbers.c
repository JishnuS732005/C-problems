#  https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int int1,int2;
    float float1,float2;
    scanf("%d %d",&int1,&int2);
    scanf("%f %f",&float1,&float2);
    int int_sum=int1+int2;
    int int_diff=int1-int2;
    float float_sum=float1+float2;
    float float_diff=float1-float2;
    printf("%d %d\n",int_sum,int_diff);
    printf("%.1f %.1f\n",float_sum,float_diff);
    
    return 0;
}
