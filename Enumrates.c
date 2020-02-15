//AD codes
//demostrate enumerates
#include<stdio.h>
enum week{sunday,Monday,tuseday,wednesday,thursday,friday,saturday};
main()
{
    enum week today;
    today=wednesday;
    printf("%d day: ",today+1);
}
//now run
