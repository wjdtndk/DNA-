#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    char DNA[500], RNA[500];
    int i;
    int start = -1;
    char amy[3];

    printf("[ 세포에서의 유전 정보 흐름을 알아봅시당 >< ]\n");
    printf("\nDNA(주형가닥)의 유전 정보를 입력해 주세요(대소문자 무관) : ");
    scanf("%s", DNA);

    for (int i = 0; i < strlen(DNA); i++) {
        if ((DNA[i] == 'a') || (DNA[i] == 'A')) {
            RNA[i] = 'U';
        }
        else if ((DNA[i] == 't') || (DNA[i] == 'T')) {
            RNA[i] = 'A';
        }
        else if ((DNA[i] == 'c') || (DNA[i] == 'C')) {
            RNA[i] = 'G';
        }
        else if ((DNA[i] == 'g') || (DNA[i] == 'G')) {
            RNA[i] = 'C';
        }
        else {
            printf("\n 염기가 아닌 문자가 입력되었습니다 : %c \n", DNA[i]);
            return 1;
        }
    }
    RNA[strlen(DNA)] = '\0';

    printf("\n전사 결과 : %s\n", RNA);

    for (i = 0;i < strlen(RNA) - 2;i++) {
        if ((RNA[i] == 'A') && (RNA[i + 1] == 'U') && (RNA[i + 2] == 'G')) {
            start = i;
            break;
        }
    }

    if (start == -1) {
        printf("\nAUG 코돈(개시 코돈)이 존재하지 않습니다 \n");
        return 1;
    }

    printf("\n번역 결과 : ");

    for (int i = start; i < strlen(RNA); i += 3) {
        if (i + 2 < strlen(RNA)) {
            amy[0] = RNA[i];
            amy[1] = RNA[i + 1];
            amy[2] = RNA[i + 2];

            if ((amy[0] == 'U') && (amy[1] == 'U') && (amy[2] == 'U') || (amy[0] == 'U') && (amy[1] == 'U') && (amy[2] == 'C')) {
                printf("페닐알라닌   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'U') && (amy[2] == 'A') || (amy[0] == 'U') && (amy[1] == 'U') && (amy[2] == 'G') || (amy[0] == 'C') && (amy[1] == 'U') && (amy[2] == 'U') || (amy[0] == 'C') && (amy[1] == 'U') && (amy[2] == 'C') || (amy[0] == 'C') && (amy[1] == 'U') && (amy[2] == 'A') || (amy[0] == 'C') && (amy[1] == 'U') && (amy[2] == 'G')) {
                printf("류신   ");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'U') && (amy[2] == 'U') || (amy[0] == 'A') && (amy[1] == 'U') && (amy[2] == 'C') || (amy[0] == 'A') && (amy[1] == 'U') && (amy[2] == 'A')) {
                printf("아이소류신   ");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'U') && (amy[2] == 'G')) {
                printf("메티오닌(개시 코돈)   ");
            }
            else if ((amy[0] == 'G') && (amy[1] == 'U') && (amy[2] == 'U') || (amy[0] == 'G') && (amy[1] == 'U') && (amy[2] == 'C') || (amy[0] == 'G') && (amy[1] == 'U') && (amy[2] == 'A') || (amy[0] == 'G') && (amy[1] == 'U') && (amy[2] == 'G')) {
                printf("발린   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'C') && (amy[2] == 'U') || (amy[0] == 'U') && (amy[1] == 'C') && (amy[2] == 'C') || (amy[0] == 'U') && (amy[1] == 'C') && (amy[2] == 'A') || (amy[0] == 'U') && (amy[1] == 'C') && (amy[2] == 'G') || (amy[0] == 'A') && (amy[1] == 'G') && (amy[2] == 'U') || (amy[0] == 'A') && (amy[1] == 'G') && (amy[2] == 'C')) {
                printf("세린   ");
            }
            else if ((amy[0] == 'C') && (amy[1] == 'C') && (amy[2] == 'U') || (amy[0] == 'C') && (amy[1] == 'C') && (amy[2] == 'C') || (amy[0] == 'C') && (amy[1] == 'C') && (amy[2] == 'A') || (amy[0] == 'C') && (amy[1] == 'C') && (amy[2] == 'G')) {
                printf("프롤린   ");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'C') && (amy[2] == 'U') || (amy[0] == 'A') && (amy[1] == 'C') && (amy[2] == 'C') || (amy[0] == 'A') && (amy[1] == 'C') && (amy[2] == 'A') || (amy[0] == 'A') && (amy[1] == 'C') && (amy[2] == 'G')) {
                printf("트레오닌   ");
            }
            else if ((amy[0] == 'G') && (amy[1] == 'C') && (amy[2] == 'U') || (amy[0] == 'G') && (amy[1] == 'C') && (amy[2] == 'C') || (amy[0] == 'G') && (amy[1] == 'C') && (amy[2] == 'A') || (amy[0] == 'G') && (amy[1] == 'C') && (amy[2] == 'G')) {
                printf("알라닌   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'A') && (amy[2] == 'U') || (amy[0] == 'U') && (amy[1] == 'A') && (amy[2] == 'C')) {
                printf("타이로신   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'A') && (amy[2] == 'A') || (amy[0] == 'U') && (amy[1] == 'A') && (amy[2] == 'G') || (amy[0] == 'U') && (amy[1] == 'G') && (amy[2] == 'A')) {
                printf("종결 코돈   ");
                return 1;
            }
            else if ((amy[0] == 'C') && (amy[1] == 'A') && (amy[2] == 'U') || (amy[0] == 'C') && (amy[1] == 'A') && (amy[2] == 'C')) {
                printf("히스티딘   ");
            }
            else if ((amy[0] == 'C') && (amy[1] == 'A') && (amy[2] == 'A') || (amy[0] == 'C') && (amy[1] == 'A') && (amy[2] == 'G')) {
                printf("글루타민");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'A') && (amy[2] == 'U') || (amy[0] == 'A') && (amy[1] == 'A') && (amy[2] == 'C')) {
                printf("아스파라긴   ");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'A') && (amy[2] == 'A') || (amy[0] == 'A') && (amy[1] == 'A') && (amy[2] == 'G')) {
                printf("라이신   ");
            }
            else if ((amy[0] == 'G') && (amy[1] == 'A') && (amy[2] == 'U') || (amy[0] == 'G') && (amy[1] == 'A') && (amy[2] == 'C')) {
                printf("아스파트산   ");
            }
            else if ((amy[0] == 'G') && (amy[1] == 'A') && (amy[2] == 'A') || (amy[0] == 'G') && (amy[1] == 'A') && (amy[2] == 'G')) {
                printf("글루탐산   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'G') && (amy[2] == 'U') || (amy[0] == 'U') && (amy[1] == 'G') && (amy[2] == 'C')) {
                printf("시스테인   ");
            }
            else if ((amy[0] == 'C') && (amy[1] == 'G') && (amy[2] == 'U') || (amy[0] == 'C') && (amy[1] == 'G') && (amy[2] == 'C') || (amy[0] == 'C') && (amy[1] == 'G') && (amy[2] == 'A') || (amy[0] == 'C') && (amy[1] == 'G') && (amy[2] == 'G') || (amy[0] == 'A') && (amy[1] == 'G') && (amy[2] == 'A') || (amy[0] == 'A') && (amy[1] == 'G') && (amy[2] == 'G')) {
                printf("아르지닌   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'G') && (amy[2] == 'G')) {
                printf("트립토판   ");
            }
            else {
                printf("글라이신   ");
            }
        }
    }

    return 0;
}
