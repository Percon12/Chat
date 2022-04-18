#ifdef ERROR_H
#define ERROR_H

//Alerta erros na criação de sockets 
void errorSocket();
//Alerta erros na criação de sockets 
void errorConnection();
//Alerta erros durante a recepção de dados
void errorReceiver();
//Alerta erros durante a associação de porta
void errorBind();
//Alerta erros durante o inicio da escuta de uma conexão
void errorListen();
//Alerta erros durante a abertura de arquivo
void errorOpenFile();

#endif