#include <stdio.h>

#define LOWER 10 /* 符号常量，全局变量 */

int main (void) {
	/*C语言中所有变量都必须先声明后使用  int--整数 float--浮点数 对于int型，通常为16位，取值范围-32768~32767 float类型通常为32位，至少有6位有效数字，取值范围一般在10^(-38)~10^(38)之间 ，char--字符，一个字节，short--短整型	long--长整形	double--双精度浮点型
	printf 通用输出格式化函数,
	%d    按照十进制整型数打印
	%6d	  按照十进制整型数打印，至少6个字符宽
	%f	  按照浮点数打印
	%6f	  按照浮点数打印，至少6个字符宽
	%.2f  按照浮点数打印，小数点后有两位小数
	%6.2f 按照浮点数打印，至少6个字符宽，小数点后两位小数in h
	*/
	int fahr,celsius;
	int lower,upper,step;
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf ("华氏温度----摄氏温度 对照表I\n");
	while (fahr <= upper) {
		celsius = 5 * (fahr-32)/9;
		printf ("%d\t%d\n",fahr,celsius);/* 制表符\t */
		fahr = fahr + step;
	}
	printf("华氏温度----摄氏温度 对照表II\n");
	float fa,ce;
	float lo=0.0,up=300.0,st=20.0;
	fa = lo;
	while (fa <= up){
		ce = 5.0 * (fa-32)/9.0;
		printf ("%.2f\t%.2f\n",fa,ce);
		fa = fa + st;
	}
	/*当fahr=0，20，...300时，分别打印华氏温度与摄氏温度对照表  */
	printf ("hello world\n hello world2\n \t\b\n");
	return 0;
}

