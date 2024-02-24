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

// 0x10 (0x10 - 0x0)
// Function UnlockedUpdate03Tutorial.UnlockedUpdate03Tutorial_C.OnTutorialActivated
struct AUnlockedUpdate03Tutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function UnlockedUpdate03Tutorial.UnlockedUpdate03Tutorial_C.OnMenuNavigation
struct AUnlockedUpdate03Tutorial_C_OnMenuNavigation_Params
{
public:
	struct FGameplayTag                          InMenuTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                Context;                                           // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x89 (0x89 - 0x0)
// Function UnlockedUpdate03Tutorial.UnlockedUpdate03Tutorial_C.ExecuteUbergraph_UnlockedUpdate03Tutorial
struct AUnlockedUpdate03Tutorial_C_ExecuteUbergraph_UnlockedUpdate03Tutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGGPlayerController*>           CallFunc_GetAllOwningPlayers_ReturnValue;          // 0x8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BD5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BDC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_CustomEvent_InMenuTag;                      // 0x54(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BDD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMenuNavigationContext                K2Node_CustomEvent_Context;                        // 0x60(0x28)(None)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


