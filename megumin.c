//强制转换
//正好相反！取值范围大的，赋值给小的（此时不能直接赋值）
#include<stdio.h>

int main()
{
    
    int b = 10;
    short i = (short)b;//也就是去掉了前面两个字节
    short f = 30;
    int c = 65536;
    short e = (short)c;
    /*
    注意啊，数据在存储时是二进制，
    故此时short刚好容不下这个数了，会输出0
    0000 0000 0000 0001 0000 0000 0000 0000
    前面四组0全没了!
    */
    short r = (short)(i + f);
    printf("%d\n",e);
    
    printf("r = %d\n",r);
    printf("(short)(i + f) = %Iu\n",sizeof(r));
    //%u不是很严谨的情况下，可以替代一下%Iu,%zu,
    //因为在本机，他们的字节数(4)是一样的，而且都是无符号整数
    return 0;
}