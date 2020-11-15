#include <stdio.h>
int change(char c)
{
    if(c=='B')
    return 0;
    if(c=='C')
    return 1;
    if(c=='J')
    return 2;
}
int main(void)
{
    int n;
    char c1,c2;//读取输入的字符
    int ac1,ac2;//字符转换为数字以后的结果
    int w1=0,p1=0,l1=0,w2=0,p2=0,l2=0;//记录甲乙输赢平的次数
    int h1[3]={0,0,0},h2[3]={0,0,0};//记录甲乙出拳的次数
    char mp[3]={'B','C','J'} ;
    int id1=0,id2=0;
    scanf("%d",&n);
   for(int i=0;i<n;i++) 
   {
       getchar();
        scanf("%c %c",&c1,&c2);
        ac1=change(c1);
        ac2=change(c2);
        if((ac1+1)%3==ac2)
        {
            w1++;
            l2++;
            h1[ac1]++;
        }
        else if(ac1==ac2)
        {
            p1++;
            p2++;
        }
        if((ac2+1)%3==ac1)
        {
            w2++;
            l1++;
            h2[ac2]++;
        }
   }
   printf("%d %d %d\n",w1,p1,l1);
   printf("%d %d %d\n",w2,p2,l2);
   for(int i=0;i<3;i++)
   {
       if(h1[i]>h1[id1]) id1=i;
       if(h2[i]>h2[id1]) id2=i;
   }
   printf("%c %c",mp[id1],mp[id2]);
  

}
