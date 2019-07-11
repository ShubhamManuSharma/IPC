#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define MAX 10
struct hashstuff {
	int key;
	int data;
	struct hashstuff *next;
};

struct hashstuff *hashArray[MAX];

int gethashcode(int key){
	return (key % MAX);
}

int checkhashArray(int code){
	if(hashArray[code]->data != -1){
		code %= 2;
		checkhashArray(code); 
	}else
		return code;
}

int update_hash(struct hashstuff *hash, int key) 
{
	struct hashstuff **temp = hashArray;
			
	while(temp[key]->next != NULL){
		temp[key] = temp[key]->next;
	}
	hash->next = temp[key]->next;
	temp[key]->next = hash;

	temp = hashArray;
return 0;
}

int insert(int data){

	struct hashstuff *hash;
	int hashcode;
	
	hash = (struct hashstuff *)malloc(sizeof(struct hashstuff));
	if(!hash)
		exit(EXIT_FAILURE);
	
	hash->key = gethashcode(data);
	hash->data = data;
	hash->next = NULL;

	hashcode = gethashcode(data);
	if(!hashArray[hashcode]){	
		hashArray[hashcode] = (struct hashstuff *)malloc(sizeof(struct hashstuff));
		if(!hashArray){
			printf("hasharray fail alloc");	
			exit(EXIT_FAILURE);
		}
		hashArray[hashcode]->next = (struct hashstuff *)malloc(sizeof(struct hashstuff));
		if(!hashArray[hashcode]->next){
			printf("hasharray->next fail alloc");	
			exit(EXIT_FAILURE);
		}
		hashArray[hashcode] = hash;
	}else{
		update_hash(hash,hashcode);	
	}

return 0;
}

int lookup(int value){
	int key;
	key = gethashcode(value);
	struct hashstuff *temp;
	temp = hashArray[key];
	if(temp->data == value ){
		printf("lookup_success : %d found at %d pos\n",value,key);
	}else {
		for(temp = hashArray[key];temp->next != NULL;temp = temp->next){
			if(temp->data == value){
				printf("lookup_success : %d found at %d pos\n",value,key);
			}
		}
	}
	
return 0;
}

int main() {

	insert(14);
	insert(24);
	insert(4);
	insert(10);
	insert(34);
	insert(12);
	insert(1);
	insert(3);

	lookup(34);
	lookup(12);
	lookup(10);
	lookup(4);
	lookup(14);
}
