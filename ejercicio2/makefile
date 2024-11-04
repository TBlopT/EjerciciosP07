# Nombre del compilador
CXX = g++
# Opciones de compilación
CXXFLAGS = -Wall -Wextra -g

# Nombre del ejecutable
TARGET = fibonacci
# Archivo fuente
SRC = fibonacci.cc
# Archivo objeto
OBJ = $(SRC:.cc=.o)

# Regla principal
all: $(TARGET)

# Regla para enlazar el ejecutable
$(TARGET): $(OBJ)
	$(CXX) -o $@ $^

# Regla para compilar el archivo objeto
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

# Regla para limpiar los archivos generados
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJ)

