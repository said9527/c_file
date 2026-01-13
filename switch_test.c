#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

/*
    简单的权限访问
    经理可以直接访问
    普通职工完成5个任务可以访问
    实习生完成5个任务并得到经理批准可以访问
*/

bool checkAccessForManager() {
    return true;
}
bool checkAccessForStaff(uint16_t completedTasks) {
    // if (completedTasks > 5) {
    //     return true;
    // } else {
    //     return false;
    // }
    //犯了个错误，可以直接简化的
    return completedTasks >= 5;
}
bool checkAccessForIntern(uint16_t completedTasks, bool isManagerApproved) {
    // if (completedTasks >= 10 && isManagerApproved == true) {
    //     return true;
    // } else {
    //      return false;
    // }

    return completedTasks >= 10 && isManagerApproved == true;
}

int main(void)
{   
    //1是经理，2是普通职工，3是实习生
    uint16_t role = 3; 
    uint16_t completedTasks = 10;
    bool accessAllowed = false;
    bool isManagerApproved = false;

    switch (role) {
    case 1:
        accessAllowed = checkAccessForManager();
        break;
    case 2:
        accessAllowed = checkAccessForStaff(completedTasks);
        break;
    case 3:
        accessAllowed = checkAccessForIntern(completedTasks, isManagerApproved);
        break;
    default:
        accessAllowed = false;
    }

    if (accessAllowed) {
        puts("允许访问");
    } else {
        puts("禁止访问");
    }

    return 0;
}