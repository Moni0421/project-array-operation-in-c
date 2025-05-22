

#include<stdio.h>
int main (){
    int choice,n;
    printf("ENTER YOUR NUMBER OF ARRAY:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("array:[");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    printf("]\n");

    while(1){
            printf("1=insert.\n");
            printf("2=update.\n");
            printf("3=delete.\n");
            printf("4=display.\n");
            printf("5=sort.\n");
            printf("6=search.\n");
            printf("7=exit.\n");
            printf("\n");
            printf("ENTER YOUR CHOICE:");
            scanf("%d",&choice);
            printf("\n");
            switch(choice){
                case 1:{
                    //insert..............................................................

                    int position,value;
                    printf("ENTER YOUR POSITION AND VALUE:");
                    scanf("%d %d",&position, &value);
                        for(int i=n;i>position;i--){
                            arr[i]=arr[i-1];
                            }
                    arr[position]=value;
                    n++;
                    printf("ARRAY WITH INSERT:[");
                    for(int i=0;i<n;i++){
                        printf("%d",arr[i]);
                    }
                    printf("]\n");
                    break;

                }
                printf("\n");

                case 2:{
                    //update............................................................
                    int up_index, up_value;
                    printf("ENTER UPDATE INDEX AND VALUE:");
                    scanf("%d %d", &up_index, &up_value);
                    if(up_index>=0 && up_index<=n){
                        arr[up_index]= up_value;
                    }else{
                        printf("invalid element\n");
                    }

                    printf("updated array:[");
                    for(int i=0;i<n;i++){
                        printf("%d",arr[i]);
                    }
                    printf("]\n");
                    break;

                }
                printf("\n");


                case 3:{
                    //delete................................................
                    int del_index, del_value;
                    printf("ENTER DELETE INDEX:");
                    scanf("%d",&del_index);
                    if(del_index>=0&&del_index<=n){
                    for(int i=del_index;i<n;i++){
                        arr[i]=arr[i+1];
                    }
                    n--;
                    printf("after delete index element array is:[");
                    for(int i=0;i<n;i++){
                        printf("%d",arr[i]);

                    }

                    printf("]\n");
                    }
                    else{
                        printf("invalid.");
                    }
                    printf("\n");

                    int pos;
                    printf("ENTER DELETE ELEMENT:");
                    scanf("%d",&del_value);
                    if(del_value>=0&&del_value<=n){
                    for(int i=0;i<n;i++){
                        if(arr[i]==del_value){
                           pos=i;
                        break;
                        }
                    }
                    n-=1;
                    for(int i=pos;i<n;i++){
                        arr[i]=arr[i+1];
                    }
                    printf("array after deleted value:[");
                    for(int i=0;i<n;i++){
                        printf("%d",arr[i]);
                    }
                    printf("]\n");
                    }else{
                        printf("invalid\n");
                    }
                    break;

                }

                printf("\n");

                case 4:{
                    //display.....................................................
                    printf("array is:[");
                    for(int i=0;i<n;i++){
                        printf("%d",arr[i]);

                    }
                    printf("]\n");
                    break;
                }
                printf("\n");

                case 5:{
                    //sort..........................................................
                    int temp;
                    for(int i=0;i<n;i++){
                        for(int j=i+1;j<n;j++){
                            if(arr[i]>arr[j]){
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                            }
                        }
                    }
                    printf("ascending array is:[");
                    for(int i=0;i<n;i++){
                        printf("%d",arr[i]);
                    }
                    printf("]\n");
                    for(int i=0;i<n;i++){
                        for(int j=i+1;j<n;j++){
                            if(arr[i]<arr[j]){
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                            }
                        }
                    }
                    printf("discending array is:[");
                    for(int i=0;i<n;i++){
                        printf("%d",arr[i]);
                    }
                    printf("]\n");
                    break;
                }
                printf("\n");


                case 6:{
                    //linear search..................................................
                    int search, found=0;
                    printf("enter your finding value:\n");
                    scanf("%d",&search);
                    printf("searching elements........\n");
                    for(int i=0;i<n;i++){
                        if(search==arr[i]){
                            found=1;
                        }

                    }
                    if(found==1){
                        printf("found the searching value.\n");
                    }else{
                        printf("not found.\n");
                         }
                    printf("\n");
                    break;
                }
                printf("\n");

                case 7:{
                    return 0;

                }
                printf("\n");

                default:{
                    printf("invalid input.\n");
                }



            }
    }


return 0;
}
