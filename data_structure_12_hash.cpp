#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

# define MAX_KEY 64
# define MAX_DATA 128
# define MAX_TABLE 4096

struct Hash
{
	char key[MAX_KEY + 1];
	char data[MAX_DATA + 1];
};
struct Hash tb[MAX_TABLE];

unsigned long hash(const char* str)
{
	unsigned long hash = 5381;
	int c;

	while (c = *str++)
	{
		hash = (((hash << 5) + hash) + c) % MAX_TABLE;
	}

	return hash % MAX_TABLE;
}

int find(const char* key, char* data)
{
	unsigned long h = hash(key);
	int cnt = MAX_TABLE;

	while (tb[h].key[0] != 0 && cnt--)
	{
		if (strcmp(tb[h].key, key) == 0)
		{
			strcpy(data, tb[h].data);
			return 1;
		}
		h = (h + 1) % MAX_TABLE;
	}

	return 0;
}

int add(const char* key, char* data)
{
	unsigned long h = hash(key);

	while (tb[h].key[0] != 0)
	{
		if (strcmp(tb[h].key, key) == 0)
		{
			return 0;
		}

		h = (h + 1) % MAX_TABLE;
	}
	strcpy(tb[h].key, key);
	strcpy(tb[h].data, data);
	return 1;
}

int main(void)
{
	char key1[] = "key1";
	char key2[] = "key2";
	char key3[] = "key3";

	char data1[] = "data1";
	char data2[] = "data2";
	char data3[] = "data3";

	char temp1[10];
	char temp2[10];
	char temp3[10];


	add(key1, data1);
	add(key2, data2);
	add(key3, data3);

	find(key1, temp1);
	find(key2, temp2);
	find(key3, temp3);

	std::cout << "temp1 : " << temp1 << std::endl;
	std::cout << "temp2 : " << temp2 << std::endl;
	std::cout << "temp3 : " << temp3 << std::endl;

	return 0;
}

// temp1 : data1
// temp2 : data2
// temp3 : data3
