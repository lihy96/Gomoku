#define PORT 8011
#define INTERVALX 40
#define INTERVALY 55
#define LENGTH 504 //14*36
#define BOARDCOLOR QColor(209,168,139,255)

#define BLACKCHESS 1
#define WHITECHESS 2

#include "gameserver.h"
#include "ui_gameserver.h"

GameServer::GameServer(int isWhat,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameServer)
{
    ui->setupUi(this);
    port = PORT;
    iReady = youReady = readyed = 0;
    initChessBoard();
    initTime();
    huiQiCnt = 0;
    connect(this,SIGNAL(canStart()),this,SLOT(slotCanStart()));
    connect(this,SIGNAL(winned(int)),this,SLOT(slotWinned(int)));
    addPic();
    addMusic();
    /*chess[0][1]=chess[0][2]=chess[0][3]=chess[0][4]=1;
    chess[1][0]=chess[2][0]=chess[3][0]=chess[4][0]=chess[5][0]=2;
    chess[4][4]=chess[5][3]=chess[6][2]=chess[7][1]=1;
    //chess[5][5]=chess[5][6]
    chess[3][5] = 1;
    //qDebug() << judgeIsWinner(1,3,5);*/
    //*********
    isServerOrClient = isWhat;
    qDebug() << isWhat;
    if(isServerOrClient==1){
        ui->pushButton_add->hide();
    }
    else if(isServerOrClient==2){

        ui->pushButton_create->hide();
        ui->pushButton_closeroom->hide();
        ui->label->setText(tr("等待主机开始呦"));
        ui->pushButton_start->setEnabled(false);
    }

    update();
}
void GameServer::slotCanStart()//正式开始
{
    readyed = 1;
    for(int i = 0;i < 15;i++){
        for(int j = 0;j < 15;j++){
            chess[i][j] = 0;
        }
    }
    qDebug() << "ready";
}

void GameServer::stopMatch()//终止比赛！！！！！！！！！！！！！！！
{
    readyed = 0;
    iReady = 0;
    pauseTime();
    //QMessageBox::information(this,tr("比赛停止！"),tr("比赛停止！"));
    QString str = tr("比赛终止,用时")+QString::number(bigTime)+tr("s,");
    //QMessageBox::information(this,tr("停止"),str);
    RenshuQingqiu *dia = new RenshuQingqiu(str,this);
    dia->show();
    dia->exec();
}



GameServer::~GameServer()
{
    delete ui;
}

void GameServer::slotWinned(int)
{
    afterWin();
}

void GameServer::slotClientConnnected()
{
    qDebug() << "client Connected";
}

void GameServer::slotClientDisconnected()
{
    qDebug() << "Dis Connected";
}


void GameServer::paintEvent(QPaintEvent *ev)
{
    QPainter myPaint(this);
    paintChessBoard(&myPaint);
    paintPoint(&myPaint);
    paintChessInfo(&myPaint);

}

void GameServer::paintChessBoard(QPainter* myPaint)
{
    int extent = 0.5*length/number;
    QPoint yxPoint(zsPoint.x()+length+extent,zsPoint.y()+length+extent);
    QPoint tmpzs(zsPoint.x()-extent,zsPoint.y()-extent);

    myPaint->setPen(Qt::black);
    QBrush brush(BOARDCOLOR);
    myPaint->setBrush(brush);
    myPaint->drawRect(QRect(tmpzs,yxPoint));

    for(int i = 0;i <= length;i += length/number){
         myPaint->drawLine(i+INTERVALX,INTERVALY,i+INTERVALX,length+INTERVALY);
         myPaint->drawLine(INTERVALX,i+INTERVALY,length+INTERVALX,i+INTERVALY);
    }

}

void GameServer::paintChessInfo(QPainter *myPaint)
{
    myPaint->setPen(BOARDCOLOR);
    int extent = 0.4*length/number;
    for(int i = 0;i < 15;i++){
        for(int j = 0;j < 15;j++){
            if(!chess[i][j])
                continue;
            if(chess[i][j]==BLACKCHESS){
                myPaint->setBrush(Qt::black);
                myPaint->drawEllipse(findPoint(i,j),extent,extent);

            }
            else if(chess[i][j]==WHITECHESS){
                myPaint->setBrush(Qt::white);
                myPaint->drawEllipse(findPoint(i,j),extent,extent);
            }
            else
                qDebug() << "ERROR PAINT CHESS";
        }
    }

}

