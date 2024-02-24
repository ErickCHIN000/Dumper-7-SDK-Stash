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
// Function CommonButtonTab.CommonButtonTab_C.Initialize
struct UCommonButtonTab_C_Initialize_Params
{
public:
	class UPhotoModeWidget_C*                    PhotoModeWidgetRef;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function CommonButtonTab.CommonButtonTab_C.PreConstruct
struct UCommonButtonTab_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8C (0xE8C - 0x0)
// Function CommonButtonTab.CommonButtonTab_C.ExecuteUbergraph_CommonButtonTab
struct UCommonButtonTab_C_ExecuteUbergraph_CommonButtonTab_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhotoModeWidget_C*                    K2Node_CustomEvent_PhotoModeWidgetRef;             // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IPhotoModeDataInterface_C> K2Node_DynamicCast_AsPhoto_Mode_Data_Interface;    // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18F9[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x30(0xD0)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x100(0x3F0)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x4F0(0xD0)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_1;                   // 0x5C0(0x3F0)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x9B0(0xD0)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle_2;                   // 0xA80(0x3F0)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xE70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_190E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDeprecateSlateVector2D               K2Node_MakeStruct_ImageSize_ImplicitCast;          // 0xE74(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D               K2Node_MakeStruct_ImageSize_ImplicitCast_1;        // 0xE7C(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D               K2Node_MakeStruct_ImageSize_ImplicitCast_2;        // 0xE84(0x8)(NoDestructor, HasGetValueTypeHash)
};

}
}


