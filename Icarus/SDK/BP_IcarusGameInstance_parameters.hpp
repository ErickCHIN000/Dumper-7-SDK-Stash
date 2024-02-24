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

// 0x490 (0x490 - 0x0)
// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.UpdateSentryContext
struct UBP_IcarusGameInstance_C_UpdateSentryContext_Params
{
public:
	TArray<class FString>                        FlagStates;                                        // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<class FString>                        EventStates;                                       // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<class FString>                        AssociatedMembers;                                 // 0x20(0x10)(Edit, BlueprintVisible)
	TMap<class FString, class FString>           ProspectContext;                                   // 0x30(0x50)(Edit, BlueprintVisible)
	TMap<class FString, class FString>           PlayerContext;                                     // 0x80(0x50)(Edit, BlueprintVisible)
	class FString                                Temp_string_Variable;                              // 0xD0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_1;                            // 0xE0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class USentrySubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_2;                            // 0xF8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_3;                            // 0x108(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class UProspectSubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USentrySubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_2;   // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasActiveProspect_ReturnValue;            // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_24E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         CallFunc_GetActiveProspectInfo_ReturnValue;        // 0x130(0x90)(ConstParm)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x1C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_4;                            // 0x1D0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class USentrySubsystem*                      CallFunc_GetGameInstanceSubsystem_ReturnValue_3;   // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProspectInfo                         Temp_wildcard_Variable;                            // 0x1E8(0x90)(None)
	class UVersionSubsystem*                     CallFunc_GetGameInstanceSubsystem_ReturnValue_4;   // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFormattedVersion_ReturnValue;          // 0x280(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x2A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_5;                            // 0x2B8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_6;                            // 0x2C8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	struct FProspectInfo                         K2Node_MakeStruct_ProspectInfo;                    // 0x2D8(0x90)(None)
	class FString                                Temp_string_Variable_7;                            // 0x368(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_8;                            // 0x378(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                Temp_string_Variable_9;                            // 0x388(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x398(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_26F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConnectedPlayer                      CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer; // 0x3C0(0x38)(None)
	bool                                         CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue; // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_275[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOnlineProfileUser                    CallFunc_GetActiveUserProfile_ReturnValue;         // 0x400(0x48)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_278[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacterSurvival*        K2Node_DynamicCast_AsIcarus_Player_Character_Survival; // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x45C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0x468(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTerrainAnchorValid_ReturnValue;         // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x480(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.CreateLoadingScreenRT
struct UBP_IcarusGameInstance_C_CreateLoadingScreenRT_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewportSize_SizeX;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetViewportSize_SizeY;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.InputTypeApplied
struct UBP_IcarusGameInstance_C_InputTypeApplied_Params
{
public:
	enum class EInputTypeSetting                 Value;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x110 (0x110 - 0x0)
// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnSessionInviteAcceptedEvent
struct UBP_IcarusGameInstance_C_OnSessionInviteAcceptedEvent_Params
{
public:
	int32                                        ControllerId;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlueprintSessionResult               InviteResult;                                      // 0x8(0x108)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x484 (0x484 - 0x0)
// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ExecuteUbergraph_BP_IcarusGameInstance
struct UBP_IcarusGameInstance_C_ExecuteUbergraph_BP_IcarusGameInstance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputTypeSetting                 Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x6(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x7(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_324[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UIcarusErrorSubsystem*                 CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	enum class EInputTypeSetting                 K2Node_CustomEvent_Value;                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_ControllerId;                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBlueprintSessionResult               K2Node_Event_InviteResult;                         // 0x30(0x108)(ConstParm)
	struct FIcarusSession                        CallFunc_CreateIcarusSessionFromSession_ReturnValue; // 0x138(0x1B0)(None)
	bool                                         K2Node_Select_Default;                             // 0x2E8(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_331[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetServerName_ReturnValue;                // 0x2F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x308(0x18)(None)
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x320(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x338(0x40)(HasGetValueTypeHash)
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x378(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x380(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x390(0x18)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_341[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0x3B0(0x98)(ContainsInstancedReference)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x448(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerControllerSpace*          K2Node_DynamicCast_AsIcarus_Player_Controller_Space; // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_348[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_IcarusGameUserSettings_C*          CallFunc_Get_Icarus_Game_User_Settings_Settings;   // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_IcarusGameUserSettings_C*          CallFunc_Get_Icarus_Game_User_Settings_Settings_1; // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputTypeSetting                 CallFunc_GetInputType_ReturnValue;                 // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x471(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsWithEditor_ReturnValue;                 // 0x472(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34D[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x474(0x10)(ZeroConstructor, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.RequestErrorEvent__DelegateSignature
struct UBP_IcarusGameInstance_C_RequestErrorEvent__DelegateSignature_Params
{
public:
	struct FErrorCodesEnum                       ErrorCode;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

}
}