void GameServer::paintPoint(QPainter *myPaint)
{
    myPaint->setPen(Qt::black);
    myPaint->setBrush(Qt::black);
    int r = 3;
    myPaint->drawEllipse(findPoint(7,7),r,r);
    myPaint->drawEllipse(findPoint(3,3),r,r);
    myPaint->drawEllipse(findPoint(3,11),r,r);
    myPaint->drawEllipse(findPoint(11,3),r,r);
    myPaint->drawEllipse(findPoint(11,11),r,r);
}

void GameServer::initChessBoard()
{
    number = 14;//设定棋盘为15乘15
    isYourTurn = 0;
    isWinner = 0;
    length = LENGTH;
    zsPoint.setX(INTERVALX);
    zsPoint.setY(INTERVALY);
    for(int i = 0;i < 15;i++)
        for(int j = 0;j < 15;j++){
            chess[i][j] = 0;
        }

}

int GameServer::judgeIsWinner(int color,int x,int y)
{
    //判断y
    int cnt = 0;
    for(int i = -4;i <= 4;i++){
        if(y+i >= 0 && chess[x][y+i]==color){
            cnt++;
        }
        else{
            cnt = 0;
        }
        if(cnt>=5){
            //emit winned(color);
            return color;
        }
    }
    //判断x
    cnt = 0;
    for(int i = -4;i <= 4;i++){
        if(x+i >= 0 && chess[x+i][y]==color){
            cnt++;
        }
        else{
            cnt = 0;
        }
        if(cnt>=5){
           // emit winned(color);
            return color;
        }
    }
    //判断斜线/
    cnt = 0;
    for(int i = -4;i <= 4;i++){
        if(x+i >= 0 && y+i >= 0 && chess[x+i][y+i]==color){
            cnt++;
        }
        else{
            cnt = 0;
        }
        if(cnt>=5){
           // emit winned(color);
            return color;
        }
    }
    //判断反斜线
    cnt = 0;
    for(int i = -4;i <= 4;i++){
        if(x+i >= 0 && y-i >= 0 && chess[x+i][y-i]==color){
            cnt++;
        }
        else{
            cnt = 0;
        }
        if(cnt>=5){
            //emit winned(color);
            return color;
        }
    }

    return 0;

}

QPoint GameServer::findPoint(int x, int y)
{
    return QPoint(x*length/number+INTERVALX,y*length/number+INTERVALY);
}

QPoint GameServer::findXY(int x, int y)
{
    int tmpx = (int)( (x-zsPoint.x()) * 1.0 / (length*1.0/number) + 0.5);
    int tmpy = (int)( (y-zsPoint.y()) * 1.0 / (length*1.0/number) + 0.5);
    return QPoint(tmpx,tmpy);
}



void GameServer::on_pushButton_open_clicked()
{
    RenshuQingqiu* dia = new RenshuQingqiu(tr("打开保留棋局？"),this);
    dia->show();
    dia->exec();
    if(dia->renshu==true){
        sendToAnother("dkcj");
    }
    else
        return;

}

void GameServer::on_pushButton_save_clicked()//打开存档文件
{
    RenshuQingqiu *dia = new RenshuQingqiu(tr("保存当前棋局？"),this);
    dia->show();
    dia->exec();
    if(dia->renshu==true){
        QMessageBox::information(this,tr("save"),tr("当前棋局已经保存"));
    }
    else
        return;

    QDateTime tmp = QDateTime::currentDateTime();
    QString date = tmp.toString("yyyy-MM-dd_hhmmss")+".txt";

    QFile file(date);
    file.open( QIODevice::ReadWrite | QIODevice::Text );
    file.close();
    if(file.open(QIODevice::ReadWrite)){
        QTextStream out(&file);
        QString info = "";
        std::string str = "";
        for(int i = 0;i < 15;i++){
            for(int j = 0;j <15;j++){
                str += '0'+chess[i][j];
            }
        }
        info = info.fromStdString(str);
        out<<info;

    }
    else{
        qDebug() << "cant open file";
        qDebug() << date;
    }


}


