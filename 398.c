#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *compress(char *src);
int main()
{
	char src[100];
	scanf("%s",src);

	char *ps = compress(src);
	
	puts(ps);
	return 0;
}

char *compress(char *src){
    // 逻辑还能优化
    // 数字那块写的尤其答辩
    static char out[100];
    int n = strlen(src);

    char a = src[0];
    int count=1;
    int outlen=0;

    for (int i=1; i<n; i++){
        if (src[i]==a){
            count++;
        } else {
            if (count<3){
                for (int j = 0; j<count; j++){
                    out[outlen+j] = a;
                }
                outlen+=count;
            } else if (count>=3){
                out[outlen]=a;
                outlen++;
                
                char tmp[4];
                sprintf(tmp, "%d", count);
                int len = strlen(tmp);
                for (int i=0; i<len; i++){
                    out[outlen+i]=tmp[i];
                }
                outlen+=len;
            }
            a=src[i];
            count=1;
        }
    }

    if (count<3){
        for (int j = 0; j<count; j++){
            out[outlen+j] = a;
        }
        outlen+=count;
    } else if (count>=3){
        out[outlen]=a;
        outlen++;
    
        char tmp[4];
        sprintf(tmp, "%d", count);
        int len = strlen(tmp);
        for (int i=0; i<len; i++){
            out[outlen+i]=tmp[i];
        }
        outlen+=len;
    }
    out[outlen]='\0';
    return out;
}