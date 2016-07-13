#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char S[52]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
              'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char ans[52];

int M,N;

void dfs(int cur,int level){
    int i,next;
    for(i=cur+1;i<M;i++){
        next=i;
        if(level<N){
            ans[level-1]=S[cur];
            ans[level]=S[next];
            if(level==N-1){
                ans[N]='\0';
                printf("%s\n",ans);
            }
            dfs(i,level+1);
        }

    }

}

int main(){
    int T,i,j,k;
    for(i=0;i<25;i++){
        ans[i]=' ';
    }
    scanf("%d",&T);
    for(i=0;i<T;i++){
        //printf("case %d\n",i+1);
        scanf("%d %d",&M,&N);
        if(N==1){
            for(j=0;j<M;j++){
                printf("%c\n",S[j]);
            }
        }else{
            for(j=0;j<M;j++){
                dfs(j,1);
                for(k=0;k<52;k++){
                    ans[k]=' ';
                }
            }
        }
        printf("\n");
    }

return 0;
}
