
main := xor 
objs := xor.o 
cc   := gcc
flag := 
opt  := 
link := $(cc) $(opt) $(flags)

#----------------------------------------------

.PHONY: default_target
default_target: $(main)

#----------------------------------------------

.PHONY: all
all: clean 
all: default_target

#----------------------------------------------

.PHONY: clean
clean: FORCE
	@echo " "
	@echo "...removing all objs files" 
	@echo " "
	rm -rf *.o
	rm -rf $(main)
	@echo " "

#----------------------------------------------

.PHONY: FORCE
FORCE:
 
#----------------------------------------------

$(main): $(objs)
	@echo " "
	@echo "...linking objs to " $@ " using: " $(link)
	@echo " "
	$(link) -o $@ $^
	@echo " "
	@echo "..."$@" compilation successfull. "
	@echo " "

#----------------------------------------------

%.o: %.c
	@echo " "
	$(cc) $(opt) $(flags) -c $<
