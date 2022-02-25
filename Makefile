objects = exp_0f exp_11d exp_11f exp_11h exp_21f exp_24f pwr_21f sigm_21f
all: $(objects)

$(objects): %: src/%.cpp
	@mkdir -p bin
	g++ -std=c++11 $(CFLAGS) -o bin/$@ $<