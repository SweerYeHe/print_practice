# include <stdio.h>


//函数原型   声明
void print_name_adress(void);
void print_name_adress(void);

void main(void)
{
	print_name();//调用函数
	print_name_adress();
	return 0;
}

///打印姓名
void print_name(void)
{
	printf("SweerYeHe\n");
	printf("Sweer\n");
	printf("YeHe\n");
	printf("SweerYeHe\n");
}

///打印姓名和地址
void print_name_adress(void)//函数定义
{
	printf("Name:SweerYeHe\n");
	printf("Adress:ShenYang\n");
}
