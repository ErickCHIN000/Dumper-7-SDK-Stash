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

// 0x24 (0x24 - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.Add Boss Kill DLCVRGames
struct UWid_OnScreenFrameInformation_C_Add_Boss_Kill_DLCVRGames_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Boss_number;                                       // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_VRGamesBossFrame_C*               CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_ScreenFrame                       K2Node_MakeStruct_st_ScreenFrame;                  // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_241E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.GetCameraManager
struct UWid_OnScreenFrameInformation_C_GetCameraManager_Params
{
public:
	class ACGPlayerCameraManager*                AsCGPlayer_Camera_Manager;                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGPlayerCameraManager*                K2Node_DynamicCast_AsCGPlayer_Camera_Manager;      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.HandleVisibility
struct UWid_OnScreenFrameInformation_C_HandleVisibility_Params
{
public:
	class UGameUserSettings*                     CallFunc_GetGameUserSettings_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.ResetQueueAndCurrent
struct UWid_OnScreenFrameInformation_C_ResetQueueAndCurrent_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_ScreenFrame                       CallFunc_Array_Get_Item;                           // 0x8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_257A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2585[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.GetAnyAvailableStatusFrame
struct UWid_OnScreenFrameInformation_C_GetAnyAvailableStatusFrame_Params
{
public:
	class UWid_CompanionStatusFrame_C*           AsWid_Companion_Status_Frame;                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_ScreenFrame                       CallFunc_Array_Get_Item;                           // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_261C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2623[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionStatusFrame_C*           K2Node_DynamicCast_AsWid_Companion_Status_Frame;   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.AddLevelUpFrame
struct UWid_OnScreenFrameInformation_C_AddLevelUpFrame_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_266C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_LevelUpFrame_C*                   CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_ScreenFrame                       K2Node_MakeStruct_st_ScreenFrame;                  // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_2675[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.AddHeistItemFoundFrame
struct UWid_OnScreenFrameInformation_C_AddHeistItemFoundFrame_Params
{
public:
	class FText                                  ItemName;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        Duration;                                          // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5C (0x5C - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.AddCompanionStatusChangedFrame
struct UWid_OnScreenFrameInformation_C_AddCompanionStatusChangedFrame_Params
{
public:
	bool                                         IsNewStatusBetter;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2708[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CompanionID;                                       // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ERelationshipStatusType           NewStatus;                                         // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_270D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2710[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentPersistantLevel_ReturnValue;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2718[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionStatusFrame_C*           CallFunc_GetAnyAvailableStatusFrame_AsWid_Companion_Status_Frame; // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_273E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_CompanionStatusFrame_C*           CallFunc_Create_ReturnValue;                       // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_ScreenFrame                       K2Node_MakeStruct_st_ScreenFrame;                  // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_274E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.AddQuestScreenFrame
struct UWid_OnScreenFrameInformation_C_AddQuestScreenFrame_Params
{
public:
	bool                                         WasSuccessfull;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  QuestName;                                         // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	float                                        Duration;                                          // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CustomTitle;                                       // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CustomContent;                                     // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWid_QuestCompleted_C*                 CallFunc_Create_ReturnValue;                       // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_ScreenFrame                       K2Node_MakeStruct_st_ScreenFrame;                  // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_2800[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x130 (0x130 - 0x0)
// Function wid_OnScreenFrameInformation.wid_OnScreenFrameInformation_C.ExecuteUbergraph_wid_OnScreenFrameInformation
struct UWid_OnScreenFrameInformation_C_ExecuteUbergraph_wid_OnScreenFrameInformation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2985[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGlobalTimeDilation_ReturnValue;        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2991[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGlobalTimeDilation_ReturnValue_1;      // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor)
	struct FSt_ScreenFrame                       CallFunc_Array_Get_Item;                           // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_299F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnchors                              K2Node_MakeStruct_Anchors;                         // 0x58(0x10)(NoDestructor, UObjectWrapper)
	class UCanvasPanelSlot*                      CallFunc_AddChildToCanvas_ReturnValue;             // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x75(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29B4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGlobalTimeDilation_ReturnValue_2;      // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           Temp_delegate_Variable;                            // 0x80(0x10)(ConstParm, ZeroConstructor, NoDestructor)
	struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TScriptInterface<class IScreenFrameInterface_C> K2Node_DynamicCast_AsScreen_Frame_Interface;       // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         CallFunc_GetSoundToPlay_Event;                     // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xC4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkExternalSourceInfo>         Temp_struct_Variable;                              // 0xE0(0x10)(ConstParm, ReferenceParm)
	int32                                        CallFunc_PostEvent_ReturnValue;                    // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_4;    // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_29FE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGPlayerCameraManager*                CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager; // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ACGPlayerCameraManager*                CallFunc_GetCameraManager_AsCGPlayer_Camera_Manager_1; // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

}
}


