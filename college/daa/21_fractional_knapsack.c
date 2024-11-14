#include<stdio.h>
struct fk{
    float r;
    int p,wt;
}data[20];


int main(){
    int i, size = 5, j, temp, t_wt=10,curr_wt=0,need=10;
    float total_profit=0;
    int w[10] = {3, 3, 2, 5, 1};
    int p[10] = {10, 15, 10, 12, 8};

    for(i=0;i<size;i++)
    {
        data[i].p = p[i];
        data[i].wt = w[i];
        data[i].r = p[i]/w[i];
    }

    for(i=0;i<size;i++)
        for(j=0;j<size-i-1;j++)
            if(data[j].r<data[j+1].r)
            {
                temp = data[j].p;
                data[j].p = data[j+1].p;
                data[j+1].p = temp;

                temp = data[j].wt;
                data[j].wt = data[j+1].wt;
                data[j+1].wt = temp;

                temp = data[j].r;
                data[j].r = data[j+1].r;
                data[j+1].r = temp;
            }
    for(i=0;i<size;i++)
        printf("%d %d %.2f\n",data[i].p,data[i].wt,data[i].r);
    printf("\n\n");
    for(i=0;i<size;i++)
    {
        if(curr_wt<t_wt && curr_wt+data[i].wt<=t_wt)
        {
            need = need-data[i].wt;
            total_profit += data[i].p;
            curr_wt += data[i].wt;
            printf("%d added to bag, Profit: %.0f, remaining weight: %d\n",data[i].wt,total_profit,need);
            
        }
        else
            break;
    }
    if(need>0)
    {
        float result = (float)need/(float)data[i].wt*100;
        total_profit += (float)data[i].p/100.0*result;
        printf("%.1f%% of %d to bag, Profit: %.4f remaining weight: 0\nProcess Complete",result,data[i].wt,total_profit);
    }
    return 0;
}