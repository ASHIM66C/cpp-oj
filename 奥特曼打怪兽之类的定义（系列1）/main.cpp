//
//  main.cpp
//  奥特曼打怪兽之类的定义（系列1）
//
//  Created by Jacky on 2020/10/27.
//  Copyright © 2020 Jacky. All rights reserved.
//

/*
 问题 D: 奥特曼打怪兽之类的定义（系列1）
 时间限制: 1 Sec  内存限制: 128 MB
 提交: 276  解决: 181
 [提交][状态][讨论版]
 题目描述
 现在有一个奥特曼打怪兽的角色扮演游戏。请你根据下面的描述，采用提示中给出的程序框架，定义两个类：奥特曼类(Ultraman)和怪兽类(Monster)。
 
 在奥特曼的世界，打怪兽就是全部。现在人人都有机会成为奥特曼，加入到与怪兽无止境的战斗中。可惜，并非人人生来就是英雄，革命尚未成功，同志仍需努力啊。每一个奥特曼都要从零开始，辛勤劳动，打怪升级，最终才能成为举世瞩目的大英雄。
 
 每个奥特曼的等级(rank)都从第一级开始，随着它打怪兽经验(exp)的增加，等级将不断攀升。随着等级的升高，奥特曼的生命值(hp)上限和攻击力(damage)也将大大增强。在与怪兽的战斗中，奥特曼收获的不仅仅是经验。有时，运气好的话，还能从怪兽身上弄到点小钱(money)。不要小看这些钱，关键时刻，它能给奥特曼买药补血呀。奥特曼没有金刚不坏之身，在与怪兽的战斗中，奥特曼会受到伤害。一旦奥特曼的生命值降到0，它英雄的一生就结束了。
 
 好了，了解了奥特曼的基本情况，现在可以开始战斗了。首先，我们需要一位全新的奥特曼(Outman)，我们给它赋予一定的初始实力(initial)。让它投入战斗吧！
 
 在与怪兽的战斗中要讲究策略。所谓知己知彼，百战不殆，一旦碰到怪兽，我们首先要查看自己和对方的实力(display)，包括双方的等级、生命值、攻击力、经验和所拥有的钱财。所谓打得赢就打，打不赢就跑。如果对手太强大，逃跑吧(escape)！偶尔逃跑无伤颜面，但会耗费一点生命值。如果总是逃跑，生命被虚耗，那英雄就当不成了。所以该出手时就出手，勇敢地战斗(attack)吧！每一回合的战斗中，怪兽会受到攻击(attacked)，怪兽也会反击(fightback)，让奥特曼受到攻击(attacked)。每一回合结束，只要奥特曼还活着(isalive)，而且怪兽也还活着，战斗就要继续。如果奥特曼的生命值太低，也许抵挡不了下一轮的进攻，那么别财迷了，掏钱出来给它补血(restore)吧。当然，如果形势确实不妙，奥特曼也可以中途逃跑。但如果获得了最终的胜利(win)，不仅能赢得战斗经验，夺取怪兽身上的钱财，足够多的经验也许能让奥特曼升级(upgrade)。
 
 输入
 本题目无输入输出，无数据验证，只考核类界面编写是否正确，老师会检查代码。
 需识别出每个类的属性和行为，并为其定义正确的类型、参数、访问控制权限等。本题目没有对战斗等动作做具体描述，所以只需要给出类的界面即可，具体类实现代码下次课再做。
 建议代码最好有详细注释，可以提高代码可读性，并表明你对程序的理解能力。
 
 输出
 样例输入
 样例输出
 提示

 代码框架如下：
 
 #include <iostream>
 using namespace std;
 //这里开始写类的界面代码
 //奥特曼类的界面
 // .......
 //怪兽类的界面
 // .......
 //这里开始写类的实现代码
 //奥特曼类的实现
 // .......
 //怪兽类的实现
 // .......
 //下面是测试主程序
 
 int main()
 {
    return 0;
 }
 */

#include <iostream>
using namespace std;
class Monster;
//这里开始写类的界面代码
//奥特曼类的界面
class Ultraman {
private:
    int rank = 1;
    int exp = 0;
    int hp, damage, money;
    
public:
    Ultraman(int _rank);
    void display();
    void escape();
    void attacked(Monster& m);
    void restore();
    void upgrade();
    void win(Monster& m);
    int getRank();
    int getExp();
    int getHp();
    int getDamage();
    int getMoney();
};

//怪兽类的界面
class Monster {
private:
    int rank = 1;
    int exp = 0;
    int hp, damage, money;
    
public:
    Monster(int _rank);
    
    void display();
    void attacked(Ultraman& u);
    void restore();
    int getRank();
    int getExp();
    int getHp();
    int getDamage();
    int getMoney();
};

int main() {
    return 0;
}
