printf 'building... '
gcc changjae.c -o changjae.exe
./changjae.exe
rm *.exe
if [ $? -eq 0 ]; then
	printf 'succeeded!\n'
fi
