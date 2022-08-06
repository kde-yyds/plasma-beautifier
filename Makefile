plasma-beautifier:plasma-beautifier.cpp
	g++ plasma-beautifier.cpp -o plasma-beautifier

install:
	mkdir -p /usr/lib/plasma-beautifier/
	cp -r plasma-beautifier /usr/lib/plasma-beautifier/
	cp -r data/ /usr/lib/plasma-beautifier/
	cp -r plasma-beautifier /usr/bin

remove:
	rm -rf /usr/lib/plasma-beautifier/
