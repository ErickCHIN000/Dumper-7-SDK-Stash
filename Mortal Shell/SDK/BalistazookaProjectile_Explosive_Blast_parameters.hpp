#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0xA - 0x0)
// Function BalistazookaProjectile_Explosive_Blast.BalistazookaProjectile_Explosive_Blast_C.ShouldEnableEffect
struct ABalistazookaProjectile_Explosive_Blast_C_ShouldEnableEffect_Params
{
public:
	class AEnemyCharacter_C*                     Enemy;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEnemyAlive_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function BalistazookaProjectile_Explosive_Blast.BalistazookaProjectile_Explosive_Blast_C.OnEnemyHit
struct ABalistazookaProjectile_Explosive_Blast_C_OnEnemyHit_Params
{
public:
	class AEnemyCharacter_C*                     Enemy;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactNormal;                                      // 0x8(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function BalistazookaProjectile_Explosive_Blast.BalistazookaProjectile_Explosive_Blast_C.ExecuteUbergraph_BalistazookaProjectile_Explosive_Blast
struct ABalistazookaProjectile_Explosive_Blast_C_ExecuteUbergraph_BalistazookaProjectile_Explosive_Blast_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F62[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     K2Node_Event_Enemy;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Event_ImpactNormal;                         // 0x20(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldEnableEffect_ReturnValue;           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F6C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEnemyAlive_ReturnValue;                 // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F70[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_ApplyDamage_ReturnValue;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


