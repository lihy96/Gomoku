#ifndef GAMESERVER_H
#define GAMESERVER_H

#include "clientlinkdialog.h"
#include "askagree.h"
#include "renshuqingqiu.h"
#include <QMainWindow>
#include <QPoint>
#include <vector>
#include <QPainter>
#include <QColor>
#include <QDebug>
#include <QKeyEvent>
#include <QFileDialog>
#include <QSound>
#include <string>
#include <QLineEdit>
#include <QGridLayout>
#include <QHostInfo>
#include <QHostAddress>
#include <QNetworkInterface>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDateTime>
#include <QTime>
#include <QMessageBox>
#include <QTimer>

namespace Ui {
class GameServer;
}

class GameServer : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameServer(int isWhat,QWidget *parent = 0);
    ~GameServer();

signals:
    void winned(int);
public slots:
    void slotWinned(int);

    //客户端部分的初始化
    void slotClientConnnected();//客户端连接建立触发
    void slotClientDisconnected();//客户端连接断开触发
    void toUpdateClient();//处理更新信息进行更新！！！！！！！！！！！！！！！！！！
    void clientSendToServer(QString);

    //服务器部分的初始化，在initServer之后顺次执行
    void slotServerAcceptConnection();
    void toUpdateServer();
    void serverSentToClient(QString);

    void sendToAnother(QString info);

private:
    Ui::GameServer *ui;
    int number;//棋盘的大小为14，线的总数为15
    int length;//棋盘的边长为。。。
    QPoint zsPoint;//棋盘左上角的点
    int chess[20][20];//记录棋子,
    int mycolor,othercolor;

    QPoint findPoint(int x,int y);//坐标转像素
    QPoint findXY(int x,int y);//像素转坐标

    //网络部分
    int port;
    QHostAddress getLocalHostIP();//获取本机IP
    QString ClientLinkIP;//客户端将要连接的IP


    int isServerOrClient;//1:主机，2：客户端
    void initServer();//如果是主机，那么初始化
    void initClient();//初始化客户端
    //TCP部分(服务器)
    QTcpServer  *serverListenSocket;//for server
    QTcpSocket  *serverReadWriteSocket;//for server
    //TCP部分(客户端)
    QTcpSocket *clientReadWriteSocket;//for client
    QHostAddress *clientServerIP;
    //结束

public:
    void mousePressEvent ( QMouseEvent * e );//鼠标按下事件
    void paintEvent(QPaintEvent *ev);
    void paintChessBoard(QPainter*);//画棋盘
    void paintChessInfo(QPainter*);//根据chess画棋子
    void paintPoint(QPainter*);

    void initChessBoard();//对棋盘进行必要的初始化

    int isYourTurn;//确定谁该走
    int isWinner;//判断是否赢!!!!!!!!!!!!!!!!!!!!!!
    int judgeIsWinner(int color,int x,int y);//判断赢,0:未赢，1：黑赢；2：白赢

    QString calcuInfoWaitingToSend();//在操作之后计算出待发字符串

private slots:
    void on_pushButton_open_clicked();
    void on_pushButton_save_clicked();
    void on_pushButton_create_clicked();
    void on_pushButton_add_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_renshu_clicked();

    void on_pushButton_cry_clicked();

    void on_pushButton_closeroom_clicked();

public://一下开始对收到的数据进行解析
    void decodeAndUpdate(QString msg);

    void afterFail();//失败之后要做的
    void afterWin();//！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！

    //计时部分
    QTimer *timeSmall;//20s倒计时
    int smallTime;
    QTimer *timeBig;//总时间
    int bigTime;
    //int anotherBigTime;//用于记录对方的用时
    void initTime();
    void yourTimeOut();
    void pauseTime();
    void startTime();
public slots:
    void slotTimeSmallout();
    void slotTimeBigout();

private:
    //准备开始部分
    int iReady;
    int youReady;
    bool readyed;//在准备好之前只能有进入房间和准备这几个操作，其他的要在最后封闭！！！！！！！！！！！！！！！！！
public slots:
    void slotCanStart();//双方正式开始
signals:
    void canStart();
public:
    void stopMatch();

    //悔棋部分
    int huiQiCnt;
    void tryHuiQi();
    void agreeHuiQi();
    void selfHuiQi();
    std::vector<QPoint> myvc;
    std::vector<QPoint> hisvc;

    //残局打开
    void openOld();
    void openMyselfOld(QString msg);


    //添加图标和音乐
    void addPic();
    void addMusic();
    QSound *winMusic;
    QSound *loseMusic;

    void pauseButton();
    void startButton();
};

#endif // GAMESERVER_H
