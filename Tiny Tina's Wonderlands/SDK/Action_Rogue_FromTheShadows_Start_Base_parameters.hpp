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

// 0x8 (0x8 - 0x0)
// Function Action_Rogue_FromTheShadows_Start_Base.Action_Rogue_FromTheShadows_Start_Base_C.OnBegin
struct UAction_Rogue_FromTheShadows_Start_Base_C_OnBegin_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function Action_Rogue_FromTheShadows_Start_Base.Action_Rogue_FromTheShadows_Start_Base_C.ExecuteUbergraph_Action_Rogue_FromTheShadows_Start_Base
struct UAction_Rogue_FromTheShadows_Start_Base_C_ExecuteUbergraph_Action_Rogue_FromTheShadows_Start_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E05[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_K2_GetActor_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIBPChar_Player_C>    K2Node_DynamicCast_AsIBPChar_Player;               // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E16[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_K2_GetActor_ReturnValue1;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter_Player*                  K2Node_DynamicCast_AsOak_Character_Player;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E25[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UOakActionAbility*                     CallFunc_GetPrimaryActionAbility_ReturnValue;      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_Actor;                                // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_Rogue_FromTheShadows_C> K2Node_DynamicCast_AsBPI_Rogue_from_the_Shadows;   // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StartStealth_Res;                         // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E35[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_K2_GetActor_ReturnValue2;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakFirstPersonComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_K2_GetActor_ReturnValue3;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             CallFunc_GetComponentByClass_ReturnValue1;         // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue1;        // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


