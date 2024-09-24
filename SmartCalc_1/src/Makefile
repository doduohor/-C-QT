# .PHONY: all clean test s21_calc.a s21_calc.o check gcov_report style run install uninstall dist

# Директории
SRC_DIR = ./backend
SRC_FRONT = ./frontend/calculator
TEX_FILE = readme.tex

# Компилятор C
CC = gcc

# Флаги компиляции
CFLAGS = -Wall -Werror -Wextra -std=c11

# Исходные файлы
FILES = $(SRC_DIR)/calculate.h $(SRC_DIR)/calculate.c 

#Тип операционной системы
OS = $(shell uname)

#Архивирование проекта
TAR = calculate.tar.gz

#Зависимости ОС
ifeq ($(OS), Linux)
	LIBS = -lcheck -lm -pthread -lrt -lsubunit
	OPEN_CMD = xdg-open
	MEM_CHECK = valgrind --tool=memcheck --trace-children=yes --track-origins=yes --leak-check=full
	QMAKE = /opt/Qt/6.5.3/gcc_64/bin/qmake
else
	LIBS = -lcheck
	OPEN_CMD = open
	MEM_CHECK = leaks --atExit -- ./s21_test
	QMAKE = qmake
endif


all: clean install

install:
	mkdir ./frontend/build_project
	cd ./frontend && $(QMAKE) -o ./build_project ./calculate.pro 
	cd ./frontend/build_project && make all && rm  *.o

uninstall: clean

dvi:
	cat readme.md

dist: clean install
	tar -zcf $(TAR) frontend/build_project

test: s21_calc.a
	$(CC) $(CFLAGS) $(SRC_DIR)/tests/tests.c s21_calc.a -o s21_test $(LIBS)
	./s21_test


# Объектные файлы (автоматически сгенерируются из исходных файлов)
OBJECTS = $(SOURCES:.c=.o)

# Правило для компиляции исходных файлов в объектные файлы
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


s21_calc.a: s21_calc.o
	ar rcs s21_calc.a *.o
	ranlib s21_calc.a

s21_calc.o:
	$(CC) $(CFLAGS) -c $(FILES)

gcov_flag:
	$(eval CFLAGS += --coverage)

gcov_report: clean gcov_flag test
	mkdir -p gcov
	lcov --capture --directory . --output-file coverage.info
	genhtml coverage.info --output-directory gcov
	open ./gcov/index.html

check:
	make test
	CK_FORK=no $(MEM_CHECK) ./s21_test
	make clean


clean:
	rm -rf *.o *.a *.gcda *.gcno *.info s21_test report gcov *.out *tar.gz frontend/build_project/* .clang-format backend/*.gch ./frontend/build_project
	cd ./frontend/ && rm -rf calculate
