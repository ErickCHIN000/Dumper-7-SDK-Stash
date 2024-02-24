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

// 0xC8 (0xC8 - 0x0)
// Function HeadbuttTutorial.HeadbuttTutorial_C.GetStepOverrideDescriptionArray
struct AHeadbuttTutorial_C_GetStepOverrideDescriptionArray_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x10(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x50(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA0(0x18)(None)
	TArray<class FText>                          K2Node_MakeArray_Array_1;                          // 0xB8(0x10)(ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function HeadbuttTutorial.HeadbuttTutorial_C.GetStepCompletionArray
struct AHeadbuttTutorial_C_GetStepCompletionArray_Params
{
public:
	TArray<bool>                                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ADA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
};

// 0x21 (0x21 - 0x0)
// Function HeadbuttTutorial.HeadbuttTutorial_C.GoatHeadbutted
struct AHeadbuttTutorial_C_GoatHeadbutted_Params
{
public:
	class AGGGoat*                               GoatHeadbutting;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHitSomething;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B04[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        HeadbuttedActors;                                  // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Is_charge_headbutt;                                // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function HeadbuttTutorial.HeadbuttTutorial_C.OnTutorialActivated
struct AHeadbuttTutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x57 (0x57 - 0x0)
// Function HeadbuttTutorial.HeadbuttTutorial_C.ExecuteUbergraph_HeadbuttTutorial
struct AHeadbuttTutorial_C_ExecuteUbergraph_HeadbuttTutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BA1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_GoatHeadbutting;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bHitSomething;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BA6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_CustomEvent_HeadbuttedActors;               // 0x18(0x10)(ConstParm, ReferenceParm)
	bool                                         K2Node_CustomEvent_Is_charge_headbutt;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BAB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Variable;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


