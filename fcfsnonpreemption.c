#include <stdio.h>

int main() {
    int n, i, j, bt[20], at[20], wt[20], tat[20], ct[20];
    float wtavg = 0, tatavg = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Arrival time for P%d: ", i);
        scanf("%d", &at[i]);
        printf("Burst time for P%d: ", i);
        scanf("%d", &bt[i]);
    }
    // FCFS scheduling
    ct[0] = at[0] + bt[0];
    wt[0] = 0;
    tat[0] = bt[0];
    for (i = 1; i < n; i++) {
        if (ct[i - 1] < at[i]) ct[i] = at[i] + bt[i];
        else ct[i] = ct[i - 1] + bt[i];

        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
    }
    printf("\nP\tAT\tBT\tWT\tTAT\n");
    for (i = 0; i < n; i++) {
        wtavg += wt[i];
        tatavg += tat[i];
        printf("P%d\t%d\t%d\t%d\t%d\n", i, at[i], bt[i], wt[i], tat[i]);
    }
    printf("Average WT = %.2f\nAverage TAT = %.2f\n", wtavg / n, tatavg / n);
    printf("\nGantt Chart:\n|");
    for (i = 0; i < n; i++) {
        for (j = 0; j < bt[i]; j++) printf("-");
        printf("P%d", i);
        for (j = 0; j < bt[i]; j++) printf("-");
        printf("|");
    }
    printf("\n%d", at[0]);
    for (i = 0; i < n; i++) printf("%*d", bt[i] * 2 + 2, ct[i]);
    return 0;
}
