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

// 0x10 (0x10 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.GetAdditionalActorsToHighlight
struct Aba_Interactable_BuildingStarter_C_GetAdditionalActorsToHighlight_Params
{
public:
	TArray<class AActor*>                        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x10 (0x10 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.GetMeshesToSkipDuringHighlight
struct Aba_Interactable_BuildingStarter_C_GetMeshesToSkipDuringHighlight_Params
{
public:
	TArray<TSoftObjectPtr<class UPrimitiveComponent>> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference, UObjectWrapper)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.ShouldIgnoreScan
struct Aba_Interactable_BuildingStarter_C_ShouldIgnoreScan_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.GetForcedMeshesToHighlight
struct Aba_Interactable_BuildingStarter_C_GetForcedMeshesToHighlight_Params
{
public:
	TArray<class USkeletalMeshComponent*>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.GetResourceType
struct Aba_Interactable_BuildingStarter_C_GetResourceType_Params
{
public:
	enum class EScannableResourceType            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.ShouldBeHightlighted
struct Aba_Interactable_BuildingStarter_C_ShouldBeHightlighted_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.GetIsInWorkshop
struct Aba_Interactable_BuildingStarter_C_GetIsInWorkshop_Params
{
public:
	bool                                         IsInWorkshop;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.GetObjectsToSave
struct Aba_Interactable_BuildingStarter_C_GetObjectsToSave_Params
{
public:
	TArray<class UObject*>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.HasObjectsToSave
struct Aba_Interactable_BuildingStarter_C_HasObjectsToSave_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.ShouldUpdateOverlapsOnLoad
struct Aba_Interactable_BuildingStarter_C_ShouldUpdateOverlapsOnLoad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.SetPowerLimit
struct Aba_Interactable_BuildingStarter_C_SetPowerLimit_Params
{
public:
	int32                                        LimitDelta;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_176E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PowerManagmentAddToLimit_ReturnValue;     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1778[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_PowerManagmentGetLimit_ReturnValue;       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PowerManagmentRemoveFromLimit_ReturnValue; // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x100 (0x100 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.SelectCatalogues
struct Aba_Interactable_BuildingStarter_C_SelectCatalogues_Params
{
public:
	TArray<struct FDataTableRowHandle>           Aviable_in_workshop;                               // 0x0(0x10)(Parm, OutParm)
	TArray<struct FDataTableRowHandle>           AviableInField;                                    // 0x10(0x10)(Parm, OutParm)
	TArray<struct FDataTableRowHandle>           ReturnField;                                       // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<struct FDataTableRowHandle>           ReturnWorkshop;                                    // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          AllowedOnlyOnlevel;                                // 0x40(0x10)(Edit, BlueprintVisible)
	TArray<class FName>                          AllowedOnLevel;                                    // 0x50(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item;                           // 0x80(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_18CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x98(0x10)(NoDestructor, UObjectWrapper)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue_1;             // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18E4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item_1;                         // 0xB8(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18EC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1905[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_Array_Get_Item_2;                         // 0xE8(0x10)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_190B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.CustomEvent_0
struct Aba_Interactable_BuildingStarter_C_CustomEvent_0_Params
{
public:
	bool                                         SpawnedAnything;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.Finished_Event_0
struct Aba_Interactable_BuildingStarter_C_Finished_Event_0_Params
{
public:
	bool                                         SpawnedAnything;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.SendScrapDispatcher
struct Aba_Interactable_BuildingStarter_C_SendScrapDispatcher_Params
{
public:
	bool                                         HasTarget;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A57[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseBuildSystemEntity*                New_Target;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.SendChangedState
struct Aba_Interactable_BuildingStarter_C_SendChangedState_Params
{
public:
	bool                                         Is_Building;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x760 (0x760 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.ExecuteUbergraph_ba_Interactable_BuildingStarter
struct Aba_Interactable_BuildingStarter_C_ExecuteUbergraph_ba_Interactable_BuildingStarter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_BuildSystem_C*                     K2Node_DynamicCast_AsBp_Build_System;              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E31[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x80(0x10)(NoDestructor, UObjectWrapper)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ConstParm, ReferenceParm)
	TArray<struct FDataTableRowHandle>           K2Node_MakeArray_Array_1;                          // 0xA0(0x10)(ConstParm, ReferenceParm)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance;      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_SpawnedAnything_1;              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E64[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_1;    // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BuildSystemDeactivateTierName_ReturnValue; // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E69[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1; // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2; // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1E75[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x100(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x130(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult_1;    // 0x1BC(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_2;    // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_PowerManagmentGetLimit_ReturnValue;       // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x254(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x26C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3; // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4; // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_BuildSystem_C*                     K2Node_DynamicCast_AsBp_Build_System_1;            // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EAC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_3;    // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_4;    // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BuildSystemActivateTierName_ReturnValue;  // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              CallFunc_FindLookAtRotation_ReturnValue;           // 0x2AC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x2C4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x2D0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakVector_X_1;                          // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x2E8(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x374(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x380(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x40C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x410(0x10)(ZeroConstructor, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x420(0x30)(IsPlainOldData, NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5; // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x460(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x490(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x4C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x4D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x4E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess; // 0x4EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F7B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelStreamingDynamic*                CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue; // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_BuildSystem_C*                     K2Node_DynamicCast_AsBp_Build_System_2;            // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_SpawnedAnything;                // 0x501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F8E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6; // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x514(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1F9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7; // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x528(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01; // 0x530(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x53C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FE2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8; // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x554(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class ACGMovementState>          CallFunc_GetCurrentMovementState_ReturnValue;      // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x561(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FF9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9; // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2003[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2012[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFPAnimQuery                          K2Node_MakeStruct_FPAnimQuery;                     // 0x588(0x18)(NoDestructor)
	class ACh_Hero_00_C*                         CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10; // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_QueryActivity_OutQueryResult;             // 0x5A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2038[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFPAnimQuery>                  CallFunc_QueryActivity_OutQueryQueue;              // 0x5B0(0x10)(ReferenceParm)
	struct FFPAnimQuery                          K2Node_MakeStruct_FPAnimQuery_1;                   // 0x5C0(0x18)(NoDestructor)
	bool                                         CallFunc_QueryActivity_OutQueryResult_1;           // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2056[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFPAnimQuery>                  CallFunc_QueryActivity_OutQueryQueue_1;            // 0x5E0(0x10)(ReferenceParm)
	class Abp_BuildSystem_C*                     K2Node_DynamicCast_AsBp_Build_System_3;            // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_HasTarget;                      // 0x5F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2062[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseBuildSystemEntity*                K2Node_CustomEvent_New_Target;                     // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Is_Building;                    // 0x608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_207B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_5;    // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCGGameInstance_C*                     CallFunc_GetCGGameInstance_AsCGGame_Instance_6;    // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_BuildSystemGetActiveTier_ReturnValue;     // 0x620(0x10)(ConstParm, ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BuildSystemActivateTierName_ReturnValue_1; // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_209A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x63C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x644(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x64C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x650(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BuildSystemDeactivateTierName_ReturnValue_1; // 0x661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20B2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ARadarAfterImage*>              CallFunc_GetAllActorsOfClass_OutActors;            // 0x668(0x10)(ReferenceParm)
	class ARadarAfterImage*                      CallFunc_Array_Get_Item_2;                         // 0x678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x684(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x685(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20B8[0xA];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_2;     // 0x690(0x30)(IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult_2;    // 0x6C0(0x8C)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                        Pad_2103[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDataTableRowHandle>           K2Node_Select_Default;                             // 0x750(0x10)(ConstParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.DispatcherChanged_State__DelegateSignature
struct Aba_Interactable_BuildingStarter_C_DispatcherChanged_State__DelegateSignature_Params
{
public:
	bool                                         Is_Building;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.Dispatcher_PlayerAquiredOrLostScrapTarget__DelegateSignature
struct Aba_Interactable_BuildingStarter_C_Dispatcher_PlayerAquiredOrLostScrapTarget__DelegateSignature_Params
{
public:
	bool                                         HasTarget;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_227D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseBuildSystemEntity*                New_Target;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ba_Interactable_BuildingStarter.ba_Interactable_BuildingStarter_C.BuildSystemEnded__DelegateSignature
struct Aba_Interactable_BuildingStarter_C_BuildSystemEnded__DelegateSignature_Params
{
public:
	bool                                         SpawnedAnything;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