void GameServer::on_pushButton_create_clicked()
{
    isServerOrClient = 1;//标记现在是主机
    ui->pushButton_add->setEnabled(false);//客户端按钮停用

    AskAgree *dia = new AskAgree(tr("IP"),getLocalHostIP().toString(),this);
    dia->show();
    dia->exec();
    if(!dia->agree)
        return;

    ui->pushButton_create->setEnabled(false);
    initServer();//创建网络主机

}

QHostAddress GameServer::getLocalHostIP()
{
  QList<QHostAddress> AddressList = QNetworkInterface::allAddresses();
  QHostAddress result;
  foreach(QHostAddress address, AddressList){
      qDebug() << address;
      if(address.protocol() == QAbstractSocket::IPv4Protocol &&
         address != QHostAddress::Null &&
         address != QHostAddress::LocalHost){

          if (address.toString().contains("127.0.")){
            continue;
          }
          result = address;
          break;
      }
  }
  return result;
}



void GameServer::on_pushButton_add_clicked()
{
    isServerOrClient = 2;//标记现在是客户端
    ui->pushButton_create->setEnabled(false);//主机按钮停用
    ui->pushButton_closeroom->setEnabled(false);

    ClientLinkDialog* dia = new ClientLinkDialog(this);
    dia->show();
    dia->exec();
    ClientLinkIP = dia->clientLinkString;
    //qDebug() << ClientLinkIP;

    initClient();//创建客户端
}


void GameServer::initServer()
{
    //qDebug() << "start server but not connect";
    isServerOrClient = 1;
    isYourTurn = 1;//主机先走
    mycolor = 1;othercolor = 2;
    serverListenSocket =new QTcpServer;
    serverListenSocket->listen(QHostAddress::Any,port);
    connect(serverListenSocket,SIGNAL(newConnection()),this,SLOT(slotServerAcceptConnection()));
    //qDebug() << "end server init";

    //iReady = 1;
}

void GameServer::slotServerAcceptConnection()
{
    qDebug() << "server connected!";
    serverReadWriteSocket = serverListenSocket->nextPendingConnection();
    connect(serverReadWriteSocket,SIGNAL(readyRead()),this,SLOT(toUpdateServer()));
}



void GameServer::initClient()
{
    qDebug() << "initclient";
    isServerOrClient = 2;
    isYourTurn = 0;
    mycolor = 2;othercolor = 1;
    clientServerIP = new QHostAddress();
    clientServerIP->setAddress(ClientLinkIP);

    clientReadWriteSocket = new QTcpSocket(this);
    connect(clientReadWriteSocket,SIGNAL(connected()),this,SLOT(slotClientConnnected()));
    connect(clientReadWriteSocket,SIGNAL(disconnected()),this,SLOT(slotClientDisconnected()));
    connect(clientReadWriteSocket,SIGNAL(readyRead()),this,SLOT(toUpdateClient()));
    clientReadWriteSocket->connectToHost(*clientServerIP,port);
}
void GameServer::toUpdateClient()//客户端收到信息之后更新自己
{
    while(clientReadWriteSocket->bytesAvailable()>0){
        QByteArray datagram;
        datagram.resize(clientReadWriteSocket->bytesAvailable());
        clientReadWriteSocket->read(datagram.data(),datagram.size());
        QString msg = datagram.data();
        //qDebug() << "client recieve" << msg;
        decodeAndUpdate(msg);
    }
}
void GameServer::toUpdateServer()//服务器收到信息后更新自己
{
    while(serverReadWriteSocket->bytesAvailable()>0){
        QByteArray datagram;
        datagram.resize(serverReadWriteSocket->bytesAvailable());
        serverReadWriteSocket->read(datagram.data(),datagram.size());
        QString msg = datagram.data();
        decodeAndUpdate(msg);
        qDebug() << "server recieve" << msg;
    }
}

