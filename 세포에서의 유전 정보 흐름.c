#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
    char DNA[500], RNA[500];
    int i;
    char amy[3];

    printf("[ ���������� ���� ���� �帧�� �˾ƺ��ô� >< ]\n");
    printf("\nDNA(��������)�� ���� ������ �Է��� �ּ��� : ");
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
    }
    RNA[strlen(DNA)] = '\0';

    printf("\n���� ��� : %s\n", RNA);

    printf("\n���� ��� : ");

    for (int i = 0; i < strlen(RNA); i += 3) {
        if (i + 2 < strlen(RNA)) { 
            amy[0] = RNA[i];
            amy[1] = RNA[i + 1];
            amy[2] = RNA[i + 2];

            if ((amy[0] == 'U') && (amy[1] == 'U') && (amy[2] == 'U') || (amy[0] == 'U') && (amy[1] == 'U') && (amy[2] == 'C')) {
                printf("��Ҿ˶��   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'U') && (amy[2] == 'A') || (amy[0] == 'U') && (amy[1] == 'U') && (amy[2] == 'G') || (amy[0] == 'C') && (amy[1] == 'U') && (amy[2] == 'U') || (amy[0] == 'C') && (amy[1] == 'U') && (amy[2] == 'C') || (amy[0] == 'C') && (amy[1] == 'U') && (amy[2] == 'A') || (amy[0] == 'C') && (amy[1] == 'U') && (amy[2] == 'G')) {
                printf("����   ");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'U') && (amy[2] == 'U') || (amy[0] == 'A') && (amy[1] == 'U') && (amy[2] == 'C') || (amy[0] == 'A') && (amy[1] == 'U') && (amy[2] == 'A')) {
                printf("���̼ҷ���   ");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'U') && (amy[2] == 'G')) {
                printf("�޽��̿���(�����ڵ�)   ");
            }
            else if ((amy[0] == 'G') && (amy[1] == 'U') && (amy[2] == 'U') || (amy[0] == 'G') && (amy[1] == 'U') && (amy[2] == 'C') || (amy[0] == 'G') && (amy[1] == 'U') && (amy[2] == 'A') || (amy[0] == 'G') && (amy[1] == 'U') && (amy[2] == 'G')) {
                printf("�߸�   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'C') && (amy[2] == 'U') || (amy[0] == 'U') && (amy[1] == 'C') && (amy[2] == 'C') || (amy[0] == 'U') && (amy[1] == 'C') && (amy[2] == 'A') || (amy[0] == 'U') && (amy[1] == 'C') && (amy[2] == 'G') || (amy[0] == 'A') && (amy[1] == 'G') && (amy[2] == 'U') || (amy[0] == 'A') && (amy[1] == 'G') && (amy[2] == 'C')) {
                printf("����   ");
            }
            else if ((amy[0] == 'C') && (amy[1] == 'C') && (amy[2] == 'U') || (amy[0] == 'C') && (amy[1] == 'C') && (amy[2] == 'C') || (amy[0] == 'C') && (amy[1] == 'C') && (amy[2] == 'A') || (amy[0] == 'C') && (amy[1] == 'C') && (amy[2] == 'G')) {
                printf("���Ѹ�   ");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'C') && (amy[2] == 'U') || (amy[0] == 'A') && (amy[1] == 'C') && (amy[2] == 'C') || (amy[0] == 'A') && (amy[1] == 'C') && (amy[2] == 'A') || (amy[0] == 'A') && (amy[1] == 'C') && (amy[2] == 'G')) {
                printf("Ʈ������   ");
            }
            else if ((amy[0] == 'G') && (amy[1] == 'C') && (amy[2] == 'U') || (amy[0] == 'G') && (amy[1] == 'C') && (amy[2] == 'C') || (amy[0] == 'G') && (amy[1] == 'C') && (amy[2] == 'A') || (amy[0] == 'G') && (amy[1] == 'C') && (amy[2] == 'G')) {
                printf("�˶��   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'A') && (amy[2] == 'U') || (amy[0] == 'U') && (amy[1] == 'A') && (amy[2] == 'C')) {
                printf("Ÿ�̷ν�   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'A') && (amy[2] == 'A') || (amy[0] == 'U') && (amy[1] == 'A') && (amy[2] == 'G') || (amy[0] == 'U') && (amy[1] == 'G') && (amy[2] == 'A')) {
                printf("���� �ڵ�   ");
            }
            else if ((amy[0] == 'C') && (amy[1] == 'A') && (amy[2] == 'U') || (amy[0] == 'C') && (amy[1] == 'A') && (amy[2] == 'C')) {
                printf("����Ƽ��   ");
            }
            else if ((amy[0] == 'C') && (amy[1] == 'A') && (amy[2] == 'A') || (amy[0] == 'C') && (amy[1] == 'A') && (amy[2] == 'G')) {
                printf("�۷�Ÿ��");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'A') && (amy[2] == 'U') || (amy[0] == 'A') && (amy[1] == 'A') && (amy[2] == 'C')) {
                printf("�ƽ��Ķ��   ");
            }
            else if ((amy[0] == 'A') && (amy[1] == 'A') && (amy[2] == 'A') || (amy[0] == 'A') && (amy[1] == 'A') && (amy[2] == 'G')) {
                printf("���̽�   ");
            }
            else if ((amy[0] == 'G') && (amy[1] == 'A') && (amy[2] == 'U') || (amy[0] == 'G') && (amy[1] == 'A') && (amy[2] == 'C')) {
                printf("�ƽ���Ʈ��   ");
            }
            else if ((amy[0] == 'G') && (amy[1] == 'A') && (amy[2] == 'A') || (amy[0] == 'G') && (amy[1] == 'A') && (amy[2] == 'G')) {
                printf("�۷�Ž��   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'G') && (amy[2] == 'U') || (amy[0] == 'U') && (amy[1] == 'G') && (amy[2] == 'C')) {
                printf("�ý�����   ");
            }
            else if ((amy[0] == 'C') && (amy[1] == 'G') && (amy[2] == 'U') || (amy[0] == 'C') && (amy[1] == 'G') && (amy[2] == 'C') || (amy[0] == 'C') && (amy[1] == 'G') && (amy[2] == 'A') || (amy[0] == 'C') && (amy[1] == 'G') && (amy[2] == 'G') || (amy[0] == 'A') && (amy[1] == 'G') && (amy[2] == 'A') || (amy[0] == 'A') && (amy[1] == 'G') && (amy[2] == 'G')) {
                printf("�Ƹ�����   ");
            }
            else if ((amy[0] == 'U') && (amy[1] == 'G') && (amy[2] == 'G')) {
                printf("Ʈ������   ");
            }
            else {
                printf("�۶��̽�   ");
            }
        }
    }

    return 0;
}
