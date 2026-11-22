#include <stdio.h>
int main(){
    int guard[7];
    int newRoster[7];
    int k,search_id,found_day =-1;
    printf("Enter guard IDs for Day 1 to Day 7:\n");
    int i;
    for(i=0;i<7;i++){
        printf("\nDay %d: ",i+1);
        scanf("%d",&guard[i]);
    }
    printf("\nShift roster forward by how many days (1-6)? ");
    scanf("%d",&k);
    for(i=0;i<7;i++){
        int new_index=(i+k)%7; 
        newRoster[new_index]=guard[i];
    }
    printf("\nDay\tOld\tNew");
    for(i=0;i<7;i++){
        printf("\nDay %d   %3d   %3d",i+1,guard[i],newRoster[i]);
    }
    printf("\nEnter your guard ID: ");
    scanf("%d",&search_id);
    for(i=0;i<7;i++){
        if(newRoster[i]==search_id) {
            found_day=i+1;
            break;
        }
    }
    if(found_day!=-1){
        printf("\nGuard %d now has duty on Day %d,",search_id,found_day);
    }else{
        printf("\nGuard %d not found on the roster.",search_id);
    }
    return 0;
}