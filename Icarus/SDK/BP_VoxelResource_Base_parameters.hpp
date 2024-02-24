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

// 0x12A (0x12A - 0x0)
// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.PlayFullyMinedFX
struct ABP_VoxelResource_Base_C_PlayFullyMinedFX_Params
{
public:
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FD5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVoxelSetupData                       CallFunc_GetVoxelSetupDataStruct_VoxelSetupData;   // 0x10(0xC0)(None)
	enum class EValid                            CallFunc_GetVoxelSetupDataStruct_Paths;            // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FE1[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_Conv_VectorToTransform_ReturnValue;       // 0xE0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1FE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            K2Node_DynamicCast_AsFMODEvent;                    // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x129(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xDA (0xDA - 0x0)
// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.GetResourceType
struct ABP_VoxelResource_Base_C_GetResourceType_Params
{
public:
	struct FItemTemplateRowHandle                ItemRow;                                           // 0x0(0x18)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	struct FVoxelSetupData                       CallFunc_GetVoxelSetupDataStruct_VoxelSetupData;   // 0x18(0xC0)(None)
	enum class EValid                            CallFunc_GetVoxelSetupDataStruct_Paths;            // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x62 (0x62 - 0x0)
// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.SetResourceMaterial
struct ABP_VoxelResource_Base_C_SetResourceMaterial_Params
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRowHandle                            NewLocalVar_0;                                     // 0x8(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20D7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x38(0x10)(ReferenceParm, ContainsInstancedReference)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  K2Node_DynamicCast_AsStatic_Mesh_Component;        // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.UserConstructionScript
struct ABP_VoxelResource_Base_C_UserConstructionScript_Params
{
public:
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature
struct ABP_VoxelResource_Base_C_BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature_Params
{
public:
	class UFLODActorComponent*                   Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            Transform;                                         // 0x10(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ConsumeHit
struct ABP_VoxelResource_Base_C_ConsumeHit_Params
{
public:
	struct FIcarusDamagePacket                   DamagePacket;                                      // 0x0(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ResourcesMined
struct ABP_VoxelResource_Base_C_ResourcesMined_Params
{
public:
	float                                        ResourceMinedCount;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               LastHitPlayerController;                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.UpdateExperienceComponent
struct ABP_VoxelResource_Base_C_UpdateExperienceComponent_Params
{
public:
	struct FItemTemplateRowHandle                ForResourceType;                                   // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x285 (0x285 - 0x0)
// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ExecuteUbergraph_BP_VoxelResource_Base
struct ABP_VoxelResource_Base_C_ExecuteUbergraph_BP_VoxelResource_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2304[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusDamagePacket                   K2Node_CustomEvent_DamagePacket;                   // 0x8(0xD8)(ContainsInstancedReference)
	float                                        K2Node_Event_ResourceMinedCount;                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2310[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               K2Node_Event_LastHitPlayerController;              // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVoxelSetupData                       CallFunc_GetVoxelSetupDataStruct_VoxelSetupData;   // 0xF8(0xC0)(None)
	enum class EValid                            CallFunc_GetVoxelSetupDataStruct_Paths;            // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2326[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2333[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFLODActorComponent*                   K2Node_ComponentBoundEvent_Component;              // 0x1D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_Actor;                  // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            K2Node_ComponentBoundEvent_Transform;              // 0x1E0(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2346[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x220(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_235D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2365[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_DynamicCast_AsPrimitive_Component;          // 0x248(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2376[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMiningSubsystem*                      CallFunc_GetWorldSubsystem_ReturnValue;            // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2386[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GrantExperienceToActorWithMultiplier_ReturnValue; // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_238F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemTemplateRowHandle                K2Node_Event_ForResourceType;                      // 0x26C(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FItemTemplateRowHandleFItemTemplateRowHandle_ReturnValue; // 0x284(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


