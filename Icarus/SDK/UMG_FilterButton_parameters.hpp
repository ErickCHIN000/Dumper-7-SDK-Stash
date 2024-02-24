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
// Function UMG_FilterButton.UMG_FilterButton_C.UpdateSelected
struct UUMG_FilterButton_C_UpdateSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F8 (0x1F8 - 0x0)
// Function UMG_FilterButton.UMG_FilterButton_C.Initialise
struct UUMG_FilterButton_C_Initialise_Params
{
public:
	struct FItemClassificationsIconsData         ItemClassification;                                // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UUMG_UnlockTooltip_C*                  CallFunc_Create_ReturnValue;                       // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x58(0x88)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8A9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xE8(0x88)(None)
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x170(0x88)(None)
};

// 0x18 (0x18 - 0x0)
// Function UMG_FilterButton.UMG_FilterButton_C.ExecuteUbergraph_UMG_FilterButton
struct UUMG_FilterButton_C_ExecuteUbergraph_UMG_FilterButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8F2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function UMG_FilterButton.UMG_FilterButton_C.Clicked__DelegateSignature
struct UUMG_FilterButton_C_Clicked__DelegateSignature_Params
{
public:
	struct FTagQueriesRowHandle                  Query;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


