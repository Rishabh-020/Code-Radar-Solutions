#include <stdio.h>
#include <string.h>

struct Student {
    double rollNumber;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    scanf("%d", &n);
    struct Student students[n];
    struct Student topScorer = {0, "", 0.0};
    float maxMarks = -1;
    for (i = 0; i < n; i++) {
        scanf("%lf %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        if (students[i].marks > maxMarks) {
            maxMarks = students[i].marks;
            topScorer = students[i]; 
        }
    }
    printf("Top Scorer: Roll Number: %.0lf, Name: %s, Marks: %.2f", topScorer.rollNumber,topScorer.name,topScorer.marks);

    return 0;
}