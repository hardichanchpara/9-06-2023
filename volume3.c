#include<stdio.h>
enum week{
	sunday=1,monday,tuesday,wednesday,thursday,friday,saturday
};
main()
{
	enum week w;
	w=friday;
	printf("%d",w);
}
