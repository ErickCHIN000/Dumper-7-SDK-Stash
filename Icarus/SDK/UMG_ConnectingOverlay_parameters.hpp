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
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.IsEscapeMenuDisabled
struct UUMG_ConnectingOverlay_C_IsEscapeMenuDisabled_Params
{
public:
	bool                                         Disabled;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B8 (0x1B8 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Show Pak Meta Popup if Required
struct UUMG_ConnectingOverlay_C_Show_Pak_Meta_Popup_if_Required_Params
{
public:
	bool                                         CallFunc_ShouldShowPopup_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2137[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetPakMetaLongMessage_MessageOut;         // 0x8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_GetPakMetaShortMessage_OutMessage;        // 0x60(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x78(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(ReferenceParm)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2154[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD0(0x18)(None)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0xE8(0x98)(ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x180(0x10)(ZeroConstructor, NoDestructor)
	TArray<class UUMG_UserInterface_TitleScreen_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x190(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2167[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_TitleScreen_C*      CallFunc_Array_Get_Item;                           // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF9 (0xF9 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.GetPakMetaShortMessage
struct UUMG_ConnectingOverlay_C_GetPakMetaShortMessage_Params
{
public:
	struct FPakMetaDetail                        PakDetail;                                         // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  OutMessage;                                        // 0xA8(0x18)(Parm, OutParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xC0(0x18)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue;             // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue_1;           // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue_2;           // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0xE0(0x18)(None)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x678 (0x678 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.GetPakMetaLongMessage
struct UUMG_ConnectingOverlay_C_GetPakMetaLongMessage_Params
{
public:
	struct FPakMetaDetail                        PakDetail;                                         // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  MessageOut;                                        // 0xA8(0x18)(Parm, OutParm)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0xC0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xD8(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2332[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x120(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x138(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue;             // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2344[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x180(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x190(0x18)(None)
	class FString                                CallFunc_FileDetailsToString_ReturnValue;          // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x1C8(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1E0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1F8(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x238(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x278(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x290(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x2A0(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x2E0(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x2F8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x310(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue_1;           // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_237C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_FileDetailsToString_ReturnValue_1;        // 0x358(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x368(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_2;            // 0x380(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0x398(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_7;            // 0x3D8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x418(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x428(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x440(0x18)(None)
	class FString                                CallFunc_FileDetailsToString_ReturnValue_2;        // 0x458(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_8;            // 0x468(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_6;          // 0x4A8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_9;            // 0x4C0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_3;                          // 0x500(0x10)(ReferenceParm)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue_2;           // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_3;                     // 0x518(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_3;            // 0x530(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_10;           // 0x548(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_7;          // 0x588(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_11;           // 0x5A0(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue_3;           // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_FileDetailsToString_ReturnValue_3;        // 0x5E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_8;          // 0x5F8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_12;           // 0x610(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_4;                          // 0x650(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_4;                     // 0x660(0x18)(None)
};

// 0x168 (0x168 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CheckPakMeta
struct UUMG_ConnectingOverlay_C_CheckPakMeta_Params
{
public:
	class FText                                  CallFunc_GetPakMetaShortMessage_OutMessage;        // 0x0(0x18)(None)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue_1;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPakResultMatch_ReturnValue_2;           // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetPakMetaLongMessage_MessageOut;         // 0x20(0x18)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x38(0x28)(None)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x60(0x28)(None)
	bool                                         Temp_bool_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           K2Node_Select_Default;                             // 0x90(0x28)(None)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPakMetaDetail                        CallFunc_CheckGameContentHash_ReturnValue;         // 0xC0(0xA8)(None)
};

// 0x20 (0x20 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Log
struct UUMG_ConnectingOverlay_C_Log_Params
{
public:
	class FString                                Description;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.ShowCharacterSelectScreen
struct UUMG_ConnectingOverlay_C_ShowCharacterSelectScreen_Params
{
public:
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x229 (0x229 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Initialise
struct UUMG_ConnectingOverlay_C_Initialise_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2630[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x8(0x18)(None)
	class FText                                  CallFunc_MakeLiteralText_ReturnValue_1;            // 0x20(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x38(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x78(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB8(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xC8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xD8(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0xF0(0x18)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x108(0x10)(ZeroConstructor, NoDestructor)
	TArray<class UUMG_UserInterface_TitleScreen_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x118(0x10)(ReferenceParm, ContainsInstancedReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UserInterface_TitleScreen_C*      CallFunc_Array_Get_Item;                           // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TitleScreenGameMode_C*             K2Node_DynamicCast_AsBP_Title_Screen_Game_Mode;    // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_265F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_CheckIfDriversAreUpToDate_ReturnValue;    // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2670[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x168(0x18)(None)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0x180(0x98)(ContainsInstancedReference)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_IcarusGameInstance_C*              K2Node_DynamicCast_AsBP_Icarus_Game_Instance;      // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnFail_2E20AAC94911EA94788DB58E9DB4C4EF
struct UUMG_ConnectingOverlay_C_OnFail_2E20AAC94911EA94788DB58E9DB4C4EF_Params
{
public:
	struct FResGetUserProfile                    Response;                                          // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x50 (0x50 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF
struct UUMG_ConnectingOverlay_C_OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF_Params
{
public:
	struct FResGetUserProfile                    Response;                                          // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x50 (0x50 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnFail_721D4B3242A6C8BE1C7381BDBF55A696
struct UUMG_ConnectingOverlay_C_OnFail_721D4B3242A6C8BE1C7381BDBF55A696_Params
{
public:
	struct FResGetUserProfile                    Response;                                          // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x50 (0x50 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnSuccess_721D4B3242A6C8BE1C7381BDBF55A696
struct UUMG_ConnectingOverlay_C_OnSuccess_721D4B3242A6C8BE1C7381BDBF55A696_Params
{
public:
	struct FResGetUserProfile                    Response;                                          // 0x0(0x50)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnConnectMessageEvent
struct UUMG_ConnectingOverlay_C_OnConnectMessageEvent_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
struct UUMG_ConnectingOverlay_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
struct UUMG_ConnectingOverlay_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CloseSettings
struct UUMG_ConnectingOverlay_C_CloseSettings_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
struct UUMG_ConnectingOverlay_C_BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.LoginFailed
struct UUMG_ConnectingOverlay_C_LoginFailed_Params
{
public:
	enum class ELoginFailure                     ErrorCode;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
struct UUMG_ConnectingOverlay_C_BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUMG_ConnectingOverlay_C_BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CloseCredits
struct UUMG_ConnectingOverlay_C_CloseCredits_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Visbility_Changed
struct UUMG_ConnectingOverlay_C_Visbility_Changed_Params
{
public:
	enum class ESlateVisibility                  InVisibility;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.FrameGenerationUpdated
struct UUMG_ConnectingOverlay_C_FrameGenerationUpdated_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.UpdateDLSSMode
struct UUMG_ConnectingOverlay_C_UpdateDLSSMode_Params
{
public:
	bool                                         Enabled;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x800 (0x800 - 0x0)
// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.ExecuteUbergraph_UMG_ConnectingOverlay
struct UUMG_ConnectingOverlay_C_ExecuteUbergraph_UMG_ConnectingOverlay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetPakMetaLongMessage_MessageOut;         // 0x8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	struct FResGetUserProfile                    K2Node_CustomEvent_Response_3;                     // 0x60(0x50)(ConstParm)
	struct FResGetUserProfile                    K2Node_CustomEvent_Response_2;                     // 0xB0(0x50)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x100(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetUserProfile                    Temp_struct_Variable;                              // 0x110(0x50)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x160(0x10)(ZeroConstructor, NoDestructor)
	class UOfflinePackageFlagsSubsystem*         CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x178(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetUserProfile                    K2Node_CustomEvent_Response_1;                     // 0x188(0x50)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1D8(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetUserProfile                    K2Node_CustomEvent_Response;                       // 0x1E8(0x50)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x238(0x10)(ZeroConstructor, NoDestructor)
	struct FResGetUserProfile                    Temp_struct_Variable_1;                            // 0x248(0x50)(None)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x298(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x2A8(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x2B0(0x10)(ZeroConstructor, NoDestructor)
	TArray<int32>                                CallFunc_FetchAndGrantPackageFlagsForCurrentUser_PackageFlags; // 0x2C0(0x10)(ReferenceParm)
	class FString                                CallFunc_FetchAndGrantPackageFlagsForCurrentUser_FailReason; // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_FetchAndGrantPackageFlagsForCurrentUser_ReturnValue; // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x2E8(0x8)(NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x2F0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x308(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x348(0x18)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CF7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x368(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D00[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusLogSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x3B8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x3F8(0x10)(ReferenceParm)
	class UIcarusLogSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x410(0x18)(None)
	class UIcarusLogSubsystem*                   CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x430(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0x440(0x98)(ContainsInstancedReference)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x4D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x4E0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x4F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x4F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x4F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x4F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x4F5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D3B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x4F8(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D52[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x50C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_bSuccess;                       // 0x51C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D5C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*     CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0x530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_4;               // 0x548(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x558(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsConnectedIcarusBackend_ReturnValue;     // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsConnectedIcarusBackend_ReturnValue_1;   // 0x569(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x56A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D7A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_3;               // 0x570(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_CustomEvent_Button_1;                       // 0x578(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_2;               // 0x580(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ELoginFailure                     K2Node_CustomEvent_ErrorCode;                      // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D92[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button_1;               // 0x5A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_3;              // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetIcarusPlayerId_ReturnValue;            // 0x5B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0x5C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FReqGetUserProfile                    K2Node_MakeStruct_ReqGetUserProfile;               // 0x5C8(0x10)(None)
	class UUMG_ButtonBase_C*                     K2Node_CustomEvent_Button;                         // 0x5D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGetUserProfileCallbackProxyGen*       CallFunc_GetUserProfile_ReturnValue;               // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DC0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x5EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDLCPackageDataEnum                   CallFunc_IntToStruct_ReturnValue;                  // 0x5F8(0x10)(HasGetValueTypeHash)
	struct FDLCPackageDataEnum                   CallFunc_MakeDLCPackageDataEnum_ReturnValue;       // 0x608(0x10)(HasGetValueTypeHash)
	class FName                                  CallFunc_StructToName_ReturnValue;                 // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x620(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetIcarusPlayerId_ReturnValue_1;          // 0x630(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FReqGetUserProfile                    K2Node_MakeStruct_ReqGetUserProfile_1;             // 0x640(0x10)(None)
	class UGetUserProfileCallbackProxyGen*       CallFunc_GetUserProfile_ReturnValue_1;             // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x660(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x678(0x18)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x690(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x698(0x18)(None)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x6B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x6B8(0x10)(ZeroConstructor, NoDestructor)
	class UDataMigratorManager*                  CallFunc_SpawnObject_ReturnValue;                  // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PerformMigrations_ReturnValue;            // 0x6D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2DFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UUMG_UserInterface_TitleScreen_C*> CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x6D8(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUMG_UserInterface_TitleScreen_C*      CallFunc_Array_Get_Item_1;                         // 0x6E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x6F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRunningLocalAdmin_ReturnValue;          // 0x6F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x6F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_CustomEvent_InVisibility;                   // 0x6F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x6F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E3F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusGameUserSettings*               CallFunc_GetIcarusGameUserSettings_ReturnValue;    // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Value;                          // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x708(0x18)(None)
	bool                                         K2Node_CustomEvent_Enabled;                        // 0x720(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EUStreamlineDLSSGMode             CallFunc_GetDLSSGMode_ReturnValue;                 // 0x721(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x722(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E58[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusGameUserSettings*               CallFunc_GetIcarusGameUserSettings_ReturnValue_1;  // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFrameGeneration_ReturnValue;           // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E69[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_3;                           // 0x738(0x18)(None)
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x750(0x18)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x76C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetPakMetaShortMessage_OutMessage;        // 0x770(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x788(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x7C8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x7D8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x7F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

}
}