void GameServer::clientSendToServer(QString msg)//客户端发送消息
{
    qDebug() << "cli try to send";
    clientReadWriteSocket->write(msg.toLatin1(),msg.length());
    isYourTurn = 0;
    pauseTime();
}
void GameServer::serverSentToClient(QString msg)//服务器发送消息
{
    qDebug() << "server try to send";
    serverReadWriteSocket->write(msg.toLatin1(),msg.length());
    isYourTurn = 0;
    pauseTime();
}

void GameServer::sendToAnother(QString info)
{
    if(isServerOrClient==1){
        serverSentToClient(info);
    }
    else if(isServerOrClient==2){
        clientSendToServer(info);
    }
    else
        qDebug() << "error send to another";
    pauseButton();
}

void GameServer::mousePressEvent(QMouseEvent *e)
{

    int x = e->x();
    int y = e->y();
    if(findXY(x,y).x() < 0 || findXY(x,y).x() > 14 ||
        findXY(x,y).y() < 0 || findXY(x,y).y() > 14 ||
            e->x() < zsPoint.x()-0.5*length/number)
    {
        return;
    }
    if(!isYourTurn) return;
    if(!readyed) return;
    //开始处理下棋
    int xPos = findXY(x,y).x();int yPos = findXY(x,y).y();
    if(chess[xPos][yPos]) return;//防止重复落子
    chess[xPos][yPos] = mycolor;
    myvc.push_back(QPoint(xPos,yPos));//为了方便悔棋而对棋盘信息进行记录
    huiQiCnt = 0;//一旦下棋之后悔棋的数目就清零
    QString chessInfo = "1,"+QString::number(xPos)+","+
            QString::number(yPos)+","+QString::number(judgeIsWinner(mycolor,xPos,yPos));

   /*if(isServerOrClient==1){//如果是主机
        serverSentToClient(chessInfo);

   }
   else if(isServerOrClient==2){//如果是服务器
        clientSendToServer(chessInfo);
   }*/
   sendToAnother(chessInfo);

   if(judgeIsWinner(mycolor,xPos,yPos)){
       emit winned(mycolor);
   }


   update();

}



void GameServer::afterFail()
{
    pauseTime();
    qDebug() << "lose music";
    loseMusic->play();
    QString str = tr("Sorry! You Failed! 总用时：")+QString::number(bigTime)+tr("s");
    readyed = 0;//游戏结束，封闭所有下棋操作
    QMessageBox::information(this,tr("Your Failed"),str);
}

void GameServer::afterWin()
{
    pauseTime();
    winMusic->play();
    QString str = tr("Congratulations!")+tr("总用时：")+QString::number(bigTime)+tr("s");
    QMessageBox::information(this,tr("Winned"),str);

}

void GameServer::initTime()
{
    smallTime = 20;
    bigTime = 0;
    timeSmall = new QTimer(this);
    timeBig = new QTimer(this);
    connect(timeSmall,SIGNAL(timeout()),this,SLOT(slotTimeSmallout()));
    connect(timeBig,SIGNAL(timeout()),this,SLOT(slotTimeBigout()));
    ui->lcdNumber_zhu1->display(20);
    ui->lcdNumber_zhu2->display(0);

}

void GameServer::yourTimeOut()
{
    if(isServerOrClient==1){
        serverSentToClient("0");
    }
    else if(isServerOrClient==2){
        clientSendToServer("0");
    }
    ui->lcdNumber_zhu1->display(0);
}

void GameServer::pauseTime()
{
    ui->label->hide();
    if(timeBig->isActive())
        timeBig->stop();
    if(timeSmall->isActive())
        timeSmall->stop();
}

void GameServer::startTime()
{
    ui->label->setText(tr("轮到你啦~"));
    ui->label->show();
    timeBig->start(1000);
    timeSmall->start(1000);
}

void GameServer::slotTimeSmallout()
{
   ui->label->show();
   smallTime--;
   ui->lcdNumber_zhu1->display(smallTime);
   if(smallTime==0){
       yourTimeOut();
   }
}

void GameServer::slotTimeBigout()
{
    bigTime++;
    ui->lcdNumber_zhu2->display(bigTime);
}



