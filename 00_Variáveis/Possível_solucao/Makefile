
#EXERCISE_01_NAME = exercise01

# Define the exercise names
EXERCISES = exercise01 exercise02 exercise03 exercise04 exercise05 exercise06 exercise07 exercise08

exercise05_ARG = 60
exercise06_ARG = -1234
exercise07_ARG = Batata
exercise08_ARG = TESTE de mensagem

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

# Rule to compile .c files to .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to create executable for each exercise
$(EXERCISES): %: %.o
	$(CC) $< -o $@

# Rule to execute each exercise
run: $(EXERCISES)
	@for exercise in $(EXERCISES); do \
		echo "\033[1;34mExecuting $$exercise:\033[0m"; \
		./$$exercise $($$exercise_ARG); \
		echo "\033[1;32m----------------------------------------\033[0m"; \
	done

# Rule to clean up object files and executables
clean:
	rm -f $(EXERCISES) *.o

# Phony targets
.PHONY: clean run $(EXERCISES)