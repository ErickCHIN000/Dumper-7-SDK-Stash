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

// 0x590 (0x590 - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.SetHoverdPrompt
struct UUMG_ProspectPin_C_SetHoverdPrompt_Params
{
public:
	enum class E_ProspectState                   ProspectState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_548D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           OccupiedColour;                                    // 0x8(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           JoinColour;                                        // 0x30(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           SettledColour;                                     // 0x58(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           ClaimedColour;                                     // 0x80(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           HostColour;                                        // 0xA8(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           InactiveColour;                                    // 0xD0(0x28)(Edit, BlueprintVisible)
	struct FSlateBrush                           OccupiedButton;                                    // 0xF8(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           JoinButton;                                        // 0x180(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           SettledButton;                                     // 0x208(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           ClaimedButton;                                     // 0x290(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           HostButton;                                        // 0x318(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           InactiveButton;                                    // 0x3A0(0x88)(Edit, BlueprintVisible)
	enum class E_ProspectState                   Temp_byte_Variable;                                // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ProspectState                   Temp_byte_Variable_1;                              // 0x429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54D3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x430(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x448(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x460(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x478(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x490(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x4A8(0x18)(None)
	enum class E_ProspectState                   Temp_byte_Variable_2;                              // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x4C8(0x18)(None)
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0x4E0(0x28)(None)
	struct FSlateBrush                           K2Node_Select_Default_2;                           // 0x508(0x88)(ConstParm)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.SetPromptText
struct UUMG_ProspectPin_C_SetPromptText_Params
{
public:
	enum class E_ProspectState                   ProspectState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5573[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Claimed;                                           // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  Inactive;                                          // 0x20(0x18)(Edit, BlueprintVisible)
	class FText                                  Settled;                                           // 0x38(0x18)(Edit, BlueprintVisible)
	class FText                                  Occupied;                                          // 0x50(0x18)(Edit, BlueprintVisible)
	class FText                                  Join_In_Progress;                                  // 0x68(0x18)(Edit, BlueprintVisible)
	class FText                                  Begin_Hosting;                                     // 0x80(0x18)(Edit, BlueprintVisible)
	enum class E_ProspectState                   Temp_byte_Variable;                                // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_558B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0xA0(0x18)(ConstParm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.SetHasClaimedProspect
struct UUMG_ProspectPin_C_SetHasClaimedProspect_Params
{
public:
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.SetTime
struct UUMG_ProspectPin_C_SetTime_Params
{
public:
	TArray<class FString>                        Time;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_563B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x50(0x18)(None)
	class FString                                CallFunc_Array_Get_Item_2;                         // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Array_Get_Item_3;                         // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x88(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0xA0(0x18)(None)
};

// 0x149 (0x149 - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.SetState
struct UUMG_ProspectPin_C_SetState_Params
{
public:
	enum class E_ProspectState                   NewState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5716[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x30(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x58(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x80(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_4;                    // 0xA8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_5;                    // 0xD0(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_6;                    // 0xF8(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_7;                    // 0x120(0x28)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC8 (0xC8 - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.Update Pin Visuals
struct UUMG_ProspectPin_C_Update_Pin_Visuals_Params
{
public:
	enum class E_PinState                        PinState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_PinState                        Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_PinState                        Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_PinState                        Temp_byte_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_PinState                        Temp_byte_Variable_3;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_PinState                        Temp_byte_Variable_4;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5845[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x8(0x28)(None)
	struct FLinearColor                          K2Node_Select_Default;                             // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_2;                           // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_3;                           // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_PinState                        Temp_byte_Variable_5;                              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5859[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default_4;                           // 0x78(0x28)(None)
	struct FSlateColor                           K2Node_Select_Default_5;                           // 0xA0(0x28)(None)
};

// 0xC1A (0xC1A - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.SetProspectInfo
struct UUMG_ProspectPin_C_SetProspectInfo_Params
{
public:
	struct FFProspectServerInfo                  Prospect;                                          // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_5AE9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVersionSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFormattedVersion_ReturnValue;          // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x1B8(0x40)(HasGetValueTypeHash)
	class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x1F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x208(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x218(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x230(0x18)(None)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFactionMissionsRowHandle             CallFunc_MakeFactionMissions_ReturnValue;          // 0x258(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue;             // 0x270(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FFactionMission                       CallFunc_GetFactionMissionsStruct_FactionMissions; // 0x288(0xF0)(None)
	enum class EValid                            CallFunc_GetFactionMissionsStruct_Paths;           // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList;       // 0x380(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths;              // 0x648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x649(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x64A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B42[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x650(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x660(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x678(0x18)(None)
	enum class EIcarusProspectDifficulty         Temp_byte_Variable;                                // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x691(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B5B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x698(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x6B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B62[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x6B8(0x18)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x6D4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                CallFunc_MakeProspectList_ReturnValue_1;           // 0x6DC(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B71[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusProspect                       CallFunc_GetProspectListStruct_ProspectList_1;     // 0x6F8(0x2C8)(None)
	enum class EValid                            CallFunc_GetProspectListStruct_Paths_1;            // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x9C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSession_ReturnValue;               // 0x9C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B72[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetMaxPlayers_ReturnValue;                // 0x9C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetCurrentPlayers_ReturnValue;            // 0x9C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x9CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x9D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x9E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x9E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x9F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xA08(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0xA20(0x18)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0xA38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0xA48(0x18)(None)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xA60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xA70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0xA80(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xA98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSession_ReturnValue_1;             // 0xA99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BE4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSessionPropertyKeyPair>       CallFunc_GetExtraSettings_ExtraSettings;           // 0xAA0(0x10)(ReferenceParm)
	class FString                                CallFunc_GetGameVersionFromExtraSettings_ReturnValue; // 0xAB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0xAC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0xAD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0xAE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xAE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C02[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default_1;                           // 0xAE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0xAF8(0x18)(None)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xB10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C10[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB18(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xB58(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xB68(0x18)(None)
	bool                                         Temp_bool_Variable_3;                              // 0xB80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xB81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0xB82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xB83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0xB84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C4A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0xB88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_ProspectState                   CallFunc_CalculateProspectState_ProspectState;     // 0xB90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0xB91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0xB92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid_1;      // 0xB93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue_1;  // 0xB98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_Select_Default_3;                           // 0xBA0(0x28)(None)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0xBC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetUserID_ReturnValue;                    // 0xBD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0xBE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C6E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_4;                           // 0xBE8(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0xC00(0x18)(None)
	bool                                         Temp_bool_Variable_4;                              // 0xC18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_5;                           // 0xC19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.Tick
struct UUMG_ProspectPin_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x82 (0x82 - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.ExecuteUbergraph_UMG_ProspectPin
struct UUMG_ProspectPin_C_ExecuteUbergraph_UMG_ProspectPin_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DBD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x10(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FDateTime                             CallFunc_UtcNow_ReturnValue;                       // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue_1;            // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             CallFunc_ConvertToDateTime_ReturnValue;            // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_FormatTimeLengthDigital_Time;             // 0x70(0x10)(ReferenceParm)
	bool                                         CallFunc_Less_DateTimeDateTime_ReturnValue;        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A1 (0x1A1 - 0x0)
// Function UMG_ProspectPin.UMG_ProspectPin_C.ProspectSelected__DelegateSignature
struct UUMG_ProspectPin_C_ProspectSelected__DelegateSignature_Params
{
public:
	struct FFProspectServerInfo                  Prospect;                                          // 0x0(0x19B)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	uint8                                        Pad_5E1A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Active;                                            // 0x1A0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


