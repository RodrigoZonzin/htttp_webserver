all: 
	gcc -pthread server.c -o server

clean: 
	rm server

push:
	git add .
	git commit -m "commit de $(shell date +%Y/%m/%d)"
	git push