#include "SimulationsExecutor.hpp"
#include "Data.hpp"
#include "Random.hpp"
#include <vector>
#include <iostream>

int main() {
	/*
	int n = 10;
	int N = 1000;
	int T = 1000;
	
	SimulationsExecutor simulationsExecutor(n, N, T, {0.4, 0.3, 0.2, 0.1});
	simulationsExecutor.execute();
	*/
	
	
	Data data("../data/input.txt", "../data/test.fa");
	data.collectAll();
	
	SimulationsExecutor simulationsExecutorFull(data);
	simulationsExecutorFull.execute();
	
	
	return 0;
}
