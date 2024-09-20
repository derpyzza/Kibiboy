CC = clang++
PROGNAME = Kibiboy
PROJECT = Project
SRC = ../$(PROJECT)/$(PROGNAME)
BIN = ../bin

EXEC = $(BIN)/$(PROGNAME)

CFLAGS := -Wall -pedantic
LDFLAGS := -lSDL2 -llua
INCFLAGS := -I. -I$(SRC) -I$(SRC)/KibiLibrary/

SRC_FILES := $(wildcard $(SRC)/*.cpp) $(wildcard $(SRC)/**/*.cpp) $(wildcard $(SRC)/**/**/*.cpp)
OBJ_FILES := $(patsubst $(SRC)/$(notdir %.cpp), $(BIN)/%.o, $(SRC_FILES))
# OBJ_FILES := $(addprefix $(BIN)/, $(notdir $(SRC_FILES:%.cpp=%.o)))

# $(BIN):
# 	mkdir -p $(BIN)

all: debug

debug release: $(EXEC)

release:

debug: CFLAGS += -g


$(BIN)/%.o: $(SRC)/%.cpp
	@mkdir -p `dirname $@`
	$(CC) $^ -c -o $@ $(CFLAGS) $(INCFLAGS)

$(EXEC): $(OBJ_FILES)
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS) $(INCFLAGS)

run: $(EXEC)
	$(EXEC)

clean:
	rm -rf $(BIN)/*

