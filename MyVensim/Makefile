# Nome do executável
TARGET = programa

# Diretórios
SRC_DIR = src
TEST_DIR = test
TEST_FUNC_DIR = $(TEST_DIR)/funcional

# Arquivos fonte
SRC_FILES = $(SRC_DIR)/fluxo.cpp \
            $(SRC_DIR)/fluxoExponencial.cpp \
            $(SRC_DIR)/fluxoLogistico.cpp \
            $(SRC_DIR)/sistema.cpp \
            $(SRC_DIR)/modelo.cpp \
            $(TEST_FUNC_DIR)/funcional_tests.cpp \
            $(TEST_FUNC_DIR)/main.cpp

# Arquivos objeto (substituindo .cpp por .o)
OBJ_FILES = $(SRC_FILES:.cpp=.o)

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -std=c++17 -I$(SRC_DIR) -I$(TEST_FUNC_DIR)

# Regra padrão
all: $(TARGET)

# Regra para criar o executável
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regra para compilar os arquivos .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos intermediários
clean:
	rm -f $(OBJ_FILES) $(TARGET)

# Regra para limpar e recompilar do zero
rebuild: clean all