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

// 0x1 (0x1 - 0x0)
// Function ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C.OnAnyDmgTaken
struct UShellUpgrade_EmpRiposteKillResolveRegainChance_C_OnAnyDmgTaken_Params
{
public:
	bool                                         bDied;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C.OnRip
struct UShellUpgrade_EmpRiposteKillResolveRegainChance_C_OnRip_Params
{
public:
	bool                                         bEmpowered;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseCharacter_C*                      ParriedChar;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function ShellUpgrade_EmpRiposteKillResolveRegainChance.ShellUpgrade_EmpRiposteKillResolveRegainChance_C.ExecuteUbergraph_ShellUpgrade_EmpRiposteKillResolveRegainChance
struct UShellUpgrade_EmpRiposteKillResolveRegainChance_C_ExecuteUbergraph_ShellUpgrade_EmpRiposteKillResolveRegainChance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bEmpowered;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2550[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseCharacter_C*                      K2Node_CustomEvent_ParriedChar;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     K2Node_DynamicCast_AsEnemy_Character;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_255C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_2564[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     K2Node_DynamicCast_AsEnemy_Character_1;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2569[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bDied;                          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2571[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloat_ReturnValue;                  // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_257A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_1;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


