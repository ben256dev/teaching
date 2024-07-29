printf 'building... '
gcc changjae.c -o changjae.exe

if [ $? -eq 0 ]; then
	printf 'succeeded!\n'
fi
