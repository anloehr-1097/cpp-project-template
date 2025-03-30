prep:
	mkdir -p build && cd build && cmake ..

build_project: 
	cmake --build build

clean-build:
	rm -rf build && mkdir -p build

clean-artifacts:
	rm -r bin && rm -r lib && rm -r include

run:
	./build/src/project_name

install:
	cmake --install build

test:
	cd build/src && ctest -VV
