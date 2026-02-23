export TMPDIR = $(CURDIR)/tmp
export TMP = $(CURDIR)/tmp
export TEMP = $(CURDIR)/tmp

CC = gcc
CFLAGS = -Wall -Wextra -std=c11

SRC = main.c \
      average_grade.c \
      grade_display.c \
      highest_grade.c \
      letter_grade.c \
      lowest_grade.c \
      pass_fail_rate.c \
      print.c \
      studentorder.c \
      User_Input.c

OBJ = $(SRC:.c=.o)
TARGET = main.exe

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

rebuild: clean $(TARGET)

run: $(TARGET)
	$(TARGET)