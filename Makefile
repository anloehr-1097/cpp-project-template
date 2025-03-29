prep:
	mkdir -p build && cd build && cmake ../src

build_project: 
	cmake --build build

clean-build:
	rm -r build && mkdir -p build

clean-artifacts:
	rm -r bin && rm -r lib && rm -r include

run:
	./build/project_name

install:
	cmake --install build

test:
	cd build && ctest -VV
