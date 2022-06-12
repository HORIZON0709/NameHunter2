//===================================================
//
//NameHunter2[player.h]
//Author:Kishimoto Eiji
//
//===================================================
#ifndef _PLAYER_H_
#define _PLAYER_H_

//***************************
//構造体の定義
//***************************
typedef struct
{/* プレイヤー */
	int nHp;		//HP
	int nAttack;	//攻撃力
	int nDiffence;	//防御力
	int nSpeed;		//すばやさ
}Player;

#endif