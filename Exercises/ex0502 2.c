#include <stdio.h>

int main()
{
    int n, score, total = 0, passed = 0, max = -1, min = 101, na_count = 0;
    float average;

    // Input number of students
    printf("n = ");
    scanf("%d", &n);

    // Validate number of students
    if (n <= 0 || n >= 100)
    {
        printf("ERROR: invalid number of students (%d)\n", n);
        return 0;
    }

    // Input scores
    printf("scores = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &score);

        // Validate score
        if (score < -1 || score > 101)
        {
            printf("ERROR: invalid score (%d)\n", score);
            return 0;
        }
        else if (score == -1)
        {
            na_count++;
            continue;
        }

        // Update statistics
        total += score;
        if (score >= 60)
        {
            passed++;
        }
        if (score > max)
        {
            max = score;
        }
        if (score < min)
        {
            min = score;
        }
    }

    // Calculate average
    if (n - na_count == 0)
    {
        printf("ERROR: no scores available\n");
        return 0;
    }
    average = (float)total / (n - na_count);

    // Output results
    printf("======= score info =======\n");
    printf("#students = %d\n", n);
    printf("#passed = %d (%d%%)\n", passed, (int)((float)passed / (n - na_count) * 100));
    printf("ave = %.1f\n", average);
    printf("max = %d\n", max == -1 ? 0 : max);
    printf("min = %d\n", min == 101 ? 0 : min);
    printf("==========================\n");

    return 0;
}