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
// Function MapTutorial.MapTutorial_C.OnTutorialActivated
struct AMapTutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function MapTutorial.MapTutorial_C.OnMenuNavigation
struct AMapTutorial_C_OnMenuNavigation_Params
{
public:
	struct FGameplayTag                          InMenuTag;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                Context;                                           // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xCD (0xCD - 0x0)
// Function MapTutorial.MapTutorial_C.ExecuteUbergraph_MapTutorial
struct AMapTutorial_C_ExecuteUbergraph_MapTutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_991[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_CustomEvent_InMenuTag;                      // 0x4C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMenuNavigationContext                K2Node_CustomEvent_Context;                        // 0x58(0x28)(None)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9A6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AGGPlayerController*>           CallFunc_GetAllOwningPlayers_ReturnValue;          // 0x88(0x10)(ReferenceParm)
	struct FMenuNavigationContext                CallFunc_MakeMenuNavigationContextStruct_ReturnValue; // 0x98(0x28)(None)
	class AGGPlayerController*                   CallFunc_Array_Get_Item;                           // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


