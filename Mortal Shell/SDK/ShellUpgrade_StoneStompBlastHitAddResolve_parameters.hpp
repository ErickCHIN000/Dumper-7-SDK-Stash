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
// Function ShellUpgrade_StoneStompBlastHitAddResolve.ShellUpgrade_StoneStompBlastHitAddResolve_C.OnStoneStompHit
struct UShellUpgrade_StoneStompBlastHitAddResolve_C_OnStoneStompHit_Params
{
public:
	class AEnemyCharacter_C*                     Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function ShellUpgrade_StoneStompBlastHitAddResolve.ShellUpgrade_StoneStompBlastHitAddResolve_C.ExecuteUbergraph_ShellUpgrade_StoneStompBlastHitAddResolve
struct UShellUpgrade_StoneStompBlastHitAddResolve_C_ExecuteUbergraph_ShellUpgrade_StoneStompBlastHitAddResolve_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     K2Node_CustomEvent_Target;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


