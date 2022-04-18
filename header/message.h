#ifndef MESSAGE_H
#define MESSAGE_H

//Enumerador para os tipos de mensagens trocadas.	
enum tag{
	USERNAME,
	INVALIDUSERNAME,
	ACTIVEUSERS,
	CONNECTED,
	MESSAGECHAT,
	UPDATECHAT,
	FINISHED,
	CLOSE
};

//Essa função recebe um conteúdo e um tipo de mensagem, assim gera uma string pronta para ser enviada através do método send().
char* generateMessage(char *value, int type, int isServer);

//Atenção: funções modificam o ponteiro recebido como parâmetro
//Essa função recebe uma string e retorna somente o seu tipo.
int checkKindMessage(char *bufferRcv, int isServer);

//Atenção: funções modificam o ponteiro recebido como parâmetro.
//Essa função recebe uma mensagem e retorna somente o seu conteúdo.
char* checkMessage(char *bufferRcv);

#endif