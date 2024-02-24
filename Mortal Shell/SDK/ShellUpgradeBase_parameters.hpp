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

// 0xA8 (0xA8 - 0x0)
// Function ShellUpgradeBase.ShellUpgradeBase_C.DebugAbility
struct UShellUpgradeBase_C_DebugAbility_Params
{
public:
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUnlocked_bUnlocked;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2428[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function ShellUpgradeBase.ShellUpgradeBase_C.IsUnlocked
struct UShellUpgradeBase_C_IsUnlocked_Params
{
public:
	bool                                         bUnlocked;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function ShellUpgradeBase.ShellUpgradeBase_C.ExecuteUbergraph_ShellUpgradeBase
struct UShellUpgradeBase_C_ExecuteUbergraph_ShellUpgradeBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUnlocked_bUnlocked;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


