//1.输入输出流和基本变量
//C++提供了标准的输入和输出流功能，包含了头文件<iostream>就能使用cin和cout
//<<和>>
//<<与cout配套，会从缓存中读取数据写入cout并返回cout，最后用endl将cout缓存中的数据输出到终端
//>>与cin配套，负责获取输入写入缓存并返回cin对象


//变量类型
#include<iostream>
int main() {
	std::cout << sizeof(int) << std::endl;//4
	std::cout << sizeof(long) << std::endl;//4
	std::cout << sizeof(long long) << std::endl;//8
	std::cout << sizeof(signed char) << std::endl;//1
	std::cout << sizeof(unsigned char) << std::endl;//1
	std::cout << sizeof(short) << std::endl;//2
	std::cout << sizeof(float) << std::endl;//4
	std::cout << sizeof(double) << std::endl;//8
	std::cout << sizeof(bool) << std::endl;//1


	return 0;
}


//类型转换
//当我们把一个非bool类型的算术值赋值给bool类型时，初始值为0为false，非零则为true
//反之把bool类型赋值给非bool类型时初始值为false则为0，true则为1

//浮点型->整型：仅保留浮点型的整数部分
//整型->浮点型：小数部分记为0，如果该整数所占空间超过了浮点类型的容量则精度可能损失
//超出其表示范围的值->unsigned char:结果是初始值对无符号类型表示数值总数取模后的余数
// 例如，8byte大小的unsigned char可以表示0-255区间的值，如果所赋的值>=256，则输出结果是该值对256取模后所得的余数
// 超出其表示范围的值->signed char:结果是undefined，此时程序可能正常工作也可能崩溃，也可能产生一个垃圾值
//