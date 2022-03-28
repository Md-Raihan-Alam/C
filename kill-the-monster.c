/*Monocarp is playing a computer game. In this game, his character fights different monsters.

A fight between a character and a monster goes as follows. Suppose the character initially has health hC and attack dC; the monster initially has health hM and attack dM. The fight consists of several steps:

the character attacks the monster, decreasing the monster's health by dC;
the monster attacks the character, decreasing the character's health by dM;
the character attacks the monster, decreasing the monster's health by dC;
the monster attacks the character, decreasing the character's health by dM;
and so on, until the end of the fight.
The fight ends when someone's health becomes non-positive (i. e. 0 or less). If the monster's health becomes non-positive, the character wins, otherwise the monster wins.

Monocarp's character currently has health equal to hC and attack equal to dC. He wants to slay a monster with health equal to hM and attack equal to dM. Before the fight, Monocarp can spend up to k coins to upgrade his character's weapon and/or armor; each upgrade costs exactly one coin, each weapon upgrade increases the character's attack by w, and each armor upgrade increases the character's health by a.

Can Monocarp's character slay the monster if Monocarp spends coins on upgrades optimally?

Input
The first line contains one integer t (1≤t≤5⋅104) — the number of test cases. Each test case consists of three lines:

The first line contains two integers hC and dC (1≤hC≤1015; 1≤dC≤109) — the character's health and attack;

The second line contains two integers hM and dM (1≤hM≤1015; 1≤dM≤109) — the monster's health and attack;

The third line contains three integers k, w and a (0≤k≤2⋅105; 0≤w≤104; 0≤a≤1010) — the maximum number of coins that Monocarp can spend, the amount added to the character's attack with each weapon upgrade, and the amount added to the character's health with each armor upgrade, respectively.

The sum of k over all test cases does not exceed 2⋅105.

Output
For each test case, print YES if it is possible to slay the monster by optimally choosing the upgrades. Otherwise, print NO.

Example
inputCopy
4
25 4
9 20
1 1 10
25 4
12 20
1 1 10
100 1
45 2
0 4 10
9 2
69 2
4 2 7
outputCopy
YES
NO
YES
YES
Note
In the first example, Monocarp can spend one coin to upgrade weapon (damage will be equal to 5), then health during battle will change as follows: (hC,hM)=(25,9)→(25,4)→(5,4)→(5,−1). The battle ended with Monocarp's victory.

In the second example, Monocarp has no way to defeat the monster.

In the third example, Monocarp has no coins, so he can't buy upgrades. However, the initial characteristics are enough for Monocarp to win.

In the fourth example, Monocarp has 4 coins. To defeat the monster, he has to spend 2 coins to upgrade weapon and 2 coins to upgrade armor.
*/
#include<stdio.h>
int main()
{
    int rounds;
    int number=1;
    int i;
    int monocarpHealth,monocarpAttack;
    int monsterHealth,monsterAttack;
    int totalCoin,characterAttack,characterArmour;
    scanf("%d",&rounds);
    for(i=0;i<rounds;i++){
        number++;
        scanf("%d %d",&monocarpHealth,&monocarpAttack);
        scanf("%d %d",&monsterHealth,&monsterAttack);
        scanf("%d %d %d",&totalCoin,&characterAttack,&characterArmour);
        for(;;){
            if(totalCoin==0) break;
            monocarpAttack+=characterAttack;
            totalCoin--;
            if(totalCoin==0) break;
            monocarpHealth+=characterArmour;
            totalCoin--;
        }
        for(;;){
            monsterHealth-=monocarpAttack;
            if(monsterHealth<=0) break;
            monocarpHealth-=monsterAttack;
            if(monocarpHealth<=0) break;
        }
        if(monsterHealth<=0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}