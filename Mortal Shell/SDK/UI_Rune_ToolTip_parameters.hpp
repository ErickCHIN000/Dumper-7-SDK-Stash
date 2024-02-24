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

// 0x32 (0x32 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.HandleBackground
struct UUI_Rune_ToolTip_C_HandleBackground_Params
{
public:
	class UTexture2D*                            Local_Texture;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    Temp_byte_Variable;                                // 0x10(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2173[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_Map_Find_Value;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_217D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_Map_Find_Value_1;                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetIsMisc
struct UUI_Rune_ToolTip_C_GetIsMisc_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetRuneTierVisibility
struct UUI_Rune_ToolTip_C_GetRuneTierVisibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetRuneTierText
struct UUI_Rune_ToolTip_C_GetRuneTierText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_ToUpper_ReturnValue;                      // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneTier
struct UUI_Rune_ToolTip_C_SetRuneTier_Params
{
public:
	class FText                                  CallFunc_GetRuneTierText_Text;                     // 0x0(0x18)(None)
};

// 0x8 (0x8 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneTextureIcon
struct UUI_Rune_ToolTip_C_SetRuneTextureIcon_Params
{
public:
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneEffect
struct UUI_Rune_ToolTip_C_SetRuneEffect_Params
{
public:
	class FText                                  CallFunc_GetRuneEffectText_Text;                   // 0x0(0x18)(None)
};

// 0xF0 (0xF0 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetRuneEffectText
struct UUI_Rune_ToolTip_C_GetRuneEffectText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2381[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Rune_BuildMiscText__X_ReturnValue;        // 0x20(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_238D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Rune_BuildMiscText__X_ReturnValue_1;      // 0x40(0x18)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2395[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Rune_LegendaryEffectText_Text_Out;        // 0x60(0x18)(None)
	class FText                                  CallFunc_Rune_BuildText_X__ReturnValue;            // 0x78(0x18)(None)
	class FText                                  CallFunc_Rune_BuildText_X_ReturnValue;             // 0x90(0x18)(None)
	class FText                                  CallFunc_Rune_BuildText__X_ReturnValue;            // 0xA8(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xC0(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0xD8(0x18)(None)
};

// 0x168 (0x168 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetRuneNameText
struct UUI_Rune_ToolTip_C_GetRuneNameText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	int32                                        Temp_int_Variable;                                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2447[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_3;                            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_4;                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_5;                            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_6;                            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_7;                            // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_8;                            // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_9;                            // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_10;                           // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_245D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2469[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x120(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x138(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x150(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneName
struct UUI_Rune_ToolTip_C_SetRuneName_Params
{
public:
	class FText                                  CallFunc_GetRuneNameText_Text;                     // 0x0(0x18)(None)
};

// 0x3C (0x3C - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneTierColor
struct UUI_Rune_ToolTip_C_SetRuneTierColor_Params
{
public:
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x0(0x28)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CallFunc_GetTierColors_ReturnValue;                // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD9 (0xD9 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetCurrentRune
struct UUI_Rune_ToolTip_C_SetCurrentRune_Params
{
public:
	enum class Enum_Rune_Type                    RuneType;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category                RuneCategory;                                      // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2541[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          CurrentRune;                                       // 0x8(0xD0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                         HasRune_;                                          // 0xD8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x130 (0x130 - 0x0)
// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.ExecuteUbergraph_UI_Rune_ToolTip
struct UUI_Rune_ToolTip_C_ExecuteUbergraph_UI_Rune_ToolTip_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Type                    K2Node_CustomEvent_RuneType;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Category                K2Node_CustomEvent_RuneCategory;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_259C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_Rune                          K2Node_CustomEvent_CurrentRune;                    // 0x8(0xD0)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_HasRune_;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0xE0(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0xF8(0x18)(None)
	enum class ESlateVisibility                  CallFunc_GetRuneTierVisibility_ReturnValue;        // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsMisc_ReturnValue;                    // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25B4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x118(0x18)(None)
};

}
}


