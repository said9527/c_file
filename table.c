#include <stdio.h>
#include <stdbool.h>

//函数将传递一个月份，返回一个月份有多少天的结果
#define MONTH_COUNT 12

int get_days_in_month(int month, int year);
bool is_leap_year(int year);

int main() {
    //表驱动法
    //使用数据结构或数组来替代复杂的逻辑语句

    //核心思想：许多程序行为可以通过查表来确定，而不是通过复杂的条件语句

    //1.识别：确定程序中可以用查表替代的逻辑部分
    //2.设计：创建包含所有可能的输入以及对应输出的表
    //3.实现：编写代码，使用输入作为索引或者键来查找表中相应输出
    //4.优化：根据需要调整表的结构以提高效率或者可读性

    printf("%d月有%d天", 2, get_days_in_month(2, 2024));

    return 0;
}

int get_days_in_month(int month, int year) {
    const int days_in_month[MONTH_COUNT] = {31, is_leap_year(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return days_in_month[month - 1];
}

bool is_leap_year(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}