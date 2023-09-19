CXX = g++
LDFLAGS =
BLDDIR = .
INCDIR = $(BLDDIR)/inc
SRCDIR = $(BLDDIR)/src
OBJDIR = $(BLDDIR)/obj
ARGDIR = $(BLDDIR)/args
CXXFLAGS = -c -Wall -I$(INCDIR) -g
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRC))
EXE = main

.PHONY: all clean

all: clean $(EXE) run compare

$(EXE): $(OBJ)
	$(CXX) $(LDFLAGS) $(OBJ) -o $(EXE)

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	-rm -f $(OBJDIR)/*.o $(EXE)

run:
	./$(EXE) < $(ARGDIR)/input > $(ARGDIR)/output

compare:
	diff -p $(ARGDIR)/output $(ARGDIR)/expected

build:
	@echo "\033[1;34mBuilding Folder Structure...\033[0m"
	@mkdir -p $(INCDIR) $(SRCDIR)
	@echo "#include <bits/stdc++.h>" > $(SRCDIR)/main.cpp
	@echo "" >> $(SRCDIR)/main.cpp
	@echo "using namespace std;" >> $(SRCDIR)/main.cpp
	@echo "" >> $(SRCDIR)/main.cpp
	@echo "int main() {" >> $(SRCDIR)/main.cpp
	@echo "    cout << \"Hello, World!\" << endl;" >> $(SRCDIR)/main.cpp
	@echo "    return 0;" >> $(SRCDIR)/main.cpp
	@echo "}" >> $(SRCDIR)/main.cpp
	@echo ""
	@echo "\033[1;34mBuilding .editorconfig and .clang-format...\033[0m"
	@echo ""
	@echo "root = true" > .editorconfig
	@echo "" >> .editorconfig
	@echo "[*]" >> .editorconfig
	@echo "indent_style = space" >> .editorconfig
	@echo "indent_size = 2" >> .editorconfig
	@echo "end_of_line = lf" >> .editorconfig
	@echo "charset = utf-8" >> .editorconfig
	@echo "trim_trailing_whitespace = true" >> .editorconfig
	@echo "insert_final_newline = true" >> .editorconfig
	@echo "BasedOnStyle: LLVM" > .clang-format
	@echo "IndentWidth: 2" >> .clang-format
	@echo "UseTab: Never" >> .clang-format
	@echo "\033[1;34mBuilding arguments folder ...\033[0m"
	@mkdir -p $(ARGDIR)
	@echo "" >> $(ARGDIR)/input
	@echo "" >> $(ARGDIR)/expected
	@echo ""

	@echo "\033[1;32mBuilded!\033[0m"
