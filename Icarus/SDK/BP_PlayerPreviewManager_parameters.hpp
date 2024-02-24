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
// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.EndLevelLoadEffects
struct ABP_PlayerPreviewManager_C_EndLevelLoadEffects_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.BeginLevelLoadEffects
struct ABP_PlayerPreviewManager_C_BeginLevelLoadEffects_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.UpdateCharacterPreview
struct ABP_PlayerPreviewManager_C_UpdateCharacterPreview_Params
{
public:
	struct FCharacterCosmetics                   CosmeticData;                                      // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	uint8                                        Pad_631[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPreviewCameraSettingsEnum            NewCameraFocus;                                    // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	TSoftObjectPtr<class UWorld>                 Diorama;                                           // 0x48(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)
	bool                                         ForceWearSpacesuit;                                // 0x70(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_EnumEnum_ReturnValue;            // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       Temp_struct_Variable;                              // 0x74(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       Temp_struct_Variable_1;                            // 0x8C(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       K2Node_Select_Default;                             // 0xA4(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_NameToHash_ReturnValue;                   // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x36 (0x36 - 0x0)
// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.CharacterPreviewUpdated
struct ABP_PlayerPreviewManager_C_CharacterPreviewUpdated_Params
{
public:
	struct FCharacterCosmetics                   CosmeticData;                                      // 0x0(0x34)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_EnumEnum_ReturnValue;            // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.DisableDioramaPreview
struct ABP_PlayerPreviewManager_C_DisableDioramaPreview_Params
{
public:
	bool                                         IsEndingPlay;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.ReceiveEndPlay
struct ABP_PlayerPreviewManager_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C9 (0x1C9 - 0x0)
// Function BP_PlayerPreviewManager.BP_PlayerPreviewManager_C.ExecuteUbergraph_BP_PlayerPreviewManager
struct ABP_PlayerPreviewManager_C_ExecuteUbergraph_BP_PlayerPreviewManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_765[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCharacterCreationDataRowHandle       Temp_struct_Variable;                              // 0x8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       Temp_struct_Variable_1;                            // 0x20(0x18)(NoDestructor, HasGetValueTypeHash)
	TArray<class ATargetPoint*>                  CallFunc_GetAllActorsOfClassWithTag_OutActors;     // 0x38(0x10)(ReferenceParm)
	class ATargetPoint*                          CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_771[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x60(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x90(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x9C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_77D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerPreview_HAB_Selection_C*     CallFunc_GetActorOfClass_ReturnValue;              // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLevelLoaded_ReturnValue;                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_780[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ULightComponent*>               K2Node_MakeArray_Array;                            // 0xC8(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class AActor*>                        K2Node_MakeArray_Array_1;                          // 0xD8(0x10)(ReferenceParm)
	bool                                         K2Node_CustomEvent_IsEndingPlay;                   // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess; // 0xEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_78D[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelStreamingDynamic*                CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_SoftObjectReference_ReturnValue; // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_794[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xFC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_797[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        K2Node_MakeArray_Array_2;                          // 0x110(0x10)(ReferenceParm)
	TArray<class ULightComponent*>               K2Node_MakeArray_Array_3;                          // 0x120(0x10)(ReferenceParm, ContainsInstancedReference)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetViewTarget_ReturnValue;                // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7A7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x150(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7AF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerPreview_HAB_Selection_C*     CallFunc_FinishSpawningActor_ReturnValue;          // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCreationDataRowHandle       K2Node_Select_Default;                             // 0x198(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B8[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_NameToHash_ReturnValue;                   // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7BF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_HabAudio_C*                        CallFunc_GetActorOfClass_ReturnValue_1;            // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


