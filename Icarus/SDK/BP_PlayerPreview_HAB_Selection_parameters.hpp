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
// Function BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C.ResolveVisibility
struct ABP_PlayerPreview_HAB_Selection_C_ResolveVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_PlayerPreview_HAB_Selection.BP_PlayerPreview_HAB_Selection_C.SetCharacterSelectionWidget
struct ABP_PlayerPreview_HAB_Selection_C_SetCharacterSelectionWidget_Params
{
public:
	class UUMG_CharacterSelection_C*             CharacterSelection;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


