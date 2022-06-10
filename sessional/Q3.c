#include <stdio.h>
struct process
{
    int WT, AT, BT, TAT, PT, CT;
};

struct process p[10];

int main()
{
    int n, temp[10], t, count = 0, short_p;
    float total_WT = 0, total_TAT = 0, Avg_WT, Avg_TAT, total_CT;
    printf("Enter the number of the process\n");
    scanf("%d", &n);
    printf("Enter the AT, BT and priority of the process\n");
    printf("AT BT PT\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &p[i].AT, &p[i].BT, &p[i].PT);

        temp[i] = p[i].BT;
    }

    p[9].PT = 9999;

    for (t = 0; count != n; t++)
    {
        short_p = 9;
        for (int i = 0; i < n; i++)
        {
            
            if (p[short_p].PT > p[i].PT && p[i].AT <= t && p[i].BT > 0)
            {
                short_p = i;
            }
        }

        p[short_p].BT = p[short_p].BT - 1;

        if (p[short_p].BT == 0)
        {

            count++;
            p[short_p].WT = t + 1 - p[short_p].AT - temp[short_p];
            p[short_p].TAT = t + 1 - p[short_p].AT;

            total_WT = total_WT + p[short_p].WT;
            total_TAT = total_TAT + p[short_p].TAT;
            p[short_p].CT = t + 1;
        }
    }

    Avg_WT = total_WT / n;
    Avg_TAT = total_TAT / n;

    printf("ID\tAT\tWT\tTAT\tPR\tCT \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, p[i].AT, p[i].WT, p[i].TAT, p[i].PT, p[i].CT);
    }

    printf("Average waiting time of the process  is %f\n", Avg_WT);
    printf("Average turn around time of the process is %f\n", Avg_TAT);

    return 0;
}