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
// Function WBP_StartScreen.WBP_StartScreen_C.UpdateNDAText
struct UWBP_StartScreen_C_UpdateNDAText_Params
{
public:
	bool                                         CallFunc_IsFeatureFlagEnabled_ReturnValue;         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.BP_GetDesiredFocusTarget
struct UWBP_StartScreen_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Platform To Platform Service String
struct UWBP_StartScreen_C_Platform_To_Platform_Service_String_Params
{
public:
	class FString                                Platform_Type;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Platform_Service_String;                           // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Platform_Service_Key;                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E1A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_StringTableIdAndKeyFromText_OutTableId;   // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_StringTableIdAndKeyFromText_OutKey;       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_StringTableIdAndKeyFromText_ReturnValue;  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetTableEntrySourceString_ReturnValue;    // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Debug_VisualizationModes
struct UWBP_StartScreen_C_Debug_VisualizationModes_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDevEnvironment_ReturnValue;             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Show Error ID Status Popup
struct UWBP_StartScreen_C_Show_Error_ID_Status_Popup_Params
{
public:
	int32                                        Error_ID;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description_override;                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	FDelegateProperty_                           CancelFunc;                                        // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  Widget;                                            // 0x30(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Description_Text_Local;                            // 0x38(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FErrorMessageData                     CallFunc_GetErrorMessage_OutErrorMessageData;      // 0x60(0x58)(None)
	bool                                         CallFunc_GetErrorMessage_ReturnValue;              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Popup_General_C*                  CallFunc_Show_Status_Popup_Widget;                 // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.HandleServerErrorMessage
struct UWBP_StartScreen_C_HandleServerErrorMessage_Params
{
public:
	struct FOnlineServiceStatus                  OnlineServiceStatus;                               // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)(ConstParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x40(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_2;                              // 0x58(0x18)(ConstParm)
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x80(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.CloseErrorPopup
struct UWBP_StartScreen_C_CloseErrorPopup_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C8 (0x4C8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnUILoginStateChanged
struct UWBP_StartScreen_C_OnUILoginStateChanged_Params
{
public:
	enum class E_UILoginState                    UILoginState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue;                      // 0x10(0x3F8)(ConstParm)
	class FString                                CallFunc_Platform_To_Platform_Service_String_Platform_Service_String; // 0x408(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x418(0x18)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x438(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x488(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x498(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4B0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_Show_Status_Popup_Widget;                 // 0x4C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.CameraMode_Updated
struct UWBP_StartScreen_C_CameraMode_Updated_Params
{
public:
	enum class E_CC_CameraMode                   CameraView;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Zoom;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.CreateQuitWidget
struct UWBP_StartScreen_C_CreateQuitWidget_Params
{
public:
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerLoggedIn_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Popup_QuitGame_C*                 CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Cinematic Video Done Or Skipped
struct UWBP_StartScreen_C_Cinematic_Video_Done_Or_Skipped_Params
{
public:
	TArray<struct FGameplayTag>                  K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReadyToTravel_ReturnValue;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4FCE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGlobalMusicManager*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayInEditor_ReturnValue;               // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Set Character Proxy Visibility
struct UWBP_StartScreen_C_Set_Character_Proxy_Visibility_Params
{
public:
	bool                                         Show_;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnInputCancel
struct UWBP_StartScreen_C_OnInputCancel_Params
{
public:
	struct FEventReply                           ReturnValue;                                       // 0x0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0xB8(0xB8)(None)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnEulaAcceptResponse
struct UWBP_StartScreen_C_OnEulaAcceptResponse_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.On Show Eula
struct UWBP_StartScreen_C_On_Show_Eula_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5046[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x230 (0x230 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnAnalogValueChanged
struct UWBP_StartScreen_C_OnAnalogValueChanged_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                     InAnalogInputEvent;                                // 0x38(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x80(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x138(0xB8)(None)
	float                                        CallFunc_GetAnalogValue_ReturnValue;               // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x1F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x1F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Temp_real_Variable;                                // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50A9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_A_ImplicitCast;               // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Check If Steam Join
struct UWBP_StartScreen_C_Check_If_Steam_Join_Params
{
public:
	bool                                         DoesPresenceExist;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCommandLineArgument_ReturnValue;       // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCommandLineArgument_ReturnValue_1;     // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5109[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCommandLineArgument_ReturnValue_2;     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue_2;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.UsingGamepadChangedHandler
struct UWBP_StartScreen_C_UsingGamepadChangedHandler_Params
{
public:
	bool                                         UsingGamepad;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Set Destination Realm on Profile Picker
struct UWBP_StartScreen_C_Set_Destination_Realm_on_Profile_Picker_Params
{
public:
	class UWBP_ProfilePicker_C*                  Picker;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5156[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x18(0x18)(None)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5158[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x88(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)(None)
};

// 0x10 (0x10 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.CCAdvanceToConfirmSelected
struct UWBP_StartScreen_C_CCAdvanceToConfirmSelected_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.CharacterCreationStart_RandomAppearance
struct UWBP_StartScreen_C_CharacterCreationStart_RandomAppearance_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.EmptyProfileSlotSelected
struct UWBP_StartScreen_C_EmptyProfileSlotSelected_Params
{
public:
	struct FDataTableRowHandle                   EmptySlot_CharacterAppearance;                     // 0x0(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
};

// 0x260 (0x260 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnProfileSelected
struct UWBP_StartScreen_C_OnProfileSelected_Params
{
public:
	struct FSelectableProfile                    Profile;                                           // 0x0(0x260)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x6 (0x6 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Refresh_Visibility_SignIn
struct UWBP_StartScreen_C_Refresh_Visibility_SignIn_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.CC Assign Player Appearance
struct UWBP_StartScreen_C_CC_Assign_Player_Appearance_Params
{
public:
	struct FDataTableRowHandle                   AppearanceHandle;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterCustomization_Component_C* CustomizationComponent;                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterAppearanceComponent_C*    CallFunc_GetComponentByClass_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterCustomization_Component_C* CallFunc_GetComponentByClass_ReturnValue_1;        // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Show Status Popup
struct UWBP_StartScreen_C_Show_Status_Popup_Params
{
public:
	class FText                                  Title;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Body;                                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	FDelegateProperty_                           CancelFunc;                                        // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  Widget;                                            // 0x40(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x48(0x18)(ConstParm)
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.AfterPush_63A500764B952E900E304888F0B7E085
struct UWBP_StartScreen_C_AfterPush_63A500764B952E900E304888F0B7E085_Params
{
public:
	class UCommonActivatableWidget*              UserWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.BeforePush_63A500764B952E900E304888F0B7E085
struct UWBP_StartScreen_C_BeforePush_63A500764B952E900E304888F0B7E085_Params
{
public:
	class UCommonActivatableWidget*              UserWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.Toggle Cancel Join Vis
struct UWBP_StartScreen_C_Toggle_Cancel_Join_Vis_Params
{
public:
	bool                                         Show_Cancel_Button;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_CancelJoin_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_CancelJoin_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x260 (0x260 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.JoinGameAsProfile
struct UWBP_StartScreen_C_JoinGameAsProfile_Params
{
public:
	struct FSelectableProfile                    Profile;                                           // 0x0(0x260)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.SelectShard
struct UWBP_StartScreen_C_SelectShard_Params
{
public:
	class FString                                Shard;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.ChooseShard
struct UWBP_StartScreen_C_ChooseShard_Params
{
public:
	TArray<class FString>                        Shards;                                            // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnShardSelected
struct UWBP_StartScreen_C_OnShardSelected_Params
{
public:
	class FString                                Shard;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnDeploySelected
struct UWBP_StartScreen_C_OnDeploySelected_Params
{
public:
	struct FDeployment                           Deployment;                                        // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnProfileLogin
struct UWBP_StartScreen_C_OnProfileLogin_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.JoinGameAsNewProfile
struct UWBP_StartScreen_C_JoinGameAsNewProfile_Params
{
public:
	struct FCreateProfile                        Profile;                                           // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnCreateProfileComplete
struct UWBP_StartScreen_C_OnCreateProfileComplete_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnFetchDeployment
struct UWBP_StartScreen_C_OnFetchDeployment_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnDeploymentBootstrapComplete
struct UWBP_StartScreen_C_OnDeploymentBootstrapComplete_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnFetchProfiles
struct UWBP_StartScreen_C_OnFetchProfiles_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnGetShards
struct UWBP_StartScreen_C_OnGetShards_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnPlatformLogin
struct UWBP_StartScreen_C_OnPlatformLogin_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnUsingGamepadChanged_1
struct UWBP_StartScreen_C_OnUsingGamepadChanged_1_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_SignIn_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
struct UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_SignIn_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.OnButtonBaseClicked_Event
struct UWBP_StartScreen_C_OnButtonBaseClicked_Event_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_AcceptNext_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
struct UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_AcceptNext_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_AcceptanceFail_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
struct UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_AcceptanceFail_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.BndEvt__WBP_StartScreen_CBU_AcceptComplete_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
struct UWBP_StartScreen_C_BndEvt__WBP_StartScreen_CBU_AcceptComplete_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28D0 (0x28D0 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.ExecuteUbergraph_WBP_StartScreen
struct UWBP_StartScreen_C_ExecuteUbergraph_WBP_StartScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGlobalMusicManager*                   CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x38(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x48(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatableWidget*              K2Node_CustomEvent_UserWidget_1;                   // 0x58(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatableWidget*              K2Node_CustomEvent_UserWidget;                     // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x68(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatableWidget*              Temp_object_Variable;                              // 0x78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryAcceptEula_ReturnValue;                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57CE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_RevealTrailerVideoWidget_C*       K2Node_DynamicCast_AsWBP_Reveal_Trailer_Video_Widget; // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57D2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x9C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasValidMedia_HasMedia;                   // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_5;   // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryBootstrapDeploymentToRespite_ReturnValue; // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0xBC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_6;   // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xD8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBootstrappedDeploymentRespite_ReturnValue; // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_7;   // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ENWXLogLevel                      Temp_byte_Variable;                                // 0x100(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ReadyToTravel_ReturnValue;                // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Show_Cancel_Button;             // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ENWXLogLevel                      Temp_byte_Variable_1;                              // 0x109(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57FE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_4;               // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x118(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x128(0x18)(ConstParm)
	bool                                         Temp_bool_Variable;                                // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5808[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSelectableProfile                    K2Node_CustomEvent_Profile_1;                      // 0x148(0x260)(None)
	class FString                                K2Node_CustomEvent_Shard_1;                        // 0x3A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_CustomEvent_Shards;                         // 0x3B8(0x10)(ConstParm, ReferenceParm)
	class FString                                K2Node_CustomEvent_Shard;                          // 0x3C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FDeployment                           K2Node_CustomEvent_Deployment;                     // 0x3D8(0x40)(None)
	class UGlobalAudioSubsystem*                 CallFunc_GetEngineSubsystem_ReturnValue;           // 0x418(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x420(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x428(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x438(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x448(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x458(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x460(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x470(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_6;                      // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LogoutPlayer_ReturnValue;                 // 0x481(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5831[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x484(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x494(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5836[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x4A8(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayInEditor_ReturnValue;               // 0x4C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_583F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item;                           // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_UI_SplashScreenArt                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x4D0(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x511(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayInEditor_ReturnValue_1;             // 0x512(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x513(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_584C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_8;   // 0x518(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_9;   // 0x520(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue;                      // 0x528(0x3F8)(ConstParm)
	struct FCreateProfile                        K2Node_CustomEvent_Profile;                        // 0x920(0x70)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x990(0x18)(None)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x9A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x9B0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_10;  // 0x9C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x9C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue_1;                    // 0x9D0(0x3F8)(ConstParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xDC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0xDD8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_11;  // 0xDE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0xDF0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue_2;                    // 0xE00(0x3F8)(ConstParm)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_12;  // 0x11F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue_3;                    // 0x1200(0x3F8)(ConstParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x15F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        CallFunc_Map_Keys_Keys;                            // 0x1608(0x10)(ReferenceParm)
	class FString                                CallFunc_Array_Get_Item_1;                         // 0x1618(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x1628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x162C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_588C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_13;  // 0x1630(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_14;  // 0x1638(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue_4;                    // 0x1640(0x3F8)(ConstParm)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue_5;                    // 0x1A38(0x3F8)(ConstParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1E30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryPlayerProfileLogin_ReturnValue;        // 0x1E31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_589B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_15;  // 0x1E38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_16;  // 0x1E40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryPlayerProfileLogin_ReturnValue_1;      // 0x1E48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x1E49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58A5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_17;  // 0x1E50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryFetchProfiles_ReturnValue;             // 0x1E58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_5;                      // 0x1E59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58C1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_18;  // 0x1E60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_19;  // 0x1E68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue_6;                    // 0x1E70(0x3F8)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x2268(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Platform_To_Platform_Service_String_Platform_Service_String; // 0x2278(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_TrySignin_ReturnValue;                    // 0x2288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x2290(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x22A8(0x50)(HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_4;                      // 0x22F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x2300(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x2310(0x18)(None)
	class UWBP_Popup_General_C*                  CallFunc_Show_Error_ID_Status_Popup_Widget;        // 0x2328(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_3;                      // 0x2330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_2;                      // 0x2331(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Success_1;                      // 0x2332(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58DE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Temp_string_Variable;                              // 0x2338(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x2348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                K2Node_Select_Default;                             // 0x2350(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x2360(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x2378(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x23C8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x23D8(0x18)(None)
	bool                                         K2Node_CustomEvent_Success;                        // 0x23F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x23F4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Popup_General_C*                  CallFunc_Show_Error_ID_Status_Popup_Widget_1;      // 0x2408(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x2410(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_4;              // 0x2420(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_5;              // 0x2428(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x2430(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_6;              // 0x2440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_7;              // 0x2448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0x2450(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0x2460(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0x2470(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5911[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_25;           // 0x2484(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5915[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_Popup_General_C*                  CallFunc_Show_Error_ID_Status_Popup_Widget_2;      // 0x2498(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class ENWXLogLevel                      K2Node_Select_Default_1;                           // 0x24A0(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_591C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x24A8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x24C0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x2510(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x2520(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x2538(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_26;           // 0x2548(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5951[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXJoinFriendSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_20;  // 0x2560(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_27;           // 0x2568(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayInEditor_ReturnValue_2;             // 0x2578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayInEditorSimulateMode_ReturnValue;   // 0x2579(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x257A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5969[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXJoinFriendSubsystem*               CallFunc_GetGameInstanceSubsystem_ReturnValue_21;  // 0x2580(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasPendingJoinRequest_ReturnValue;        // 0x2588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5976[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_28;           // 0x258C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_29;           // 0x259C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AreAutomatedTestsRunning_ReturnValue;     // 0x25AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x25AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x25AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x25AF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x25B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x25B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_598E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_8;              // 0x25B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_1;                            // 0x25C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_2;                            // 0x25C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetGamerTag_ReturnValue;                  // 0x25D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x25E0(0x18)(None)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x25F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_599D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x2600(0x18)(ConstParm)
	class UTexture*                              Temp_object_Variable_3;                            // 0x2618(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_30;           // 0x2620(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bUsingGamepad;                        // 0x2630(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue;         // 0x2638(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_DB_Shard_Screen_C*                CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0x2640(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_2;                              // 0x2648(0x18)(ConstParm)
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue_1;       // 0x2660(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXLocalPlayer*                       CallFunc_GetOwningLocalPlayer_ReturnValue_2;       // 0x2668(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_DB_Shard_sw_DeploymentSelect_C*   CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_1; // 0x2670(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_ProfilePicker_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_2; // 0x2678(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x2680(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue_1;       // 0x2688(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterAppearanceComponent_C*    CallFunc_GetComponentByClass_ReturnValue;          // 0x2690(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAppearanceComponent*                  CallFunc_GetComponentByClass_ReturnValue_1;        // 0x2698(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FString>           CallFunc_GetAppearanceMetadata_OutMetadata;        // 0x26A0(0x50)(None)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x26F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCreateProfile                        K2Node_SetFieldsInStruct_StructOut;                // 0x26F8(0x70)(None)
	bool                                         CallFunc_TryPlayerProfileCreate_ReturnValue;       // 0x2768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_3;                              // 0x2770(0x18)(ConstParm)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_3;               // 0x2788(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_CustomEvent_Button;                         // 0x2790(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x2798(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x27A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x27A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue_1;  // 0x27B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Temp_object_Variable_4;                            // 0x27B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAsyncAction_PushContentToLayerForPlayer* CallFunc_PushContentToLayerForPlayer_ReturnValue;  // 0x27C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x27C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A0B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue_2;  // 0x27D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x27D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PushError_ReturnValue;                    // 0x27E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A1F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXGameInstance*                      K2Node_DynamicCast_AsNWXGame_Instance;             // 0x27E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x27F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue_3;  // 0x27F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PushError_ReturnValue_1;                  // 0x2800(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x2808(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXGameInstance*                      K2Node_DynamicCast_AsNWXGame_Instance_1;           // 0x2810(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x2818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture*                              Temp_object_Variable_5;                            // 0x2820(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOnConsolePlatform_ReturnValue;          // 0x2828(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_4;                              // 0x2830(0x18)(ConstParm)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x2848(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x2850(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXGameInstance*                      K2Node_DynamicCast_AsNWXGame_Instance_2;           // 0x2858(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x2860(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A6B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXGameInstance*                      K2Node_DynamicCast_AsNWXGame_Instance_3;           // 0x2868(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x2870(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5AA0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x2874(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_31;           // 0x2878(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              K2Node_Select_Default_3;                           // 0x2888(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x2890(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_5;                              // 0x2898(0x18)(ConstParm)
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue_3;       // 0x28B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ULocalPlayer*                          CallFunc_GetOwningLocalPlayer_ReturnValue_4;       // 0x28B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_3; // 0x28C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_Popup_General_C*                  CallFunc_CreateWidgetInstanceFromLayer_ReturnValue_4; // 0x28C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_StartScreen.WBP_StartScreen_C.ED_CameraModeChange__DelegateSignature
struct UWBP_StartScreen_C_ED_CameraModeChange__DelegateSignature_Params
{
public:
	enum class E_CC_CameraMode                   CameraMode;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DBB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Zoom_Level;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


