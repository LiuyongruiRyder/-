#include "myhighlighter.h"

MyHighlighter::MyHighlighter(QTextDocument *parent) :QSyntaxHighlighter(parent)
{
    //普通文本
    addNormalTextFormat();
    //对于数字文本
    addNumberFormat();
    //对于字符串
    addStringFormat();
    //对于注释的高亮
    addCommentFormat();
    //关键字和保留字的高亮
    addKeywordsFormat();
    //类名高亮
    addClassNameFormat();
    //函数名的高亮
    addFunctionaFormat();

}

void MyHighlighter::setFont(QFont font)
{ //更改字体
    mFontFamily = font.family();
    mFontSize = font.pixelSize();
}



void MyHighlighter::highlightBlock(const QString &text) //这个时重写的函数，在父类构造函数的时候调用的
{
    foreach(const HighlightRule &rule,highlighrules){
        QRegExp reg(rule.partten);//生成正则表达式
        int index = reg.indexIn(text);
        while(index>=0){
            int length = reg.matchedLength();//返回匹配的字符的长度
            setFormat(index,length,rule.format); //父类中的设置字体的函数
            index = reg.indexIn(text,index+length); //按长度匹配字符
        }
    }
    addMultiLineCommentFormat(text);

}

void MyHighlighter::addNormalTextFormat() //普通文本的格式设置
{
    HighlightRule rule;
    rule.partten = QRegExp("[a-z0-9A-Z]+"); //正则表达式,用来匹配文本
    QTextCharFormat normalTextFormat;//用来设置文本样式

    normalTextFormat.setFont(QFont(mFontFamily,mFontSize));
    normalTextFormat.setForeground(QColor(0,0,0));

    rule.format = normalTextFormat;
    highlighrules.append(rule);//加到向量里面

}

void MyHighlighter::addNumberFormat()
{

    HighlightRule rule;
    rule.partten = QRegExp("\\b\\d+|\\d+\\.\\d+\\b"); //正则表达式,用来匹配文本
    QTextCharFormat nuberFormat;//用来设置文本样式

    nuberFormat.setFont(QFont(mFontFamily,mFontSize));
    nuberFormat.setForeground(QColor(250,80,50));

    rule.format = nuberFormat;
    highlighrules.append(rule);//加到向量里面
}

void MyHighlighter::addStringFormat()
{
    QTextCharFormat stringFormat;//用来设置文本样式
    stringFormat.setFont(QFont(mFontFamily,mFontSize));
    stringFormat.setForeground(QColor(0,180,180));


    HighlightRule rule;
    rule.format = stringFormat;
    //''的字符串
    rule.partten = QRegExp("'[^']*'"); //正则表达式,用来匹配文本
    highlighrules.append(rule);//加到向量里面

    //""的字符串
    rule.partten = QRegExp("\"[^\"]*\""); //正则表达式,用来匹配文本
    highlighrules.append(rule);//加到向量里面

    //``的字符串
    rule.partten = QRegExp("`[^`]*`"); //正则表达式,用来匹配文本
    highlighrules.append(rule);//加到向量里面

}

void MyHighlighter::addCommentFormat()
{

    QTextCharFormat commentFormat;//用来设置文本样式
    commentFormat.setFont(QFont(mFontFamily,mFontSize));
    commentFormat.setForeground(Qt::darkGreen);


    HighlightRule rule;
    rule.format = commentFormat;
    // //的注释
    rule.partten = QRegExp("\\/\\/.*"); //正则表达式,用来匹配文本
    highlighrules.append(rule);//加到向量里面

    // /* */的注释
    //但是换行就没有用了
    rule.partten = QRegExp("\\/\\*[^*]*\\*+(?:[^/*][^*]*\\*+)*\\/");
    highlighrules.append(rule);//加到向量里面

}

void MyHighlighter::addMultiLineCommentFormat(const QString &text) {
//设置多行注释
setCurrentBlockState(0); //默认标志不是1
// /*
QRegExp commentStartRegExp("\\/\\*");
// */
QRegExp commentEndRegExp("\\*\\/");

//高亮格式
QTextCharFormat multiLineCommentFormat;
multiLineCommentFormat.setFont(QFont(mFontFamily,mFontSize));
multiLineCommentFormat.setForeground(Qt::darkGreen);

int startIndex = 0;
if(previousBlockState()!=1){ //就是如果前面标记不是1，就要要获取首行地址，否则首行地址就是0
    startIndex = commentStartRegExp.indexIn(text);
}

while(startIndex>=0){
    int endIndex = commentEndRegExp.indexIn(text,startIndex);
    int commentLength = 0;
    if(endIndex==-1){//没有结束位置,直接到末尾为止
        setCurrentBlockState(1);//这说明要换行，就做个标记
        commentLength = text.length()-startIndex;

    }else{//有结束位置，到结束为止为止

        commentLength = endIndex-startIndex+commentEndRegExp.matchedLength();

    }
    setFormat(startIndex,commentLength,
              multiLineCommentFormat);
    startIndex = commentStartRegExp.indexIn(text,commentLength+startIndex);

}
}

void MyHighlighter::addKeywordsFormat()
{//关键字的高亮
    QFile file(":/config/config/keywords.txt");
    QTextStream keywordsStream(&file);
    QTextCharFormat commentFormat;//用来设置文本样式
    commentFormat.setFont(QFont(mFontFamily,mFontSize));
    commentFormat.setForeground(Qt::darkMagenta);


    HighlightRule rule;
    rule.format = commentFormat;
    if(file.open(QIODevice::ReadOnly|QIODevice::Text)){ //确定文件打开
        keywordsStream.seek(0);
        while(!keywordsStream.atEnd()){
            QString line = keywordsStream.readLine();
            if(line!=""){
                rule.partten = QRegExp("\\b"+line+"\\b");
                highlighrules.append(rule);
            }
        }
        file.close();
    }

}

void MyHighlighter::addClassNameFormat() //类名高亮
{
    QTextCharFormat commentFormat;//用来设置文本样式
    commentFormat.setFont(QFont(mFontFamily,mFontSize));
    commentFormat.setForeground(QColor(150,20,100));
    commentFormat.setFontWeight(99);


    HighlightRule rule;
    rule.format = commentFormat;
    // //的注释
    rule.partten = QRegExp("\\b[A-Z]+\\w*"); //正则表达式,用来匹配文本
    highlighrules.append(rule);//加到向量里面
}

void MyHighlighter::addFunctionaFormat()
{
    QTextCharFormat commentFormat;//用来设置文本样式
    commentFormat.setFont(QFont(mFontFamily,mFontSize));
    commentFormat.setForeground(QColor(200,0,150));


    HighlightRule rule;
    rule.format = commentFormat;
    // //的注释
    rule.partten = QRegExp("\\w+\\("); //正则表达式,用来匹配文本
    highlighrules.append(rule);//加到向量里面
    rule.partten = QRegExp("\\)");
    highlighrules.append(rule);
}
