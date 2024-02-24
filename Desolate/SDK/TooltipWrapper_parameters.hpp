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
// Function TooltipWrapper.TooltipWrapper_C.OnAddedToFocusPath
struct UTooltipWrapper_C_OnAddedToFocusPath_Params
{
public:
	struct FFocusEvent                           InFocusEvent;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function TooltipWrapper.TooltipWrapper_C.ExecuteUbergraph_TooltipWrapper
struct UTooltipWrapper_C_ExecuteUbergraph_TooltipWrapper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                           K2Node_Event_InFocusEvent;                         // 0x4(0x8)(NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function TooltipWrapper.TooltipWrapper_C.OnTooltip__DelegateSignature
struct UTooltipWrapper_C_OnTooltip__DelegateSignature_Params
{
public:
	class UWidget*                               Sender;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


