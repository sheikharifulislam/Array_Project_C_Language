#include <stdio.h>

#define MAX_LENGTH 100

int main() {

    system("cls");

    int data[MAX_LENGTH];
    int length = 0;
    int input;
    int value,index;
    int min,max,sum,average,search,sort;

    do {
        printf("Menu: \n");
        printf("----------------\n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Min\n");
        printf("7. Max\n");
        printf("8. Sum\n");
        printf("9. Average\n");
        printf("10. Search\n");
        printf("11. Sort\n");
        printf("12. Clear\n");
        printf("0. Exit\n");

        printf("----------------\n");

        printf("Enter A Menu: ");
        scanf("%d",&input);
        system("cls");
        printf("------- Result -------\n");

        switch(input) {

        case 0:
            // nothing
            break;

        case 1:
            // Add operation
            printf("Please Enter an Interger Value: ");
            scanf("%d",&value);

            data[length] = value;
            printf("%d inserted at index %d\n",value,length);

            length++;
            break;

        case 2:
            // Insert operation
            printf("Please Enter A Interger Value: ");
            scanf("%d",&value);
            printf("Please Enter an Index Between 0 - %d: ",length);
            scanf("%d",&index);
            for(int i = length; i > index; i--) {
                data[i] = data[i - 1];
            }
            data[index] = value;
            length++;
            printf("%d insert index %d\n",value,index);
            break;

        case 3:

            // Edit Operation
            printf("Please Enter an Index Between 0 - %d: ",length-1);
            scanf("%d",&index);
            printf("Please Enter A Interger Value: ");
            scanf("%d",&value);
            data[index] = value;
            printf("%d updated at index %d\n",value,index);

            break;

        case 4:
            // Delete operation
            printf("Please Enter an Index Between 0 - %d: ",length-1);
            scanf("%d",&index);
            int dv = data[index];
            for(int i = index; i < length; i++) {
                data[i] = data[i + 1];
            }
            data[length] = 0;
            length--;

            printf("%d delete from %d th index\n",dv,index);
            break;

        case 5:
            // Display items
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
            // Find min value in the array
            min = data[0];
            for(int i = 0; i < length; i++) {
                if(data[i] < min) {
                    min = data[i];
                }
            }

            printf("%d is min value in the array\n",min);
            break;

        case 7:
            // Find max value in the array
            max = data[0];
            for(int i = 0; i < length; i++) {
                if(data[i] > max) {
                    min = data[i];
                }
            }

            printf("%d is max value in the array\n",min);
            break;

        case 8:
            // Sum operation
            sum = 0;
            for(int i = 0; i < length; i++) {
                sum += data[i];
            }

            printf("total sum is: %d\n",sum);
            break;

        case 9:
            // Average operation
            sum = 0;
            for(int i = 0; i < length; i++) {
                sum += data[i];
            }

            average = sum / length;

            printf("Average Value is %d\n",average);

            break;

        case 10:
            // Search item from array
            printf("Please Enter Your Search Item: ");
            scanf("%d",&value);
            int i;
            int count = 0;
            for(i = 0; i < length; i++) {
                if(data[i] == value) {
                    printf("%d is found in the array. It is %d th element in the array\n",data[i],i);
                }
                else {
                    count++;
                }
            }

            if(count == i) {
                printf("%d is not found in the array\n",value);
            }

            break;

        case 11:
            // sort array
            for(int i = 0; i < length; i++) {
                for(int j = i; j < length; j++) {
                    if(data[i] > data[j]) {
                        int temp = data[i];
                        data[i] = data[j];
                        data[j] = temp;
                    }
                }
            }

            for(int i = 0; i < length; i++) {
                printf("%d ,",data[i]);
            }

            printf("\n");

            break;

        case 12:
            // Clear array
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
    printf("Thanks For Using Our Application. Goo Buy");


    return 0;
}
