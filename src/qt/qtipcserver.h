#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define schupper1337<CoinName>Fickschnitzel-Qt message queue name
#define BITCOINURI_QUEUE_NAME "schupper1337<CoinName>FickschnitzelURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
