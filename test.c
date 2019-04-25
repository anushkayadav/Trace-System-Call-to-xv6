#include "types.h"
#include "stat.h"
#include "user.h"


int
main(void)
{
	printf(1,"No of process start here %d\n",trace(1));
	trace(1);
	wait();
	wait();
	wait();
	//trace(1);
	printf(1,"The count is %d \n",trace(0));
	exit();
}

