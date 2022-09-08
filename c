数组选择排序
#include<stdio.h>
void array(int nums[4],int len);
int main()
{
    int nums[4]={4,3,1,5};
    int len=sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            if(nums[i]>nums[j])
            {
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;

            }
        }
       // printf("\n");
    }
    array(nums,len);
}
void array(int nums[4],int len) {
    for (int i = 0; i < len; i++) {


        //printf("nums[%i]=%i", i, nums[i]);
        printf("%i ", nums[i]);



    }
    printf("\n");
}
