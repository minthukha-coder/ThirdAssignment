
// Created by Min Thu Kha
// minthukha25122003@gmail.com

#include<stdio.h>

int *check(int *b,int *c);
void swap(int *d,int *e);

int main(){
    int a = 0;
    int array[10] = {10,40,60,80,30,70,90};
    char array1[40] = {'p','i','l','l','o','w','\0'};
    char array2[10] = {'a','p','p','l','e','\0'};

    int *ptr1;
    ptr1 = &array[3];
    printf("Address of ptr1 is %d\n",ptr1); // 6422268
    printf("Value of ptr1 is %d\n",*ptr1);  // 80

    int *ptr2;
    ptr2 = &array[5];
    printf("Address of ptr2 is %d\n",ptr2); // 6422276
    printf("Value of ptr2 is %d\n",*ptr2);  // 70

    a = *ptr1 + *ptr2;
    printf("Value of a is %d\n",a); // 150

    int *ptr3;
    ptr3 = ptr2-ptr1; // 6422276-6422268 = 8 / 4bytes = 2
    printf("ptr2-ptr1 = %d\n\n",ptr3); // 2

    printf("*(ptr1+array1[1]) = %d\n",ptr1+array1[1]);//  6422688 array1[1] = i; i = ascii value 105



    printf("Before swapping array[3] = %d, array[5] = %d\n",array[3],array[5]); // array[3] = 80, array[5] = 70

    swap(&array[3],&array[5]);

    printf("After swapping array[3] = %d, array[5] = %d\n",array[3],array[5]); // array[3] = 70, array[5] = 80


    int *p;
    p = check(&array[3],&array[5]);
    printf("%d is larger\n\n",*p);// 80




    char totalArray[100];
    int index = 0;

    for (int i = 0; array1[i] != '\0';i++){
        totalArray[i] = array1[i];
        index = i;
    }
    printf("Total Array %s\n",totalArray);
    printf("Index %d\n",index);

    for (int i = 0; array2[i] != '\0';i++){
        totalArray[index+1] = array2[i];
        index++;
    }
    printf("Last total Array %s\n",totalArray);
    printf("Last index %d\n",index);

    for (int x = 0; x < index; x++){

        if (totalArray[x] == 'a'){
            printf("We found at index %d\n",x);
        }

    }
    int size = *(&totalArray+1)-totalArray;
    printf("The size of total array %d",size);





return 0;
}

void swap(int *d,int *e){

    int temp = *d;
    *d = *e;
    *e = temp;

}

int *check(int *b,int *c){

    if (*b < *c){
        printf("Address of c is %d\n",c);// 6422276
        return c;
    }else{
    printf("Address of b is %d\n",b);
    return b;
    }

}

