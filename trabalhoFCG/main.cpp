#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include "ImageClass.h"


ImageClass Image, NewImage;

// fun��o para chamar a imagem de fundo
void desenhaFundo(void) {
    // Cria um objeto image
    int imagemCima, imagemBaixo;

    imagemCima = Image.Load("C:\\Users\\Vit�ria\\git\\FinalProject_FCG\\trabalhoFCG\\cima.png");
    imagemBaixo = Image.Load("C:\\Users\\Vit�ria\\git\\FinalProject_FCG\\trabalhoFCG\\baixo.png");

    if (!imagemCima || !imagemBaixo)
    {
        //printf("Uma das imagens n�o foi encontrada. Verifique o nome dos respectivos arquivos.\n");
       // printf("Pressione ENTRE para encerrar.");
        //getchar();
        exit(1);
    }
    else printf ("Imagens carregadas!\n");
}


// Fun��o callback chamada para fazer o desenho
void Desenha(void)
{
	//Limpa a janela de visualiza��o com a cor de fundo especificada
	glClear(GL_COLOR_BUFFER_BIT);

	//Executa os comandos OpenGL
	glFlush();
}

// Inicializa par�metros de rendering
void Inicializa (void)
{
    // Define a cor de fundo da janela de visualiza��o como preta
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
