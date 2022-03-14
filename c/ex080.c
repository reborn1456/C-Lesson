#include <stdio.h>

int greatest(int d[]);
int smallest(int d[]);

main()
{
	int data[8] = { 6, 10, 8, 2, 9, 5, 1, 7 }, gst, sst;

	gst = greatest(data);
	sst = smallest(data);

	printf("Greatest: %d\nSmallest: %d \n", gst, sst);

	system("pause");
	return 0;
}

int greatest(int data[])
{
	int gst = 0, i = 0;

	while (data[i] < 8)
	{
		if (data[i] > data[i + 1]) 
		{
			gst = data[i];
		}
		else
		{
			gst = data[i + 1];
		}
		i++;
	}

	return gst;
}

int smallest(int data[])
{
	int sst = 0, i = 0;

	while (data[i] < 8)
	{
		if (data[i] < data[i + 1])
		{
			sst = data[i];
		}
		else
		{
			sst = data[i + 1];
		}
		i++;
	}

	return sst;
}