#ifndef MYHIGHLIGHTER_H
#define MYHIGHLIGHTER_H

#include <QObject>
#include <QSyntaxHighlighter>
#include <QTextStream>
//用来设置代码高亮
class MyHighlighter: public QSyntaxHighlighter
{
public:
    explicit MyHighlighter(QTextDocument *parent = nullptr);

    void setFont(QFont font);


protected:
    void highlightBlock(const QString &text);

private:

    QString mFontFamily = "Consolas";
    int mFontSize = 14;

    struct HighlightRule{
        QRegExp partten;
        QTextCharFormat format;
    };
    QVector<HighlightRule> highlighrules; //存储结构体的向量

    void addNormalTextFormat();

    void addNumberFormat();

    void addStringFormat();

    void addCommentFormat();

    void addMultiLineCommentFormat(const QString &text);

    void addKeywordsFormat();

    void addClassNameFormat();

    void addFunctionaFormat();


};

#endif // MYHIGHLIGHTER_H
