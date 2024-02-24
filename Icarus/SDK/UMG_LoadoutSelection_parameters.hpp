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
// Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUMG_LoadoutSelection_C_BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUMG_LoadoutSelection_C_BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3E8 (0x3E8 - 0x0)
// Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.ExecuteUbergraph_UMG_LoadoutSelection
struct UUMG_LoadoutSelection_C_ExecuteUbergraph_UMG_LoadoutSelection_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1428[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerLoadoutData                    CallFunc_GetPlayerLoadoutData_LoadoutData;         // 0x8(0x3D0)(ContainsInstancedReference)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x3D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x3E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3D0 (0x3D0 - 0x0)
// Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.ConfirmLoadout__DelegateSignature
struct UUMG_LoadoutSelection_C_ConfirmLoadout__DelegateSignature_Params
{
public:
	struct FPlayerLoadoutData                    Loadout;                                           // 0x0(0x3D0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

}
}


