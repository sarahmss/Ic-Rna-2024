.PHONY: all clean Exponential Gaussian HoleEffect Linear Original Power Spherical

# Diretórios contendo os notebooks 
DIRS =  Exponential Gaussian HoleEffect Linear Original Power Spherical

# executar todos os notebooks em todas as pastas
all: $(DIRS)

# limpar todos os diretórios
clean: $(DIRS:%=clean-%)

# para cada diretório
$(DIRS):
	@echo "Executando notebooks no diretório $@"
	@cd $@ && $(MAKE) execute_notebooks

# limpar cada diretório
$(DIRS:%=clean-%):
	@dir=$(@:clean-%=%) && echo "Limpando diretório $$dir" && cd $$dir && $(MAKE) clean
