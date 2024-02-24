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
// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.SetSelected
struct UUMG_FieldGuide_List_Button_Item_C_SetSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.PreConstruct
struct UUMG_FieldGuide_List_Button_Item_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAB9 (0xAB9 - 0x0)
// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.ExecuteUbergraph_UMG_FieldGuide_List_Button_Item
struct UUMG_FieldGuide_List_Button_Item_C_ExecuteUbergraph_UMG_FieldGuide_List_Button_Item_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3104[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemStaticData                       CallFunc_GetItemsStaticStruct_ItemsStatic;         // 0x8(0x4D0)(None)
	enum class EValid                            CallFunc_GetItemsStaticStruct_Paths;               // 0x4D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3115[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemableData                         CallFunc_GetItemableStruct_Itemable;               // 0x4E0(0xE8)(None)
	enum class EValid                            CallFunc_GetItemableStruct_Paths;                  // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x5C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3123[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x5D0(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x5F8(0x28)(None)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Selected;                       // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3133[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x638(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x660(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x688(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x6B0(0x28)(None)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3150[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x6E0(0x28)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x708(0x88)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x790(0x28)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x7B8(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x840(0x278)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xAB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function UMG_FieldGuide_List_Button_Item.UMG_FieldGuide_List_Button_Item_C.SelectedItem__DelegateSignature
struct UUMG_FieldGuide_List_Button_Item_C_SelectedItem__DelegateSignature_Params
{
public:
	struct FFieldGuideCategoriesRowHandle        Category;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 Item;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