void GameServer::decodeAndUpdate(QString msg)
{
    isYourTurn = 1;

    smallTime = 20;
    ui->lcdNumber_zhu1->display(20);
    if(readyed)
        startTime();


    startButton();
    //下期超时
    if(msg[0]=='0'){//如果对方没有下棋而超时
        qDebug() << "no chess be put";
        //自己可以显示一张图片来告知该自己走了！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
    }

    //对方已下
    int tmp = 0;
    if(msg[0]=='1'){
        QStringList list = msg.split(",");
        //如果是对方下了一个棋
        int x = list[1].toInt();
        int y = list[2].toInt();
        tmp = list[3].toInt();
        chess[x][y] = othercolor;
        hisvc.push_back(QPoint(x,y));
    }

    //对方准备好
    if(msg=="ready"&&iReady==1&&!readyed){
        readyed = 1;
        emit canStart();
        sendToAnother("ready");
    }


    update();

    if(msg[0]=='1'&&tmp){//如果已经输了
        afterFail();
    }


    if(msg=="renshu"){//请求认输

        if(timeBig->isActive()) timeBig->stop();//确认过程中停止时间记录

        RenshuQingqiu *dia = new RenshuQingqiu(tr("同意对方认输?"),this);
        dia->show();
        dia->exec();
        timeBig->start(1000);//等待过程停止记录结束

        if(dia->renshu==true){
            sendToAnother("tyrs");//发送同意结束信号
            stopMatch();
        }
        else{
            sendToAnother("btyrs");//不同意认输
        }
    }

    if(msg=="tyrs"){//同意认输
        stopMatch();
    }
    if(msg=="btyrs"){
        QMessageBox::information(this,tr("认输"),tr("对方不同意您认输！"));
    }

    if(msg=="huiqi"){//应答悔棋
        agreeHuiQi();
    }

    if(msg=="tyhq"){//同意悔棋
        QMessageBox::information(this,tr("同意悔棋"),tr("对方已同意"));
        selfHuiQi();
    }
    if(msg=="btyhq"){
        QMessageBox::information(this,tr("不同意悔棋"),tr("对方已拒绝"));
    }
    //**********************************************************************
    if(msg=="dkcj"){//应答残局打开
         RenshuQingqiu *dialog = new RenshuQingqiu(tr("同意打开残局？"),this);
         dialog->show();dialog->exec();
         if(dialog->renshu ==true){
             sendToAnother("tydkcj");
         }
         else{
             sendToAnother("btydkcj");
         }

    }
    if(msg=="tydkcj"){//对方同意
        openOld();
    }
    if(msg=="btydkcj"){//对方不同意打开
        QMessageBox::information(this,tr("打开残局"),tr("对方不同意"));
    }
    if(msg.length()>200){//可以认定是对方的棋盘数据
        openMyselfOld(msg);
    }

    //******************************************************************************
    if(msg=="ready"&&isServerOrClient==2){
        ui->label->setText(tr("主机已准备，请点击开始"));
        ui->pushButton_start->setEnabled(true);
    }
    if(msg=="stop"){
        stopMatch();
    }
    /*if(msg=="asktime"){
        QString str = "time,"+QString::number(bigTime);
        sendToAnother(str);
    }
    QStringList li= msg.split(",");
    if(li[0]=="time"){
        int cnt = li[1].toInt();
        anotherBigTime = cnt;
    }*/

    if(msg=="huiqishibai"){
        QMessageBox::information(this,tr("不同意"),tr("不能悔棋两次"));
    }
    if(msg=="received"){
        //表示对方已经收到自己传过去的残局下面又要自己走棋
    }
}


void GameServer::on_pushButton_start_clicked()
{
    iReady = 1;
    bigTime = 0;
    smallTime = 20;
    for(int i = 0;i < 15;i++)
        for(int j = 0;j < 15;j++)
            chess[i][j] = 0;
    sendToAnother("ready");
}

void GameServer::on_pushButton_renshu_clicked()
{
    RenshuQingqiu *dia = new RenshuQingqiu(tr("您要认输吗"),this);
    dia->show();
    dia->exec();
    if(dia->renshu == true){
        sendToAnother("renshu");
    }
}
void GameServer::tryHuiQi()
{
    if(huiQiCnt>1){
        //QMessageBox::information(this,tr("不能悔棋"),tr("最多悔棋两步！"));
        decodeAndUpdate("huiqishibai");
        return;
    }
    if(myvc.empty()){//还没下棋不能悔棋
        return;
    }

   RenshuQingqiu *dia = new RenshuQingqiu(tr("请求悔棋？"),this);
   dia->show();
   dia->exec();
   if(dia->renshu==true){
       sendToAnother("huiqi");
   }
}

