#include <stdio.h>

#define MAX_LENGTH 100

int main() {

    system("cls");

    int data[MAX_LENGTH];
    int length = 0;
    int input;
    int value;

    do {
        printf("Menu: \n");
        printf("----------------\n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("0. Exit\n");

        printf("----------------\n");

        printf("Enter A Menu: ");
        scanf("%d",&input);
        system("cls");
        //printf("------- Result -------\n");
        //printf("You Have Selected Menu No %d\n",input);
        //printf("------- Result End -------\n\n");

        printf("------- Result -------\n");

        switch(input) {

        case 0:
            // nothing
            break;

        case 1:
            //add operation
            printf("Please Enter an Interger Value: ");
            scanf("%d",&value);

            data[length] = value;
            printf("%d inserted at index %d\n",value,length);

            length++;
            break;

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            // display items
            if(!length) {
                printf("There No Data\n");
            }
            else {
                printf("DATA: ");
                for(int i = 0; i < length; i++) {
                    printf("%d, ",data[i]);
                }
            }
            printf("\n");
            break;

        case 6:
            // clear data
            data[0];
            length = 0;
            printf("Data Clear\n");
            break;

        default:
            printf("Invalid Input\n");

        }

        printf("------- Result End-------\n\n");


    } while(input != 0);


    system("cls");


    return 0;
}
