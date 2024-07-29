printf 'building... '
gcc changjae.c -lncursesw -ldl -lpthread -lm -o changjae.exe

if [ $? -eq 0 ]; then
	printf 'succeeded!\n'
fi
