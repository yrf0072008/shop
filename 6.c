//例6：输入两个实数，按代数值由小到大的顺序输出这两个数
#include<stdio.h>//头文件 
int main() //主函数 
{
	float num1,num2;//定义浮点型变量 
	printf("请输入输入2个实数："); 
	scanf("%f，%f",&num1,&num2);//键盘输入输入两个数，注意两个%f之间的逗号 
	float temp; //定义中间变量 
	if(num1>num2) //判断条件，如果num1大于num2，就交换数值 
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	printf("%.2f,%.2f\n",num1,num2);//输出.2的意思是，保留到小数点后两位 
	return 0;
}

