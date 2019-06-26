#define KEY 1234
#define SHM_SIZE 512
struct stuff 
{
	char data[SHM_SIZE];	
	char *reply;
	int flag;
}stuff;

