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
// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.GetToolTipWidget_VBTooltip
struct UWBP_GenericCoreStatCounter_C_GetToolTipWidget_VBTooltip_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.BP_HandleAttributeChanged
struct UWBP_GenericCoreStatCounter_C_BP_HandleAttributeChanged_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Delta;                                             // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.UpdateValue
struct UWBP_GenericCoreStatCounter_C_UpdateValue_Params
{
public:
	float                                        CallFunc_GetValue_ReturnValue;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	double                                       CallFunc_FCeil_A_ImplicitCast;                     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.Initialize
struct UWBP_GenericCoreStatCounter_C_Initialize_Params
{
public:
	bool                                         CallFunc_TryGetUIDataForAttribute_bSuccess;        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6008[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAttributeUIData              CallFunc_TryGetUIDataForAttribute_OutData;         // 0x8(0xC0)(None)
};

// 0x4 (0x4 - 0x0)
// Function WBP_GenericCoreStatCounter.WBP_GenericCoreStatCounter_C.ExecuteUbergraph_WBP_GenericCoreStatCounter
struct UWBP_GenericCoreStatCounter_C_ExecuteUbergraph_WBP_GenericCoreStatCounter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


