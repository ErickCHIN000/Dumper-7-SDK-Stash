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

// 0x64 (0x64 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.GetCropPlotValues
struct ABP_Crop_Plot_Base_C_GetCropPlotValues_Params
{
public:
	TArray<struct FCultivationSaveData>          SaveData;                                          // 0x0(0x10)(Parm, OutParm)
	TArray<struct FCultivationSaveData>          BuiltSaveData;                                     // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3DFD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E13[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCultivationSaveData                  CallFunc_GetSaveData_ReturnValue;                  // 0x4C(0x10)(NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3E26[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x62 (0x62 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.GetFertilizerModifier
struct ABP_Crop_Plot_Base_C_GetFertilizerModifier_Params
{
public:
	class UModifierStateComponent*               Modifier;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FModifierStatesRowHandle>      FertilizersModifiers;                              // 0x8(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ED6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FModifierStatesRowHandle>      K2Node_MakeArray_Array;                            // 0x28(0x10)(ReferenceParm)
	struct FModifierStatesRowHandle              CallFunc_Array_Get_Item;                           // 0x38(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModifierStateComponent*               CallFunc_FindModifierState_FoundComponent;         // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindModifierState_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.IsFertilized
struct ABP_Crop_Plot_Base_C_IsFertilized_Params
{
public:
	bool                                         Fertilized;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3F52[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetGameplayTagContainer_OutContainer;     // 0x8(0x20)(None)
	bool                                         CallFunc_GetGameplayTagContainer_ReturnValue;      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.SetSoilState
struct ABP_Crop_Plot_Base_C_SetSoilState_Params
{
public:
	bool                                         bWet;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FB0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.CanHarvestAny
struct ABP_Crop_Plot_Base_C_CanHarvestAny_Params
{
public:
	bool                                         CanHarvest;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4032[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>          CallFunc_Map_Values_Values;                        // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4051[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanHarvest_CanHarvest;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.HasAnySeeds
struct ABP_Crop_Plot_Base_C_HasAnySeeds_Params
{
public:
	bool                                         IsSeeded;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSeed_IsSeeded;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.Deployable_Interact
struct ABP_Crop_Plot_Base_C_Deployable_Interact_Params
{
public:
	class AActor*                                Interactor;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacterSurvival*        K2Node_DynamicCast_AsIcarus_Player_Character_Survival; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_416F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerControllerSurvival*       K2Node_DynamicCast_AsIcarus_Player_Controller_Survival; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.ClearCultivation
struct ABP_Crop_Plot_Base_C_ClearCultivation_Params
{
public:
	int32                                        Cultivation;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41E5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.UpdateEnergyConnectionModifier
struct ABP_Crop_Plot_Base_C_UpdateEnergyConnectionModifier_Params
{
public:
	bool                                         CallFunc_RemoveModifierState_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_426A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0x4(0x20)(NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4278[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4282[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnergyComponent*                      CallFunc_GetTrait_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.UpdateWaterConnectionModifier
struct ABP_Crop_Plot_Base_C_UpdateWaterConnectionModifier_Params
{
public:
	bool                                         CallFunc_RemoveModifierState_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4321[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0x4(0x20)(NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_433E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4363[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWaterComponent*                       CallFunc_GetTrait_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2FC (0x2FC - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.FertilizePlot
struct ABP_Crop_Plot_Base_C_FertilizePlot_Params
{
public:
	struct FItemData                             FertilizerItem;                                    // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         Fertalized;                                        // 0x1F0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4419[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FItemsStaticRowHandle, struct FModifierStatesRowHandle> FertilizerToModifier;                              // 0x1F8(0x50)(Edit, BlueprintVisible)
	TMap<struct FItemsStaticRowHandle, struct FModifierStatesRowHandle> K2Node_MakeVariable_MakeVariableOutput;            // 0x248(0x50)(None)
	struct FGameplayTagContainer                 CallFunc_GetItemTags_ReturnValue;                  // 0x298(0x20)(None)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4434[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifierStatesRowHandle              CallFunc_Map_Find_Value;                           // 0x2BC(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x2D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4445[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0x2D8(0x20)(NoDestructor)
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.CanFertilize
struct ABP_Crop_Plot_Base_C_CanFertilize_Params
{
public:
	bool                                         CanBeFertilized;                                   // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFertilized_Fertilized;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_44AC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModifierStateComponent*               CallFunc_GetFertilizerModifier_Modifier;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.PlaySound
struct ABP_Crop_Plot_Base_C_PlaySound_Params
{
public:
	class UFMODEvent*                            FMODEvent;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_454A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0xC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_454F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0x20(0x30)(IsPlainOldData, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEventAtLocation_ReturnValue;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23A (0x23A - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.GetAudioData
struct ABP_Crop_Plot_Base_C_GetAudioData_Params
{
public:
	struct FFarmingSeedAudioData                 Data;                                              // 0x0(0x78)(Parm, OutParm)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4614[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x98(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA8 (0xA8 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.UpdateGlasshouseAndOutsideModifiers
struct ABP_Crop_Plot_Base_C_UpdateGlasshouseAndOutsideModifiers_Params
{
public:
	bool                                         IsGrowingOutside;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4759[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GlasshousePieces;                                  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveModifierState_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_475F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0xC(0x20)(NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4772[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_2;        // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveModifierState_ReturnValue_1;        // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FCeil_ReturnValue;                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifier                             K2Node_MakeStruct_Modifier_1;                      // 0x58(0x20)(NoDestructor)
	struct FModifier                             K2Node_MakeStruct_Modifier_2;                      // 0x78(0x20)(NoDestructor)
	int32                                        CallFunc_AddModifierState_ReturnValue_1;           // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_AddModifierState_ReturnValue_2;           // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveModifierState_ReturnValue_2;        // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckOutdoorsAndGreenhouse_bIsOutdoors;   // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47EA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_CheckOutdoorsAndGreenhouse_GreenhousePieceCount; // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A (0x1A - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.CanHarvest
struct ABP_Crop_Plot_Base_C_CanHarvest_Params
{
public:
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanHarvest;                                        // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_GetCultivationFromMesh_Cultivation;       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanHarvestCultivation_ReturnValue;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x52 (0x52 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.GetCultivationFromMesh
struct ABP_Crop_Plot_Base_C_GetCultivationFromMesh_Params
{
public:
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCultivation*                          Cultivation;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_496D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCultivation*>                  CallFunc_Map_Keys_Keys;                            // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4979[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4986[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  CallFunc_Map_Find_Value;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC1 (0xC1 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.SetupCultivations
struct ABP_Crop_Plot_Base_C_SetupCultivations_Params
{
public:
	TMap<class UCultivation*, class UStaticMeshComponent*> Cultivations;                                      // 0x0(0x50)(Parm, OutParm, ContainsInstancedReference)
	TMap<class UCultivation*, class UStaticMeshComponent*> BuiltCultivations;                                 // 0x50(0x50)(Edit, BlueprintVisible, ContainsInstancedReference)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A6E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A7A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_Array_Get_Item;                           // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.HasSeed
struct ABP_Crop_Plot_Base_C_HasSeed_Params
{
public:
	int32                                        Cultivation;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSeeded;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B30[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x231 (0x231 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.CanPlantSeed
struct ABP_Crop_Plot_Base_C_CanPlantSeed_Params
{
public:
	struct FItemData                             ItemData;                                          // 0x0(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        Cultivation;                                       // 0x1F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanPlant;                                          // 0x1F4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BEA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedsRowHandle                CallFunc_GetSeedRow_SeedRow;                       // 0x1F8(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSeedRow_ReturnValue;                   // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x211(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BF4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C05[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_Array_Get_Item;                           // 0x228(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanStartCultivation_ReturnValue;          // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x248 (0x248 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.PlantSeed
struct ABP_Crop_Plot_Base_C_PlantSeed_Params
{
public:
	struct FItemData                             NewSeed;                                           // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                        Cultivation;                                       // 0x1F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CE6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                Player;                                            // 0x1F8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Planted;                                           // 0x200(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CEC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedsRowHandle                CallFunc_GetSeedRow_SeedRow;                       // 0x204(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSeedRow_ReturnValue;                   // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GrantExperienceToActor_ReturnValue;       // 0x21D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x21E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D0A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UpdateCropPlotModifiers_ReturnValue;      // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D1E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_Array_Get_Item;                           // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StartCultivation_ReturnValue;             // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D33[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmingSubsystem*                     CallFunc_GetWorldSubsystem_ReturnValue;            // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x258 (0x258 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.HarvestResource
struct ABP_Crop_Plot_Base_C_HarvestResource_Params
{
public:
	class AIcarusPlayerCharacter*                PlayerCharacter;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUsingSickle;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Harvested;                                         // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E20[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCultivation*                          CallFunc_GetCultivationFromMesh_Cultivation;       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E31[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemData>                     CallFunc_HarvestCultivation_HarvestedItems;        // 0x28(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_HarvestCultivation_ReturnValue;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E37[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_Array_Get_Item;                           // 0x40(0x1F0)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4E43[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFarmingSubsystem*                     CallFunc_GetWorldSubsystem_ReturnValue;            // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GrantExperienceToActor_ReturnValue;       // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4E67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.GetWidgetClass
struct ABP_Crop_Plot_Base_C_GetWidgetClass_Params
{
public:
	class UClass*                                Widget;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.OnLoaded_002CDE2F457F54BDFC92D7AEFED0E4AA
struct ABP_Crop_Plot_Base_C_OnLoaded_002CDE2F457F54BDFC92D7AEFED0E4AA_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.Snow
struct ABP_Crop_Plot_Base_C_Snow_Params
{
public:
	float                                        Intensity;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.OnSeedUpdated
struct ABP_Crop_Plot_Base_C_OnSeedUpdated_Params
{
public:
	class UCultivation*                          Cultivation;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedsRowHandle                FarmingSeed;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.OnGrowthStateUpdated
struct ABP_Crop_Plot_Base_C_OnGrowthStateUpdated_Params
{
public:
	class UCultivation*                          Cultivation;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlantGrowthStates                GrowthState;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.UpdateCultivationMesh
struct ABP_Crop_Plot_Base_C_UpdateCultivationMesh_Params
{
public:
	class UCultivation*                          Cultivation;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.Rain
struct ABP_Crop_Plot_Base_C_Rain_Params
{
public:
	int32                                        Millilitres;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.OnModifierUpdated
struct ABP_Crop_Plot_Base_C_OnModifierUpdated_Params
{
public:
	class UModifierStateComponent*               Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRemoved;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.MULTI_PlaySound
struct ABP_Crop_Plot_Base_C_MULTI_PlaySound_Params
{
public:
	class UFMODEvent*                            FMODEvent;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.MULTI_PlayItemAddedAudio
struct ABP_Crop_Plot_Base_C_MULTI_PlayItemAddedAudio_Params
{
public:
	struct FItemsStaticRowHandle                 Item;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.PlayFertilizerFX
struct ABP_Crop_Plot_Base_C_PlayFertilizerFX_Params
{
public:
	struct FItemsStaticRowHandle                 Item;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.SetCropPlotValues
struct ABP_Crop_Plot_Base_C_SetCropPlotValues_Params
{
public:
	TArray<struct FCultivationSaveData>          SaveData;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.OnWaterStateUpdated
struct ABP_Crop_Plot_Base_C_OnWaterStateUpdated_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.OnEnergyStateUpdated
struct ABP_Crop_Plot_Base_C_OnEnergyStateUpdated_Params
{
public:
	bool                                         IsActive;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAE8 (0xAE8 - 0x0)
// Function BP_Crop_Plot_Base.BP_Crop_Plot_Base_C.ExecuteUbergraph_BP_Crop_Plot_Base
struct ABP_Crop_Plot_Base_C_ExecuteUbergraph_BP_Crop_Plot_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56DE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths_1;                         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_56EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFarmableComponent*                    CallFunc_GetTrait_ReturnValue_1;                   // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECropMeshRotationType             Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5701[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable;                               // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_570C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCultivation*                          CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5720[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_572E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCultivation*                          CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x78(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0xB8(0x40)(HasGetValueTypeHash)
	class FName                                  CallFunc_GetEnumeratorName_ReturnValue;            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x100(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x118(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue_1;            // 0x158(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_3;            // 0x170(0x40)(HasGetValueTypeHash)
	float                                        K2Node_Event_Intensity;                            // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5755[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UCultivation*, class UStaticMeshComponent*> CallFunc_SetupCultivations_Cultivations;           // 0x1B8(0x50)(ContainsInstancedReference)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_575F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UCultivation*>                  CallFunc_Map_Keys_Keys;                            // 0x210(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5774[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x22C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5778[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          K2Node_CustomEvent_Cultivation_2;                  // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFarmingSeedsRowHandle                K2Node_CustomEvent_FarmingSeed;                    // 0x248(0x18)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x260(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue_2;            // 0x270(0x18)(None)
	class UCultivation*                          K2Node_CustomEvent_Cultivation_1;                  // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlantGrowthStates                K2Node_CustomEvent_GrowthState;                    // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_579E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_4;            // 0x298(0x40)(HasGetValueTypeHash)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x2D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x2E8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_5;            // 0x300(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue_3;            // 0x340(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_6;            // 0x358(0x40)(HasGetValueTypeHash)
	class UCultivation*                          K2Node_CustomEvent_Cultivation;                    // 0x398(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_Map_Find_Value;                           // 0x3A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedData                      CallFunc_GetFarmingSeedsStruct_FarmingSeeds;       // 0x3B0(0x1A0)(None)
	enum class EValid                            CallFunc_GetFarmingSeedsStruct_Paths;              // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_57BA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthStatesRowHandle         CallFunc_GetGrowthStateData_GrowthStateRow;        // 0x554(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetGrowthStateData_ReturnValue;           // 0x56C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x56D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C9[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingGrowthState                   CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates; // 0x570(0x58)(None)
	enum class EValid                            CallFunc_GetFarmingGrowthStatesStruct_Paths;       // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x5C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x5CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStaticMesh_ReturnValue_1;              // 0x5CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x5CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x5D4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_Event_Millilitres;                          // 0x5E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x5E8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_580C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0x5F4(0x20)(NoDestructor)
	uint8                                        Pad_580E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModifierStateComponent*               K2Node_CustomEvent_Component;                      // 0x618(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bRemoved;                       // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5810[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x624(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5818[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModifierStateComponent*               CallFunc_GetModifierStateByUID_ReturnValue;        // 0x630(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSheltered_ReturnValue;                  // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x63A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5827[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedAudioData                 CallFunc_GetAudioData_Data;                        // 0x640(0x78)(None)
	struct FFarmingSeedAudioData                 CallFunc_GetAudioData_Data_1;                      // 0x6B8(0x78)(None)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x730(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0x738(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            K2Node_DynamicCast_AsFMODEvent;                    // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x748(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5849[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            K2Node_DynamicCast_AsFMODEvent_1;                  // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_584F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFarmingSeedAudioData                 CallFunc_GetAudioData_Data_2;                      // 0x760(0x78)(None)
	class UFMODEvent*                            K2Node_CustomEvent_FMODEvent;                      // 0x7D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2; // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x7E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5860[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFMODEvent*                            K2Node_DynamicCast_AsFMODEvent_2;                  // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x7F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_588E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_Item_1;                         // 0x7FC(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FItemsStaticRowHandle                 K2Node_CustomEvent_Item;                           // 0x814(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_589C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCultivationSaveData>          K2Node_Event_SaveData;                             // 0x830(0x10)(ConstParm, ReferenceParm)
	struct FCultivationSaveData                  CallFunc_Array_Get_Item_2;                         // 0x840(0x10)(NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x850(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x854(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsActive_1;                           // 0x855(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsActive;                             // 0x856(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0x857(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_3;                   // 0x858(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x860(0x18)(None)
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue_1;            // 0x878(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_7;            // 0x890(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_8;            // 0x8D0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x910(0x10)(ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x920(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x930(0x18)(None)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x948(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x960(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x970(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x980(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58D9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCultivation*                          CallFunc_Array_Get_Item_3;                         // 0x988(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x990(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue;            // 0x9A0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_9;            // 0x9B8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x9F8(0x10)(ReferenceParm)
	class UObject*                               Temp_object_Variable;                              // 0xA08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0xA10(0x18)(None)
	class UStaticMesh*                           K2Node_DynamicCast_AsStatic_Mesh;                  // 0xA28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xA30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0xA38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue_2;              // 0xA48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_58F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_RandomFloatInRange_ReturnValue;           // 0xA4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default;                             // 0xA50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0xA54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0xA60(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

}
}


