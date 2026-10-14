#include <stdio.h>

int main()
{
    float marks, attendance, income;
    int failed, disciplinary;

    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("Enter attendance: ");
    scanf("%f", &attendance);

    printf("Enter monthly family income: ");
    scanf("%f", &income);

    printf("Enter failed subjects: ");
    scanf("%d", &failed);

    printf("Enter disciplinary record (1 = Yes, 0 = No): ");
    scanf("%d", &disciplinary);

    /* Step 1: Validate input */
    if (marks >= 0)
    {
        if (marks <= 100)
        {
            if (attendance >= 0)
            {
                if (attendance <= 100)
                {
                    if (income > 0)
                    {
                        if (failed >= 0)
                        {
                            /* Step 2: Disciplinary check */
                            if (disciplinary == 1)
                            {
                                printf("\nScholarship Rejected: Disciplinary Issue\n");
                            }
                            else
                            {
                                /* Step 3: Failed subjects */
                                if (failed > 2)
                                {
                                    printf("\nScholarship Rejected: Too Many Failed Subjects\n");
                                }
                                else
                                {
                                    /*
                                     * Step 4:
                                     * First divide students according
                                     * to number of failed subjects.
                                     */
                                    if (failed == 0)
                                    {
                                        /* No failed subjects */

                                        if (marks >= 90)
                                        {
                                            if (attendance >= 95)
                                            {
                                                /* Excellent student */

                                                if (income <= 50000)
                                                {
                                                    printf("\nFULL MERIT SCHOLARSHIP: 100%%\n");
                                                }
                                                else
                                                {
                                                    if (income <= 100000)
                                                    {
                                                        printf("\n75%% Scholarship\n");
                                                    }
                                                    else
                                                    {
                                                        if (income <= 150000)
                                                        {
                                                            printf("\n50%% Scholarship\n");
                                                        }
                                                        else
                                                        {
                                                            printf("\nNo Scholarship\n");
                                                        }
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (attendance >= 85)
                                                {
                                                    /* Attendance reduces maximum */

                                                    if (income <= 50000)
                                                    {
                                                        printf("\nMaximum Scholarship: 75%%\n");
                                                    }
                                                    else
                                                    {
                                                        if (income <= 100000)
                                                        {
                                                            printf("\n75%% Scholarship\n");
                                                        }
                                                        else
                                                        {
                                                            if (income <= 150000)
                                                            {
                                                                printf("\n50%% Scholarship\n");
                                                            }
                                                            else
                                                            {
                                                                printf("\nNo Scholarship\n");
                                                            }
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    printf("\nScholarship Rejected: Low Attendance\n");
                                                }
                                            }
                                        }
                                        else
                                        {
                                            if (marks >= 80)
                                            {
                                                if (attendance >= 90)
                                                {
                                                    /* Normal income check */

                                                    if (income <= 50000)
                                                    {
                                                        printf("\n75%% Scholarship\n");
                                                    }
                                                    else
                                                    {
                                                        if (income <= 100000)
                                                        {
                                                            printf("\n75%% Scholarship\n");
                                                        }
                                                        else
                                                        {
                                                            if (income <= 150000)
                                                            {
                                                                printf("\n50%% Scholarship\n");
                                                            }
                                                            else
                                                            {
                                                                printf("\nNo Scholarship\n");
                                                            }
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    if (attendance >= 80)
                                                    {
                                                        /* Maximum 50% */

                                                        if (income <= 150000)
                                                        {
                                                            printf("\nMaximum Scholarship: 50%%\n");
                                                        }
                                                        else
                                                        {
                                                            printf("\nNo Scholarship\n");
                                                        }
                                                    }
                                                    else
                                                    {
                                                        printf("\nScholarship Rejected: Low Attendance\n");
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (marks >= 70)
                                                {
                                                    if (attendance >= 85)
                                                    {
                                                        /* Income decides scholarship */

                                                        if (income <= 50000)
                                                        {
                                                            printf("\n50%% Scholarship\n");
                                                        }
                                                        else
                                                        {
                                                            if (income <= 100000)
                                                            {
                                                                printf("\n50%% Scholarship\n");
                                                            }
                                                            else
                                                            {
                                                                if (income <= 150000)
                                                                {
                                                                    printf("\n50%% Scholarship\n");
                                                                }
                                                                else
                                                                {
                                                                    printf("\nNo Scholarship\n");
                                                                }
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        printf("\nScholarship Rejected: Low Attendance\n");
                                                    }
                                                }
                                                else
                                                {
                                                    printf("\nScholarship Rejected: Insufficient Marks\n");
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        /*
                                         * Student has 1 or 2 failed subjects.
                                         * Maximum scholarship = 50%.
                                         */

                                        if (marks >= 70)
                                        {
                                            if (attendance >= 85)
                                            {
                                                if (income <= 150000)
                                                {
                                                    printf("\nMaximum Scholarship: 50%%\n");
                                                }
                                                else
                                                {
                                                    printf("\nNo Scholarship\n");
                                                }
                                            }
                                            else
                                            {
                                                printf("\nScholarship Rejected: Low Attendance\n");
                                            }
                                        }
                                        else
                                        {
                                            printf("\nScholarship Rejected: Insufficient Marks\n");
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            printf("\nInvalid Input\n");
                        }
                    }
                    else
                    {
                        printf("\nInvalid Input\n");
                    }
                }
                else
                {
                    printf("\nInvalid Input\n");
                }
            }
            else
            {
                printf("\nInvalid Input\n");
            }
        }
        else
        {
            printf("\nInvalid Input\n");
        }
    }
    else
    {
        printf("\nInvalid Input\n");
    }

    return 0;
}