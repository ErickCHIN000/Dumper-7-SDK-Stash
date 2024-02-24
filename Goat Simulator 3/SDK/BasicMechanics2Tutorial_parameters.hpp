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

// 0x20 (0x20 - 0x0)
// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.GetStepOverrideDescriptionArray
struct ABasicMechanics2Tutorial_C_GetStepOverrideDescriptionArray_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
};

// 0x28 (0x28 - 0x0)
// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.GetStepCompletionArray
struct ABasicMechanics2Tutorial_C_GetStepCompletionArray_Params
{
public:
	TArray<bool>                                 ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_BooleanNOR_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B0[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 K2Node_MakeArray_Array;                            // 0x18(0x10)(ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.GoatBaa
struct ABasicMechanics2Tutorial_C_GoatBaa_Params
{
public:
	class AGGGoat*                               GoatBaaing;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.GoatRagdolled
struct ABasicMechanics2Tutorial_C_GoatRagdolled_Params
{
public:
	class AGGCharacter*                          Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewRagdollState;                                   // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.OnTutorialActivated
struct ABasicMechanics2Tutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function BasicMechanics2Tutorial.BasicMechanics2Tutorial_C.ExecuteUbergraph_BasicMechanics2Tutorial
struct ABasicMechanics2Tutorial_C_ExecuteUbergraph_BasicMechanics2Tutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7EE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_GoatBaaing;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGCharacter*                          K2Node_CustomEvent_Character;                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_NewRagdollState;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7F3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7F7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


