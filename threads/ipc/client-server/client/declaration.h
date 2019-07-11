#define KEY 1234
#define SHM_SIZE 1024
#define BUFSIZE 512
struct stuff 
{
	char data[BUFSIZE];	
	char *reply;
	int flag;
}stuff;

int msgid;
