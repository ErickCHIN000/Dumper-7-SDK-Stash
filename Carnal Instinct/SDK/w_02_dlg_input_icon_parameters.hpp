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

// 0x4 (0x4 - 0x0)
// Function w_02_dlg_input_icon.w_02_dlg_input_icon_C.set_progress
struct UW_02_dlg_input_icon_C_Set_progress_Params
{
public:
	float                                        InPercent;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function w_02_dlg_input_icon.w_02_dlg_input_icon_C.set_icon_texture
struct UW_02_dlg_input_icon_C_Set_icon_texture_Params
{
public:
	class UTexture*                              Icon_texture;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Icon_text;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function w_02_dlg_input_icon.w_02_dlg_input_icon_C.set_icon_visibility
struct UW_02_dlg_input_icon_C_Set_icon_visibility_Params
{
public:
	bool                                         Show_icon;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function w_02_dlg_input_icon.w_02_dlg_input_icon_C.ExecuteUbergraph_w_02_dlg_input_icon
struct UW_02_dlg_input_icon_C_ExecuteUbergraph_w_02_dlg_input_icon_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


