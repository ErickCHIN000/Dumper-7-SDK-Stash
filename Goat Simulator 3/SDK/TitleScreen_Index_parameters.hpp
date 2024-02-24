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
// Function TitleScreen_Index.TitleScreen_Index_C.GetGearInfoPanelContainer
struct UTitleScreen_Index_C_GetGearInfoPanelContainer_Params
{
public:
	class UPanelWidget*                          Panel;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16 (0x16 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.LoadButton_Visibility
struct UTitleScreen_Index_C_LoadButton_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DB8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMultipleLevels_Return;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyWorldCollections_ReturnValue;       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.NewGameButton_Visibility
struct UTitleScreen_Index_C_NewGameButton_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMultipleLevels_Return;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.ContinueButton_Visibility
struct UTitleScreen_Index_C_ContinueButton_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E42[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLastLoadedLevel_SlotIndex;             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E44[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetLastLoadedLevel_LevelDataID;           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLastLoadedLevel_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x25 (0x25 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.HasMultipleLevels
struct UTitleScreen_Index_C_HasMultipleLevels_Params
{
public:
	bool                                         Return;                                            // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E72[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGDLCHandler*                         CallFunc_GetDLCHandler_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDLCLevelData>                 CallFunc_GetDLCLevelData_ReturnValue;              // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B8 (0x1B8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.UpdateVersionAndNatLabel
struct UTitleScreen_Index_C_UpdateVersionAndNatLabel_Params
{
public:
	class FString                                CachedNatType;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetVersionString_ReturnValue;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_LeftS;                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Split_RightS;                             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Split_ReturnValue;                        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EA6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x48(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x60(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xF8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x108(0x18)(None)
	enum class EPlatformFlagsBP                  CallFunc_GetPlatformForUI_ReturnValue;             // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EB3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetVersionString_ReturnValue_1;           // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x138(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x150(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x190(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x1A0(0x18)(None)
};

// 0x13 (0x13 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.LoadButton_IsEnabled
struct UTitleScreen_Index_C_LoadButton_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMultipleLevels_Return;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EEB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyWorldCollections_ReturnValue;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PlayButton_IsEnabled_ReturnValue;         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.NewGameButton_IsEnabled
struct UTitleScreen_Index_C_NewGameButton_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMultipleLevels_Return;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_PlayButton_IsEnabled_ReturnValue;         // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.SetLastOpenedMenuTab
struct UTitleScreen_Index_C_SetLastOpenedMenuTab_Params
{
public:
	struct FGameplayTag                          MenuTab;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UGGMenuUserWidget*                     CallFunc_GetTopMenu_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TitleScreen_C*                    K2Node_DynamicCast_AsUMG_Title_Screen;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.GetLastOpenedMenuTab
struct UTitleScreen_Index_C_GetLastOpenedMenuTab_Params
{
public:
	struct FGameplayTag                          MenuTab;                                           // 0x0(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	class UGGMenuUserWidget*                     CallFunc_GetTopMenu_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TitleScreen_C*                    K2Node_DynamicCast_AsUMG_Title_Screen;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.ContinueButton_IsEnabled
struct UTitleScreen_Index_C_ContinueButton_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayButton_IsEnabled_ReturnValue;         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F9F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLastLoadedLevel_SlotIndex;             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetLastLoadedLevel_LevelDataID;           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLastLoadedLevel_ReturnValue;           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xBA (0xBA - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.ContinueButtonAction
struct UTitleScreen_Index_C_ContinueButtonAction_Params
{
public:
	class UGGDLCHandler*                         CallFunc_GetDLCHandler_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGMenuUserWidget*                     CallFunc_GetOwningMenu_ReturnValue;                // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_TitleScreen_C*                    K2Node_DynamicCast_AsUMG_Title_Screen;             // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FFA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetSelectedWorldCollectionSlot_ReturnValue; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue_1;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetLastLoadedLevel_SlotIndex;             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1001[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetLastLoadedLevel_LevelDataID;           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLastLoadedLevel_ReturnValue;           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1007[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetLastLoadedLevel_SlotIndex_1;           // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetLastLoadedLevel_LevelDataID_1;         // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetLastLoadedLevel_ReturnValue_1;         // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_100E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDLCLevelData                         CallFunc_GetDLCLevelDataFromID_ReturnValue;        // 0x68(0x50)(None)
	bool                                         CallFunc_SelectNewWorldCollection_ReturnValue;     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.InitGoOnlineButton
struct UTitleScreen_Index_C_InitGoOnlineButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUserOnline_IsCreatingLobby;             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUserOnline_IsInSplitScreen;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUserOnline_ReturnValue;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlatformFlagsBP                  CallFunc_GetPlatformForUI_ReturnValue;             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.InitLoadButton
struct UTitleScreen_Index_C_InitLoadButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1075[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	bool                                         CallFunc_HasMultipleLevels_Return;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1079[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x40(0x18)(None)
};

// 0xBA (0xBA - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.NewGameButtonAction
struct UTitleScreen_Index_C_NewGameButtonAction_Params
{
public:
	class UGGDLCHandler*                         CallFunc_GetDLCHandler_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGMenuUserWidget*                     CallFunc_GetOwningMenu_ReturnValue;                // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDLCLevelData                         CallFunc_GetDLCLevelDataFromID_ReturnValue;        // 0x10(0x50)(None)
	class UUMG_TitleScreen_C*                    K2Node_DynamicCast_AsUMG_Title_Screen;             // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMenuNavigationContext                CallFunc_MakeMenuNavigationContextStruct_ReturnValue; // 0x70(0x28)(None)
	bool                                         CallFunc_RequestTabNavigation_ReturnValue;         // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFirstEmptyWorldCollectionSlot_ReturnValue; // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_10AD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue_1;       // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddAndSelectNewWorldCollection_ReturnValue; // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanCreateAdditionalWorldCollection_ReturnValue; // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.Load Button Action
struct UTitleScreen_Index_C_Load_Button_Action_Params
{
public:
	bool                                         CallFunc_RequestTabNavigation_ReturnValue;         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasMultipleLevels_Return;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10DD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RequestTabNavigation_ReturnValue_1;       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyWorldCollections_ReturnValue;       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.IsSocialMediaEnabled
struct UTitleScreen_Index_C_IsSocialMediaEnabled_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.IsNewsEnabled
struct UTitleScreen_Index_C_IsNewsEnabled_Params
{
public:
	bool                                         NewParam;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.UpdateGoOnlineButton
struct UTitleScreen_Index_C_UpdateGoOnlineButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUserOnline_IsCreatingLobby;             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUserOnline_IsInSplitScreen;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUserOnline_ReturnValue;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlatformFlagsBP                  CallFunc_GetPlatformForUI_ReturnValue;             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.SetHintBarVisible
struct UTitleScreen_Index_C_SetHintBarVisible_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_114E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1151[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x288 (0x288 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnFocusReceived
struct UTitleScreen_Index_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_116E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x100(0xB8)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1170[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue;        // 0x1C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default;                             // 0x1C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_SetUserFocus_ReturnValue;                 // 0x1D0(0xB8)(None)
};

// 0x28 (0x28 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.HandleListNavigation
struct UTitleScreen_Index_C_HandleListNavigation_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1181[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSocialMediaEnabled_Enabled;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1184[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_NavigateList_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.Quit Button Visibility
struct UTitleScreen_Index_C_Quit_Button_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDesktopPlatform_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5A (0x5A - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnPlaytestAgreementAccepted
struct UTitleScreen_Index_C_OnPlaytestAgreementAccepted_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               Object;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                ButtonID;                                          // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class EPopupResponse                    Response;                                          // 0x28(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeyValueBase                         CallFunc_KeyValue_BoolToKeyValue_ReturnValue;      // 0x30(0x28)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_UpdateKeyValueData_ReturnValue;           // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3AA (0x3AA - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.CreatePlaytestAgreement
struct UTitleScreen_Index_C_CreatePlaytestAgreement_Params
{
public:
	struct FPopupButton                          K2Node_MakeStruct_PopupButton;                     // 0x0(0x2B0)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2B0(0x10)(ZeroConstructor, NoDestructor)
	TArray<struct FPopupButton>                  K2Node_MakeArray_Array;                            // 0x2C0(0x10)(ReferenceParm)
	bool                                         CallFunc_IsPlayTestingBuild_ReturnValue;           // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11B0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPopupDataRow                         CallFunc_MakePopupDataRow_ReturnValue;             // 0x2D8(0x90)(None)
	class AGGPlayerController*                   CallFunc_GetPrimaryGGPlayerController_ReturnValue; // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGPopupUserWidget*                    CallFunc_CreatePopupCustom_OutWidget;              // 0x370(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreatePopupCustom_ReturnValue;            // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetKeyValueData_Found;                    // 0x379(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11B3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeyValueBase                         CallFunc_GetKeyValueData_ReturnValue;              // 0x380(0x28)(None)
	bool                                         CallFunc_KeyValue_KeyValueToBool_ReturnValue;      // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.NavigationNewsWidget
struct UTitleScreen_Index_C_NavigationNewsWidget_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11B8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSocialMediaEnabled_Enabled;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11BB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_1;      // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.NavigationSocialMediaWidget
struct UTitleScreen_Index_C_NavigationSocialMediaWidget_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_11BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x15 (0x15 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.DetermineWidgetVisibility
struct UTitleScreen_Index_C_DetermineWidgetVisibility_Params
{
public:
	struct FGameplayTag                          MenuTag;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_MatchesTag_ReturnValue;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlatformFlagsBP                  CallFunc_GetPlatformForUI_ReturnValue;             // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.PlayButton_IsEnabled
struct UTitleScreen_Index_C_PlayButton_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsForcedAlwaysOnline_ReturnValue;         // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLoggedIn_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_bIsOwner;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.InLobby_Visibility
struct UTitleScreen_Index_C_InLobby_Visibility_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInLobby_bIsOwner;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInLobby_ReturnValue;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnTabNavigation
struct UTitleScreen_Index_C_OnTabNavigation_Params
{
public:
	struct FGameplayTag                          InTag;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                Context;                                           // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1203[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGMenuComponent*                      CallFunc_GetGGMenuComponent_ReturnValue;           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnTabNavigation_ReturnValue;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasActivePopup_ReturnValue;               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1204[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue;        // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.GetInitialWidgetFocus
struct UTitleScreen_Index_C_GetInitialWidgetFocus_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTag                          CallFunc_GetLastOpenedMenuTab_MenuTab;             // 0xC(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1217[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue;        // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue;       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadButton_IsEnabled_ReturnValue;         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1219[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GetLastOpenedMenuTab_MenuTab_1;           // 0x24(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_121A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_1;      // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue_1;     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_121C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GetLastOpenedMenuTab_MenuTab_2;           // 0x3C(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue_2;     // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_121E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          CallFunc_GetLastOpenedMenuTab_MenuTab_3;           // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ContinueButton_IsEnabled_ReturnValue;     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_GameplayTag_ReturnValue_3;     // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NewGameButton_IsEnabled_ReturnValue;      // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1220[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_2;      // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_3;      // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_4;      // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default;                             // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default_1;                           // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_5;      // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_6;      // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayButton_IsEnabled_ReturnValue;         // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_122A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_7;      // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default_2;                           // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default_3;                           // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnActionMappingPressed
struct UTitleScreen_Index_C_OnActionMappingPressed_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_OnActionMappingPressed_ReturnValue;       // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsNewsEnabled_NewParam;                   // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnLoaded_25E8D8384799F047F57536B275DFDFBB
struct UTitleScreen_Index_C_OnLoaded_25E8D8384799F047F57536B275DFDFBB_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnLoaded_9B4745484F9C3CA1779A29B11A2457C7
struct UTitleScreen_Index_C_OnLoaded_9B4745484F9C3CA1779A29B11A2457C7_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnLoaded_3A8D1984482A1E9F034C538B23E76D64
struct UTitleScreen_Index_C_OnLoaded_3A8D1984482A1E9F034C538B23E76D64_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.PreConstruct
struct UTitleScreen_Index_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_NewsWidget_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature
struct UTitleScreen_Index_C_BndEvt__TitleScreen_Index_NewsWidget_K2Node_ComponentBoundEvent_0_OnWidgetInteracted__DelegateSignature_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x28 (0x28 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.ShowTitleScreenWidget
struct UTitleScreen_Index_C_ShowTitleScreenWidget_Params
{
public:
	struct FMenuNavigationContext                Context;                                           // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x30 (0x30 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnMenuEntered
struct UTitleScreen_Index_C_OnMenuEntered_Params
{
public:
	struct FGameplayTag                          InTag;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                Context;                                           // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_18_OnWidgetInteracted__DelegateSignature
struct UTitleScreen_Index_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_18_OnWidgetInteracted__DelegateSignature_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_17_OnWidgetInteracted__DelegateSignature
struct UTitleScreen_Index_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_17_OnWidgetInteracted__DelegateSignature_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__FriendsButton_K2Node_ComponentBoundEvent_16_OnWidgetInteracted__DelegateSignature
struct UTitleScreen_Index_C_BndEvt__FriendsButton_K2Node_ComponentBoundEvent_16_OnWidgetInteracted__DelegateSignature_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_14_OnWidgetInteracted__DelegateSignature
struct UTitleScreen_Index_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_14_OnWidgetInteracted__DelegateSignature_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature
struct UTitleScreen_Index_C_BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_1_OnVisibilityChangedEvent__DelegateSignature_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnMenuExited
struct UTitleScreen_Index_C_OnMenuExited_Params
{
public:
	struct FGameplayTag                          InTag;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                Context;                                           // 0x8(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB8 (0xB8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_2_OnWidgetInteracted__DelegateSignature
struct UTitleScreen_Index_C_BndEvt__TitleScreen_Index_GoOnlineButton_K2Node_ComponentBoundEvent_2_OnWidgetInteracted__DelegateSignature_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x3C (0x3C - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.Tick
struct UTitleScreen_Index_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.Preparation Complete
struct UTitleScreen_Index_C_Preparation_Complete_Params
{
public:
	bool                                         bWasSuccess;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB8 (0xB8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_ContinueButton_K2Node_ComponentBoundEvent_3_OnWidgetInteracted__DelegateSignature
struct UTitleScreen_Index_C_BndEvt__TitleScreen_Index_ContinueButton_K2Node_ComponentBoundEvent_3_OnWidgetInteracted__DelegateSignature_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.SetPlayerGameData
struct UTitleScreen_Index_C_SetPlayerGameData_Params
{
public:
	class UGGPlayerGameDataAsset*                PlayerGameData;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB8 (0xB8 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.BndEvt__TitleScreen_Index_NewGameButton_K2Node_ComponentBoundEvent_12_OnWidgetInteracted__DelegateSignature
struct UTitleScreen_Index_C_BndEvt__TitleScreen_Index_NewGameButton_K2Node_ComponentBoundEvent_12_OnWidgetInteracted__DelegateSignature_Params
{
public:
	class UGGUserWidget*                         Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         PointerEvent;                                      // 0x8(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FKeyEvent                             KeyEvent;                                          // 0x78(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnNatTypeUpdated
struct UTitleScreen_Index_C_OnNatTypeUpdated_Params
{
public:
	enum class EGGCachedNATType                  NATType;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.OnLobbyJoined
struct UTitleScreen_Index_C_OnLobbyJoined_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9EC (0x9EC - 0x0)
// Function TitleScreen_Index.TitleScreen_Index_C.ExecuteUbergraph_TitleScreen_Index
struct UTitleScreen_Index_C_ExecuteUbergraph_TitleScreen_Index_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UButtonSlot*                           K2Node_DynamicCast_AsButton_Slot;                  // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGUserWidget*                         K2Node_ComponentBoundEvent_Widget_7;               // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_ComponentBoundEvent_PointerEvent_7;         // 0x58(0x70)(None)
	struct FKeyEvent                             K2Node_ComponentBoundEvent_KeyEvent_7;             // 0xC8(0x40)(None)
	struct FMenuNavigationContext                K2Node_CustomEvent_Context;                        // 0x108(0x28)(None)
	struct FGameplayTag                          K2Node_Event_InTag_1;                              // 0x130(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                K2Node_Event_Context_1;                            // 0x138(0x28)(None)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Temp_object_Variable_1;                            // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGUserWidget*                         K2Node_ComponentBoundEvent_Widget_6;               // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_ComponentBoundEvent_PointerEvent_6;         // 0x188(0x70)(None)
	struct FKeyEvent                             K2Node_ComponentBoundEvent_KeyEvent_6;             // 0x1F8(0x40)(None)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12DB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGUserWidget*                         K2Node_ComponentBoundEvent_Widget_5;               // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_ComponentBoundEvent_PointerEvent_5;         // 0x248(0x70)(None)
	struct FKeyEvent                             K2Node_ComponentBoundEvent_KeyEvent_5;             // 0x2B8(0x40)(None)
	class UGGUserWidget*                         K2Node_ComponentBoundEvent_Widget_4;               // 0x2F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_ComponentBoundEvent_PointerEvent_4;         // 0x300(0x70)(None)
	struct FKeyEvent                             K2Node_ComponentBoundEvent_KeyEvent_4;             // 0x370(0x40)(None)
	class UGGUserWidget*                         K2Node_ComponentBoundEvent_Widget_3;               // 0x3B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_ComponentBoundEvent_PointerEvent_3;         // 0x3B8(0x70)(None)
	struct FKeyEvent                             K2Node_ComponentBoundEvent_KeyEvent_3;             // 0x428(0x40)(None)
	bool                                         CallFunc_RequestTabNavigation_ReturnValue;         // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RequestTabNavigation_ReturnValue_1;       // 0x469(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_ComponentBoundEvent_InVisibility;           // 0x46A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x46B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAnyUserFocus_ReturnValue;              // 0x46C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasFocusedDescendants_ReturnValue;        // 0x46D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue;        // 0x470(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Event_InTag;                                // 0x47C(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMenuNavigationContext                K2Node_Event_Context;                              // 0x488(0x28)(None)
	class UGGUserWidget*                         K2Node_ComponentBoundEvent_Widget_2;               // 0x4B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_ComponentBoundEvent_PointerEvent_2;         // 0x4B8(0x70)(None)
	struct FKeyEvent                             K2Node_ComponentBoundEvent_KeyEvent_2;             // 0x528(0x40)(None)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x568(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGGameUserSettings*                   CallFunc_Get_ReturnValue;                          // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bWasSuccess;                    // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGUserWidget*                         K2Node_ComponentBoundEvent_Widget_1;               // 0x5B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_ComponentBoundEvent_PointerEvent_1;         // 0x5C0(0x70)(None)
	struct FKeyEvent                             K2Node_ComponentBoundEvent_KeyEvent_1;             // 0x630(0x40)(None)
	class UGGPlayerGameDataAsset*                K2Node_Event_PlayerGameData;                       // 0x670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGUserWidget*                         K2Node_ComponentBoundEvent_Widget;                 // 0x678(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_ComponentBoundEvent_PointerEvent;           // 0x680(0x70)(None)
	struct FKeyEvent                             K2Node_ComponentBoundEvent_KeyEvent;               // 0x6F0(0x40)(None)
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue;             // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsConsolePlatform_ReturnValue;            // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded_1;                       // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EGGCachedNATType                  K2Node_CustomEvent_NATType;                        // 0x749(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12F0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue_1;           // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x758(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_CachedNATTypeString_ReturnValue;          // 0x768(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMenuNavigationContext                CallFunc_MakeMenuNavigationContextStruct_ReturnValue; // 0x778(0x28)(None)
	bool                                         CallFunc_RequestTabNavigation_ReturnValue_2;       // 0x7A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_12F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue_2;           // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue_3;           // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_12FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_CachedNATTypeString_ReturnValue_1;        // 0x7C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGGDLCHandler*                         CallFunc_GetDLCHandler_ReturnValue;                // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue;         // 0x7D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDLCLevelData>                 CallFunc_GetDLCLevelData_ReturnValue;              // 0x7E0(0x10)(ReferenceParm)
	struct FDLCLevelData                         CallFunc_Array_Get_Item;                           // 0x7F0(0x50)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x840(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1301[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       CallFunc_MakeSoftObjectPath_ReturnValue;           // 0x858(0x18)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1302[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UObject>                CallFunc_Conv_SoftObjPathToSoftObjRef_ReturnValue; // 0x878(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class FString                                CallFunc_GetBaseFilename_ReturnValue;              // 0x8A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable_2;                            // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded_2;                       // 0x8B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGGPlayerWorldAreaDataAsset*           K2Node_DynamicCast_AsGGPlayer_World_Area_Data_Asset; // 0x8C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x8C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1306[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x8CC(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x8DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGProgression*                        CallFunc_GetPlayerProgression_ReturnValue_1;       // 0x8E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                CallFunc_GetSlotsClaimedByProvider_ReturnValue;    // 0x8F0(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x900(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Get_Item_1;                         // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_130D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWorldStats                           CallFunc_GetWorldStatsForWorld_ReturnValue;        // 0x918(0x20)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x938(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetMostRelevantArea_ReturnValue;          // 0x93C(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x944(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetThumbnailForArea_ReturnValue;          // 0x948(0x28)(UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x970(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue_1; // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlatformFlagsBP                  CallFunc_GetPlatformForUI_ReturnValue;             // 0x981(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1315[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x984(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x994(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1317[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x998(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue_4;           // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bSuccess;                       // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_131B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CallFunc_GetInitialWidgetFocus_ReturnValue_1;      // 0x9B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlatformFlagsBP                  CallFunc_GetPlatformForUI_ReturnValue_1;           // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x9C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_131C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x9C4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_131D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGGOnlineManager*                      CallFunc_GetOnlineManager_ReturnValue_5;           // 0x9D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x9E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x9E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1320[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x9E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


