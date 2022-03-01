test : test.cpp pystring.h pystring.cpp
	g++ test.cpp -o test -include pystring.h pystring.cpp