void GameServer::agreeHuiQi()
{
    RenshuQingqiu *dia = new RenshuQingqiu(tr("对方请求悔棋是否同意？"),this);
    dia->show();
    dia->exec();

    if(dia->renshu==true){

        //自己首先悔棋
        selfHuiQi();
        //发送信息同意对方悔棋
        sendToAnother("tyhq");
    }
    else{
        //发送不同意的请求
        sendToAnother("btyhq");
    }
}

void GameServer::selfHuiQi()
{
   if(myvc.empty())
       return;


   QPoint tmp = myvc[myvc.size()-1];
   QPoint histmp = hisvc[hisvc.size()-1];
   int hisx = histmp.x();
   int hisy = histmp.y();
   int x = tmp.x();
   int y = tmp.y();
   chess[x][y] = 0;
   chess[hisx][hisy] = 0;
   hisvc.pop_back();
   myvc.pop_back();
   huiQiCnt++;
   update();
}

void GameServer::openOld()
{
    pauseTime();
    QString path = QFileDialog::getOpenFileName(this,"open","/","text(*.txt)");
    //QString path = QFileDialog::getOpenFileName(this,"open","/","text(*.)");
    qDebug() << path;
    QFile *file=new QFile(path);
    file->open(QIODevice::ReadOnly|QIODevice::Text);
    QString data = QString(file->readAll());
    std::string str = data.toStdString();
    int cnt = 0;
    for(int i = 0;i < (int)str.length();i++){
        int x = i / 15;
        int y = i % 15;
        chess[x][y] = str[i]-'0';
        if(str[i]-'0'!=0){
            cnt++;
        }
    }
    /*if(cnt%2==0){
        isYourTurn = 1;
        startTime();
    }
    else{
        isYourTurn = 0;
        pauseTime();
    }*/
    sendToAnother(data);
    //startTime();
    update();

}

void GameServer::openMyselfOld(QString msg)
{
    int cnt = 0;
    std::string str = msg.toStdString();
    for(int i = 0;i < (int)str.length();i++){
        int x = i / 15;
        int y = i % 15;
        chess[x][y] = str[i]-'0';
        if(str[i]-'0' != 0)
            cnt++;
    }
   // pauseTime();
    sendToAnother("received");
    update();

}

void GameServer::addPic()
{
    QPixmap pic(":/image/zhuye.png");
    QPixmap newpic = pic.scaled(QSize(500,400),Qt::KeepAspectRatio);
    ui->label_zhu->setScaledContents(true);
    ui->label_zhu->setPixmap(newpic);
}

void GameServer::addMusic()
{
    winMusic = new QSound(":/music/music/win.wav");
    loseMusic = new QSound(":/music/music.losemusic.wav");
    //还要添加失败音乐
}

void GameServer::pauseButton()
{
    qDebug() << "pause false";
    ui->pushButton_cry->setEnabled(false);//悔棋
    ui->pushButton_open->setEnabled(false);//打开残局
    ui->pushButton_save->setEnabled(false);//保存
    ui->pushButton_renshu->setEnabled(false);//认输退出
    //ui->pushButton_start->setEnabled(false);//开始比赛
}

void GameServer::startButton()
{
    ui->pushButton_cry->setEnabled(true);//悔棋
    ui->pushButton_open->setEnabled(true);//打开残局
    ui->pushButton_save->setEnabled(true);//保存
    ui->pushButton_renshu->setEnabled(true);//认输退出
    //ui->pushButton_start->setEnabled(true);//开始比赛
}

void GameServer::on_pushButton_cry_clicked()
{
    tryHuiQi();
}

void GameServer::on_pushButton_closeroom_clicked()
{
    RenshuQingqiu* dia = new RenshuQingqiu(tr("强制结束游戏？"),this);
    dia->show();;
    dia->exec();
    if(dia->renshu==true){
        stopMatch();
        sendToAnother("stop");
    }
}
