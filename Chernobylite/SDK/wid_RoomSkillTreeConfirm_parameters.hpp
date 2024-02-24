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

// 0x1A (0x1A - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.GetGamepadIcon
struct UWid_RoomSkillTreeConfirm_C_GetGamepadIcon_Params
{
public:
	class FName                                  Action;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  InitialPS4;                                        // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   InitialX;                                          // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  PS4;                                               // 0xA(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   XBox;                                              // 0xB(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Buttons_X1                   Temp_byte_Variable;                                // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Buttons_X1                   K2Node_Select_Default;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Buttons_PS4                  K2Node_Select_Default_1;                           // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   Temp_byte_Variable_2;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Buttons_X1                   K2Node_Select_Default_2;                           // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  Temp_byte_Variable_3;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  K2Node_Select_Default_3;                           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.SetTextMessage
struct UWid_RoomSkillTreeConfirm_C_SetTextMessage_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  CallFunc_KeyToIcon_OutText;                        // 0x18(0x18)(None)
};

// 0x90 (0x90 - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.SetTimeSinceLastSave
struct UWid_RoomSkillTreeConfirm_C_SetTimeSinceLastSave_Params
{
public:
	class FName                                  SecondsString;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MinutesString;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSinceSave;                                     // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_255E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetAccurateRealTime_Seconds;              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAccurateRealTime_PartialSeconds;       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_257B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_FFloor_ReturnValue_1;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2583[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Select_Default;                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default_1;                           // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2595[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_Dictionary                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x50(0x20)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_ReplaceTimeSinceLastSave_ReturnValue;     // 0x78(0x18)(None)
};

// 0x80 (0x80 - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.ReplaceTimeSinceLastSave
struct UWid_RoomSkillTreeConfirm_C_ReplaceTimeSinceLastSave_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Time;                                              // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_263C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x68(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.UpdateSize
struct UWid_RoomSkillTreeConfirm_C_UpdateSize_Params
{
public:
	struct FVector2D                             CallFunc_GetDesiredSize_ReturnValue;               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9A (0x9A - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.GetButtonName
struct UWid_RoomSkillTreeConfirm_C_GetButtonName_Params
{
public:
	class FText                                  Name;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Text;                                              // 0x18(0x18)(Parm, OutParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x48(0x18)(None)
	bool                                         CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue; // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1; // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26E4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x68(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x80(0x18)(None)
	bool                                         CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_2; // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_3; // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.CustomReplaceText
struct UWid_RoomSkillTreeConfirm_C_CustomReplaceText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  ParsedText;                                        // 0x18(0x18)(Parm, OutParm)
	int32                                        CallFunc_GetAccurateRealTime_Seconds;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAccurateRealTime_PartialSeconds;       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2798[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FFloor_ReturnValue;                       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x88(0x18)(None)
};

// 0xD0 (0xD0 - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.SetButtons
struct UWid_RoomSkillTreeConfirm_C_SetButtons_Params
{
public:
	class FText                                  _Yes__Name;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  _Yes_PC_Action;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PC                   _Yes__PC;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   _Yes__X1;                                          // 0x21(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  _Yes__PS4;                                         // 0x22(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PC                   _Cancel__PC1;                                      // 0x23(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   _Cancel__X1;                                       // 0x24(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  _Cancel__PS4;                                      // 0x25(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  _Cancel__Name;                                     // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  _Cancel_PC_Action;                                 // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  CallFunc_GetGamepadIcon_PS4;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   CallFunc_GetGamepadIcon_XBox;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28BD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x50(0x18)(None)
	class FText                                  CallFunc_GetButtonName_Text;                       // 0x68(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x80(0x18)(None)
	enum class Enum_Buttons_PS4                  CallFunc_GetGamepadIcon_PS4_1;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   CallFunc_GetGamepadIcon_XBox_1;                    // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28CE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetButtonName_Text_1;                     // 0xA0(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0xB8(0x18)(None)
};

// 0x50 (0x50 - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.SetMessage
struct UWid_RoomSkillTreeConfirm_C_SetMessage_Params
{
public:
	class FName                                  KeyName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSinceSave;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_291F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSt_Dictionary                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x10(0x20)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2920[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CustomReplaceText_ParsedText;             // 0x38(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.PreConstruct
struct UWid_RoomSkillTreeConfirm_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C (0x3C - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.Tick
struct UWid_RoomSkillTreeConfirm_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.ExecuteUbergraph_wid_RoomSkillTreeConfirm
struct UWid_RoomSkillTreeConfirm_C_ExecuteUbergraph_wid_RoomSkillTreeConfirm_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x8(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


