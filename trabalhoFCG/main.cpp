#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include "ImageClass.h"


ImageClass Image, NewImage;

// função para chamar a imagem de fundo
void desenhaFundo(void) {
    // Cria um objeto image
    int imagemCima, imagemBaixo;

    imagemCima = Image.Load("C:\\Users\\Vitória\\git\\FinalProject_FCG\\trabalhoFCG\\cima.png");
    imagemBaixo = Image.Load("C:\\Users\\Vitória\\git\\FinalProject_FCG\\trabalhoFCG\\baixo.png");

    if (!imagemCima || !imagemBaixo)
    {
        //printf("Uma das imagens não foi encontrada. Verifique o nome dos respectivos arquivos.\n");
       // printf("Pressione ENTRE para encerrar.");
        //getchar();
        exit(1);
    }
    else printf ("Imagens carregadas!\n");
}


// Função callback chamada para fazer o desenho
void Desenha(void)
{
	//Limpa a janela de visualização com a cor de fundo especificada
	glClear(GL_COLOR_BUFFER_BIT);

	//Executa os comandos OpenGL
	glFlush();
}

// Inicializa parâmetros de rendering
void Inicializa (void)
{
    // Define a cor de fundo da janela de visualização como preta
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

// Programa Principal
int main(void)
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("World Machine Terrain");
	glutDisplayFunc(Desenha);
	Inicializa();
	glutMainLoop();
}
