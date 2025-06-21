#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define LINHAS 500
#define PALAVRAS 256

typedef struct {
    char* chars;
    int size;
} erow;

typedef struct {
    int cursor_x, cursor_y; // posição do cursor no arquivo
    int screen_rows, screen_cols; // tamanho da tela do terminal
    int num_rows;
    erow* row; // array de linhas (o nosso buffer)
    char* filename; // nome do arquivo 
} editorconfig;

void captura_texto(char* chars);
void abrir_arquivo(char* filename);
void salvar_arquivo(char* filename);

#endif