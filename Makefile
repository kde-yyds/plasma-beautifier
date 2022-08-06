plasma-beautifier:plasma-beautifier.cpp
	g++ plasma-beautifier.cpp -o plasma-beautifier

install:
	mkdir -p /usr/lib/plasma-beautifier/
	cp -r plasma-beautifier /usr/lib/plasma-beautifier/
	cp -r data/ /usr/lib/plasma-beautifier/
	cp -r plasma-beautifier /usr/bin
	chmod a+r /usr
	chmod a+r /usr/lib
	chmod a+r /usr/lib/plasma-beautifier
	chmod a+r /usr/lib/plasma-beautifier/data/
	chmod a+r /usr/lib/plasma-beautifier/data/*

uninstall:
	rm -rf /usr/lib/plasma-beautifier/
	rm /usr/bin/plasma-beautifier
