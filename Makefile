all:
  gcc main.c clz.c endian.c Rotate.c Parity.c -o main
clean:
  rm -f main 
