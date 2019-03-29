#include "mywidget.h"
#include "mybutton.h"  //自定义类的头文件

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    /*
    * 如果窗口需要依附另外一个窗口，需要给该窗口指定父类
    * 父窗口显示的时候，子窗口也会随之显示
    */

    // 初始化
    b2 = new QPushButton("hello, qt",this);
    //b2->setText("hello qt");
    b2->show();

    b1.setParent(this);
    b1.setText("我是老二");
    // 改变位置 -- 移动
    // 窗口的坐标系 原点：左上角 x：向右递增 y:向下递增
    b1.move(100,100);
    b1.resize(50,50);


    // 内存自动回收
    // 1.从Qobject派生的类  1.直接 2.间接
    // 2. 指定父类，父亲析构的时候，先析构他的孩子

    // 创建自定义的按钮对象
    MyButton* btn = new MyButton(this);
    btn->setText("wo shi mybutton");
    btn->move(400,400);
    // 设置窗口标题
    this->setWindowTitle("明天");
    //this->resize(300,200);
    this->setFixedSize(700,500);
    this->setWindowIcon(QIcon("D:\\资料\\11_QT_lesson课程\\day01\\2-other doc\\Image\\Luffy.png"));

    //需求 b1 关闭窗口
    connect(&b1,&QPushButton::clicked ,this,&MyWidget::close);
    /*
     * b1: 信号的发出者， 此参数是一个指针
     * &QPushButton::clicked 信号发出者，内部的一个信号
     *      格式： & + 信号发出者类的名字+：：+ 信号的名字
     *  信号的接收者 指针
     * &MyWidget::close：信号的处理函数，属于this  槽函数
    */


    //connect(&b2,&QPushButton::released,b1,)
}

MyWidget::~MyWidget()
{

}
