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

// 0x411 (0x411 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.OnUILoginStateChangeHandleCreateProfileFailure
struct UWBP_CC_sw_CharacterNameConfirm_C_OnUILoginStateChangeHandleCreateProfileFailure_Params
{
public:
	enum class E_UILoginState                    UILoginState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CFB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue;                      // 0x18(0x3F8)(ConstParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.DisplayNameValidationMessageAndResetConfirmationUI
struct UWBP_CC_sw_CharacterNameConfirm_C_DisplayNameValidationMessageAndResetConfirmationUI_Params
{
public:
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x10(0x18)(None)
};

// 0x434 (0x434 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.Send Telemetry End
struct UWBP_CC_sw_CharacterNameConfirm_C_Send_Telemetry_End_Params
{
public:
	bool                                         bCancelled;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_Guid_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D52[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue;                      // 0x10(0x3F8)(ConstParm)
	struct FDateTime                             CallFunc_UtcNow_ReturnValue;                       // 0x408(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_DateTimeToUnixTimestamp_ReturnValue;      // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Subtract_Int64Int64_ReturnValue;          // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_GuidToString_ReturnValue;            // 0x420(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_Int64ToInt_ReturnValue;              // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BP_GetDesiredFocusTarget
struct UWBP_CC_sw_CharacterNameConfirm_C_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.GetPrivateName
struct UWBP_CC_sw_CharacterNameConfirm_C_GetPrivateName_Params
{
public:
	class FString                                PrivateName;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.Get_dropdown_ToolTipWidget
struct UWBP_CC_sw_CharacterNameConfirm_C_Get_dropdown_ToolTipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(ConstParm)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.NameConfirm
struct UWBP_CC_sw_CharacterNameConfirm_C_NameConfirm_Params
{
public:
	class FString                                SelectedItem;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESelectInfo                       SelectionType;                                     // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.GetPublicSelectedName
struct UWBP_CC_sw_CharacterNameConfirm_C_GetPublicSelectedName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x10(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.GetTooltipWidget
struct UWBP_CC_sw_CharacterNameConfirm_C_GetTooltipWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(ConstParm)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.SetupDropDownName
struct UWBP_CC_sw_CharacterNameConfirm_C_SetupDropDownName_Params
{
public:
	TArray<class FString>                        Names;                                             // 0x0(0x10)(Edit, BlueprintVisible)
};

// 0x28 (0x28 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.Get_BU_RandomName_ToolTipWidget_0
struct UWBP_CC_sw_CharacterNameConfirm_C_Get_BU_RandomName_ToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  RandomText;                                        // 0x8(0x18)(Edit, BlueprintVisible)
	class UWBP_GenericTooltip_C*                 CallFunc_Create_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BndEvt__WBP_CC_sw_CharacterNameConfirm_txt_Name_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
struct UWBP_CC_sw_CharacterNameConfirm_C_BndEvt__WBP_CC_sw_CharacterNameConfirm_txt_Name_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.OnValidateProfileName
struct UWBP_CC_sw_CharacterNameConfirm_C_OnValidateProfileName_Params
{
public:
	bool                                         bNameIsValid;                                      // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ValidationErrors;                                  // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BndEvt__WBP_CC_sw_CharacterNameConfirm_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
struct UWBP_CC_sw_CharacterNameConfirm_C_BndEvt__WBP_CC_sw_CharacterNameConfirm_WBP_Common_Button_Base_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameCancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
struct UWBP_CC_sw_CharacterNameConfirm_C_BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameCancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameConfirm_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
struct UWBP_CC_sw_CharacterNameConfirm_C_BndEvt__WBP_CC_sw_CharacterNameConfirm_CBU_NameConfirm_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x5F0 (0x5F0 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.ExecuteUbergraph_WBP_CC_sw_CharacterNameConfirm
struct UWBP_CC_sw_CharacterNameConfirm_C_ExecuteUbergraph_WBP_CC_sw_CharacterNameConfirm_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           CallFunc_GetDataTableRowHandles_RowHandles;        // 0x38(0x10)(ReferenceParm)
	TArray<struct FDataTableRowHandle>           CallFunc_GetDataTableRowHandles_RowHandles_1;      // 0x48(0x10)(ReferenceParm)
	class UNWXUILoginSubsystem*                  CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5104[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUILoginInfo                          CallFunc_GetInfo_ReturnValue;                      // 0x68(0x3F8)(ConstParm)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x460(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x464(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x468(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FS_NPCVictorianName                   CallFunc_GetDataTableRowFromName_OutRow;           // 0x478(0x14)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                        Pad_510F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5110[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x498(0x18)(None)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x4B0(0x18)(ConstParm)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x4C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetPublicSelectedName_ReturnValue;        // 0x4D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x4E8(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x500(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x510(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bNameIsValid;                   // 0x520(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5121[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_CustomEvent_ValidationErrors;               // 0x528(0x10)(ConstParm, ReferenceParm)
	class FString                                CallFunc_GetPrivateName_PrivateName;               // 0x538(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FCreateProfile                        K2Node_MakeStruct_CreateProfile;                   // 0x548(0x70)(None)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x5B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x5C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x5C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x5D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x5D8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x5E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.JoinGameAsNewProfile__DelegateSignature
struct UWBP_CC_sw_CharacterNameConfirm_C_JoinGameAsNewProfile__DelegateSignature_Params
{
public:
	struct FCreateProfile                        Profile;                                           // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_CC_sw_CharacterNameConfirm.WBP_CC_sw_CharacterNameConfirm_C.NameConfirmed__DelegateSignature
struct UWBP_CC_sw_CharacterNameConfirm_C_NameConfirmed__DelegateSignature_Params
{
public:
	bool                                         Confirmed;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


