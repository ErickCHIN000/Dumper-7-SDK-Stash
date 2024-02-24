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
// Function MobileBaaTutorial.MobileBaaTutorial_C.GetStepOverrideDescriptionArray
struct AMobileBaaTutorial_C_GetStepOverrideDescriptionArray_Params
{
public:
	TArray<class FText>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<class FText>                          K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function MobileBaaTutorial.MobileBaaTutorial_C.GoatBaa
struct AMobileBaaTutorial_C_GoatBaa_Params
{
public:
	class AGGGoat*                               GoatBaaing;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function MobileBaaTutorial.MobileBaaTutorial_C.OnTutorialActivated
struct AMobileBaaTutorial_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function MobileBaaTutorial.MobileBaaTutorial_C.ExecuteUbergraph_MobileBaaTutorial
struct AMobileBaaTutorial_C_ExecuteUbergraph_MobileBaaTutorial_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_GoatBaaing;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


