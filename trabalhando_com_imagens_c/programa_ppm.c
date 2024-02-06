#include <stdio.h>

typedef struct {
	int r, g, b;
} pixel;

pixel imagem[595][595];

int main() {
	char code[3], comentario[100];
	int lin, col, max;
	int i, j;

	scanf("%s", code);
	getchar();
	scanf("%[^\n]s", comentario); // [^\n] para espaços em branco
	getchar();
	scanf("%d%d%d", &col, &lin, &max);

	for (i=0; i<lin; i++)
		for (j=0; j<col; j++)
			scanf("%d%d%d", &imagem[i][j].r, &imagem[i][j].g, &imagem[i][j].b);

	printf("%s", code);
	printf("%s[^\n]", comentario); // [^\n] para espaços em branco
	printf("%d %d\n%d\n", col, lin, max);

	for (i=0; i<lin; i++)
		for (j=0; j<col; j++)
			printf("%d, %d, %d", imagem[i][j].r, imagem[i][j].g, imagem[i][j].b);

	return 0;
}