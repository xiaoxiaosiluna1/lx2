#include <stdio.h>  
    char arr[1024];
    int index = 0;
    int isMingan(char x)
    {
    int count=0;
    for(int i=0;i<index;i++)
    {
        if(x==arr[i])
        {
            count++;
        }
    }
    if(count==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
    int main()
    {
        printf("jinruminganzifuguanlixitong\n");
        while(1)
        {
            printf("1---tianjiminganzifu\n");
            printf("2---shanchuzuihouyigeminganzifu\n");
            printf("3---xianshisuoyouminganzifu\n");
            printf("4---tihuansuoyouminganzifu\n");
            printf("5---tuichu\n");
            printf("qingshuruxiangduiyingdegongneng:\n");
            int code;
            scanf("%d",&code);
            if(code ==1)
            {
                printf("tianjiayigeminganzifu\n");
                char m;
                scanf("%c",&m);
                scanf("%c",&m);
                arr[index]=m;
                index++;
                printf("tianjiachenggong,dianjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
        
        if(code ==2)
            {
                printf("shanchuyigeminganzifu\n");
                index--;
                printf("shanchuchenggong,dianjihuichejixu\n");
                char x;
                scanf("%c",&x);
                scanf("%c",&x);
            }
            if (code == 3)
            {
                printf("xiansgusuoyouyijingtianjiademinganzifu\n");

            for (int i = 0; i < index; i++)
            {
                printf("%c\n", arr[i]);
            }
                printf("dianjihuichejixu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
        }
         if (code == 4)
        {
            printf("qingshuruyiduanyingwen\n");
            char neirong[2000];
            scanf("%s", neirong);
            for (int i = 0; 1; i++)
            {
                if (neirong[i] == '\0')
                {
                 break;
                }
                if (isMingan(neirong[i]) == 1)
                {
                    neirong[i] = '*';
                }
                printf("%c", neirong[i]);
            }
            printf("\n");

            printf("tihuanwancheng,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            printf("tuichuguanlixitong");
            break;
        }
        }
        
     return 0;

    }