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
// Function UMG_Alteration.UMG_Alteration_C.Add Tool Tip
struct UUMG_Alteration_C_Add_Tool_Tip_Params
{
public:
	class FText                                  ToolTipText;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMG_AlterationPopup_C*                CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A0 (0x2A0 - 0x0)
// Function UMG_Alteration.UMG_Alteration_C.Setup
struct UUMG_Alteration_C_Setup_Params
{
public:
	struct FAlterationsRowHandle                 Alteration;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x18(0x88)(None)
	struct FAlteration                           CallFunc_GetAlterationsStruct_Alterations;         // 0xA0(0xD0)(None)
	enum class EValid                            CallFunc_GetAlterationsStruct_Paths;               // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_296[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x190(0x88)(None)
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x218(0x88)(None)
};

}
}


