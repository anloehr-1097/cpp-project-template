prep:
	mkdir -p build && cd build && cmake ../src

build_project: 
	cmake --build build

clean:
	rm -r build && mkdir -p build && rm -r bin && rm -r lib && rm -r include

run:
	./build/project_name
