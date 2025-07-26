# Makefile for Compiling and Running C Exercises

# Define ANSI escape codes for colors
# These variables make it easier to add color to your output
GREEN = \033[0;32m
BLUE = \033[0;34m
NC = \033[0m # No Color - resets the text color

# Define the C source files
# This list specifies all the .c files that this Makefile will handle
C_FILES = exercise01.c exercise02.c exercise03.c exercise04.c \
          exercise05.c exercise06.c exercise07.c exercise08.c

# The 'all' target is the default target that runs when you simply type 'make'
# It depends on each individual exercise target, ensuring they are compiled and run
all: exercise01 exercise02 exercise03 exercise04 exercise05 exercise06 exercise07 exercise08

# --- Individual Exercise Targets ---
# Each target below compiles its respective .c file and then executes it.
#
# $@ refers to the name of the target (e.g., 'exercise01')
# $< refers to the first prerequisite (e.g., 'exercise01.c')
#
# @ before a command prevents the command itself from being printed,
# only showing the output of the command.

exercise01: exercise01.c
	@echo "$(BLUE)*** Compiling exercise01.c ***$(NC)" # Print a blue message for compilation
	@gcc $< -o $@ # Compile exercise01.c into an executable named exercise01
	@echo "$(GREEN)*** Running exercise01 ***$(NC)"   # Print a green message for execution
	@./$@ # Execute the compiled program
	@echo "" # Print an empty line for better separation in the output

exercise02: exercise02.c
	@echo "$(BLUE)*** Compiling exercise02.c ***$(NC)"
	@gcc $< -o $@
	@echo "$(GREEN)*** Running exercise02 ***$(NC)"
	@./$@
	@echo ""

exercise03: exercise03.c
	@echo "$(BLUE)*** Compiling exercise03.c ***$(NC)"
	@gcc $< -o $@
	@echo "$(GREEN)*** Running exercise03 ***$(NC)"
	@./$@
	@echo ""

exercise04: exercise04.c
	@echo "$(BLUE)*** Compiling exercise04.c ***$(NC)"
	@gcc $< -o $@
	@echo "$(GREEN)*** Running exercise04 ***$(NC)"
	@./$@
	@echo ""

exercise05: exercise05.c
	@echo "$(BLUE)*** Compiling exercise05.c ***$(NC)"
	@gcc $< -o $@
	@echo "$(GREEN)*** Running exercise05 ***$(NC)"
	@./$@
	@echo ""

exercise06: exercise06.c
	@echo "$(BLUE)*** Compiling exercise06.c ***$(NC)"
	@gcc $< -o $@
	@echo "$(GREEN)*** Running exercise06 ***$(NC)"
	@./$@
	@echo ""

exercise07: exercise07.c
	@echo "$(BLUE)*** Compiling exercise07.c ***$(NC)"
	@gcc $< -o $@
	@echo "$(GREEN)*** Running exercise07 ***$(NC)"
	@./$@
	@echo ""

exercise08: exercise08.c
	@echo "$(BLUE)*** Compiling exercise08.c ***$(NC)"
	@gcc $< -o $@
	@echo "$(GREEN)*** Running exercise08 with a sample argument ***$(NC)"
	@./$@ "Hello world from Makefile" # Exercise08 needs an argument, so we provide one here
	@echo ""

# The 'clean' target removes all compiled executable files.
# This helps keep your directory tidy.
# rm -f: 'rm' for remove, '-f' for force (don't prompt for confirmation)
clean:
	@echo "$(BLUE)*** Cleaning up compiled files ***$(NC)"
	rm -f exercise01 exercise02 exercise03 exercise04 \
          exercise05 exercise06 exercise07 exercise08
	@echo "$(GREEN)*** Clean up complete ***$(NC)"

# .PHONY declares targets that are not actual files.
# This prevents make from getting confused if a file with the same name exists.
.PHONY: all clean exercise01 exercise02 exercise03 exercise04 \
        exercise05 exercise06 exercise07 exercise08
