# mba-demo

# require
 
 * g++-5

 	``` apt-get install g++-5 ```
 * cmake
 	
 	``` apt-get install cmake ```

# demo stracture
	
	``` git clone git@github.com:ahuazhu/mba-demo.git ```

	``` tree mba-demo ```

	The structure :

	```
	root@fa0f71144237:~# tree mba-demo/
	mba-demo/
	|-- CMakeLists.txt
	|-- main
	|   |-- CMakeLists.txt
	|   `-- main.cpp
	`-- mba
	    `-- mba.hpp

	2 directories, 4 files

	```

	`main.cpp`: 你的业务代码，其中使用了 MBA库。

# build

  ```
  mkdir -p mba-demo/build
  cd mba-demo/build
  cmake ..
  cd main
  make
  ```
  
  编译连接好的可执行文件位于：```mba-demo/build/main/main```

# run

  ```
     ./main
  ```
  会输出：

  ```
	w=-1885098880

  ```



