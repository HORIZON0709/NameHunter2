//===================================================
//
//NameHunter2[main.cpp]
//Author:Kishimoto Eiji
//
//===================================================
//***************************
//インクルード
//***************************
#include <stdio.h>

//***************************
//構造体の定義
//***************************
namespace
{
typedef struct
{/* プレイヤー */
	int nHp;		//HP
	int nAttack;	//攻撃力
	int nDiffence;	//防御力
	int nSpeed;		//すばやさ
}Player;
}//namespaceはここまで

//***************************
//構造体の定義
//***************************
namespace
{
void PressEnter();
}//namespaceはここまで

//===================================================
//メイン関数
//===================================================
void main()
{
	//メッセージ & Enter入力待ち
	printf("\n プログラムを終了します。お疲れさまでした。");
	PressEnter();
}

namespace
{
//---------------------------------------------------
//Enter入力待ち
//---------------------------------------------------
void PressEnter()
{
	printf("\n\n Press Enter");
	rewind(stdin);
	getchar();
}
}