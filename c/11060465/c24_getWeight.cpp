float getWeight(float height)
{
	float weight;
	int bmi = 22;

	weight = bmi * (height * 0.01 * height * 0.01);

	return weight;
}