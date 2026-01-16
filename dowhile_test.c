#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

//应用在先显示再根据情况（如用户输入的数据）情景下

int main(void)
{
    uint32_t choice = 0;

    do
    {
        puts("***游戏主菜单***");
        puts("新游戏");
        puts("存档");
        puts("退出游戏");

        scanf("%"PRIu32, &choice);

        switch (choice)
        {
        case 1:
            puts("开始新游戏...");
            puts("游戏已完成，返回主菜单");
            break;
        case 2:
            puts("存档中...");
            puts("存档完成，返回主菜单");
            break;
        case 3:
            puts("退出游戏，欢迎下次再来！");
            break;
        default:
            puts("无效选择，请重新输入");
            break;
        }
    } while (choice != 3);

    return 0;
    
}