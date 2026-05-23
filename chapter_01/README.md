
## Para ejecutar el archivo y correrlo
```bash
  clang file.c -o file
  ./file
```

## Automatizado con .vscode tasks.json para macOS
  Cmd + Shift + B

## Eso muestra librerías dinámicas enlazadas.
```bash
otool -tV main
```

## Eso muestra librerías dinámicas enlazadas.
```bash
otool -L file
```


## Flujo REAL interno
main.c
   ↓
Preprocessor    -> #include #define cabeceras 
   ↓
Compiler        -> Convierte C → assembly.
   ↓
Assembly.       
   ↓
Assembler       -> Assembly → machine code.
   ↓
Object file
   ↓
Linker          -> Conecta:libc, printf, funciones externas, startup code
   ↓
Executable