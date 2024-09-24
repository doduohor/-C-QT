# Имя целевого исполняемого файла
TARGET = calculator

# Компилятор C
CC = gcc

# Флаги компиляции
CFLAGS = -Wall -Werror -Wextra -std=c11

# Библиотеки для линковки
LIBS = -lcheck -lm -lpthread 

# Директории
SRC_DIR = .

# Исходные файлы
SOURCES = $(SRC_DIR)/calculator.h $(SRC_DIR)/calculator.c 

# Объектные файлы (автоматически сгенерируются из исходных файлов)
OBJECTS = $(SOURCES:.c=.o)

# Цель по умолчанию - "all"
all: $(TARGET)

# Правило для сборки целевого файла
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LIBS)

# Правило для компиляции исходных файлов в объектные файлы
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Цель "clean" для очистки сгенерированных файлов
clean:
	rm -f $(SRC_DIR)/*.o  $(TARGET) .clang-format a.out *.gch


style:
	cp ../../materials/linters/.clang-format .
	clang-format -n $(shell find $(SRC_DIR) -name "*.c" -o -name "*.h")

leaks: all
	leaks -atExit -- ./calculator