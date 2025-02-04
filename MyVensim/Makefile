# Nome dos executáveis
TARGET = programa
UNIT_TEST_TARGET = unittests

# Diretórios
SRC_DIR = src
TEST_DIR = test
TEST_FUNC_DIR = $(TEST_DIR)/funcional
TEST_UNIT_DIR = $(TEST_DIR)/unit

# Arquivos fonte principais
SRC_FILES = $(SRC_DIR)/Flow.cpp \
            $(SRC_DIR)/ExponentialFlow.cpp \
            $(SRC_DIR)/LogisticFlow.cpp \
            $(SRC_DIR)/System.cpp \
            $(SRC_DIR)/Model.cpp

# Arquivos de testes funcionais
TEST_FUNC_FILES = $(TEST_FUNC_DIR)/funcional_tests.cpp \
                  $(TEST_FUNC_DIR)/main.cpp

# Arquivos de testes unitários
TEST_UNIT_FILES = $(TEST_UNIT_DIR)/unit_flow.cpp \
                  $(TEST_UNIT_DIR)/unit_model.cpp \
                  $(TEST_UNIT_DIR)/unit_system.cpp \
                  $(TEST_UNIT_DIR)/main.cpp

# Gerando arquivos objeto (substituindo .cpp por .o)
OBJ_FILES = $(SRC_FILES:.cpp=.o)
TEST_FUNC_OBJ = $(TEST_FUNC_FILES:.cpp=.o)
TEST_UNIT_OBJ = $(TEST_UNIT_FILES:.cpp=.o)

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -std=c++17 -I$(SRC_DIR) -I$(TEST_FUNC_DIR) -I$(TEST_UNIT_DIR)

# Regra padrão: compilar tudo
all: $(TARGET) $(UNIT_TEST_TARGET)

# Compilar o programa principal
$(TARGET): $(OBJ_FILES) $(TEST_FUNC_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilar os testes unitários separadamente
$(UNIT_TEST_TARGET): $(OBJ_FILES) $(TEST_UNIT_OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regra para compilar arquivos .cpp em .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos objeto e binários
clean:
	rm -f $(OBJ_FILES) $(TEST_FUNC_OBJ) $(TEST_UNIT_OBJ) $(TARGET) $(UNIT_TEST_TARGET)

# Regra para recompilar do zero
rebuild: clean all
