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
// Function UMG_FieldGuide_List_Button_Bestiary.UMG_FieldGuide_List_Button_Bestiary_C.SetSelected
struct UUMG_FieldGuide_List_Button_Bestiary_C_SetSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_FieldGuide_List_Button_Bestiary.UMG_FieldGuide_List_Button_Bestiary_C.PreConstruct
struct UUMG_FieldGuide_List_Button_Bestiary_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7A1 (0x7A1 - 0x0)
// Function UMG_FieldGuide_List_Button_Bestiary.UMG_FieldGuide_List_Button_Bestiary_C.ExecuteUbergraph_UMG_FieldGuide_List_Button_Bestiary
struct UUMG_FieldGuide_List_Button_Bestiary_C_ExecuteUbergraph_UMG_FieldGuide_List_Button_Bestiary_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_379B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x30(0x28)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x58(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x98(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA8(0x18)(None)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBestiaryData                         CallFunc_GetBestiaryDataStruct_BestiaryData;       // 0xD8(0x1D8)(None)
	enum class EValid                            CallFunc_GetBestiaryDataStruct_Paths;              // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Selected;                       // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37CF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x2B8(0x28)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x2E0(0x40)(HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x320(0x28)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x348(0x10)(ReferenceParm)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0x358(0x28)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x380(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0x398(0x28)(None)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_37F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x3C8(0x28)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x3F0(0x88)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x478(0x28)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x4A0(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x528(0x278)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x7A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function UMG_FieldGuide_List_Button_Bestiary.UMG_FieldGuide_List_Button_Bestiary_C.SelectedCreature__DelegateSignature
struct UUMG_FieldGuide_List_Button_Bestiary_C_SelectedCreature__DelegateSignature_Params
{
public:
	struct FBestiaryDataRowHandle                Creature;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int32                                        Percent;                                           // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


