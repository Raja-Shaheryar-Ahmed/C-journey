#include <stdio.h>

int main() {
    int writtenScore = 78;
    int techInterviewScore = 85;

    if (writtenScore >= 70) {
        printf("Passed the written test!\n");
        if (techInterviewScore >= 80) {
            printf("Congratulations! You are hired.\n");
        } else {
            printf("Failed at the technical interview round.\n");
        }
    } else {
        printf("Did not qualify through the written test.\n");
    }

    return 0;
}