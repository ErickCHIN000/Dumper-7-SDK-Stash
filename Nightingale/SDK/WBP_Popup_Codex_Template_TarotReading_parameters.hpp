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

// 0x10 (0x10 - 0x0)
// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.GetScrollBox
struct UWBP_Popup_Codex_Template_TarotReading_C_GetScrollBox_Params
{
public:
	class UScrollBox*                            ScrollBox;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                            CallFunc_GetScrollBox_ScrollBox;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x13B (0x13B - 0x0)
// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.PopulateTemplate
struct UWBP_Popup_Codex_Template_TarotReading_C_PopulateTemplate_Params
{
public:
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x10(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue;            // 0x38(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x50(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xA0(0x10)(ReferenceParm)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7549[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xB8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Get_Specific_Codex_Subentry_For_Popup_CodexSubentryText; // 0xE0(0x18)(None)
	class FText                                  CallFunc_Get_All_Unlocked_Codex_Subentries_For_Popup_CodexSubentryText; // 0xF8(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_Array_Get_Item;                           // 0x110(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.PreConstruct
struct UWBP_Popup_Codex_Template_TarotReading_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.ExecuteUbergraph_WBP_Popup_Codex_Template_TarotReading
struct UWBP_Popup_Codex_Template_TarotReading_C_ExecuteUbergraph_WBP_Popup_Codex_Template_TarotReading_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


