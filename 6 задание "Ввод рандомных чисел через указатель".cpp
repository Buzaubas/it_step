const int size = 5;
	int random[size];
	int* pa = random;
	for (int i = -1; i < size; i++) {
		/*(*random)++;
		*random = rand() % 10;
		std::cout << (*pa)++ << std::endl;*/  // неправильно

		*(pa + i) = rand() % 10;
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << *(random + i) << std::endl;
	}
