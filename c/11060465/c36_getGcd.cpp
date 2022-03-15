int getGcd(int su1, int su2)
{
	while (su1 != su2)
	{
		if (su1 > su2)
		{
			su1 -= su2;
		}
		else
		{
			su2 -= su1;
		}
	}

	return su1;
}