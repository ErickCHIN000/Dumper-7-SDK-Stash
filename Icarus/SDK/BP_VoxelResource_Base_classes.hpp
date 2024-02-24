#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x5A4 - 0x550)
// BlueprintGeneratedClass BP_VoxelResource_Base.BP_VoxelResource_Base_C
class ABP_VoxelResource_Base_C : public AVoxelResource
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x550(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UShelteredModifierComponent*           ShelteredModifier;                                 // 0x558(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HitableBehaviour_VoxelResource_C*  BP_HitableBehaviour_VoxelResource;                 // 0x560(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UExperienceComponent*                  Experience;                                        // 0x568(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        InstantVoxelMineResourceMulti;                     // 0x570(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FExperienceRowHandle                  StoneVoxelExperienceRow;                           // 0x574(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FItemTemplateRowHandle                StoneResourceType;                                 // 0x58C(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_VoxelResource_Base_C* GetDefaultObj();

	void PlayFullyMinedFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVoxelSetupData& CallFunc_GetVoxelSetupDataStruct_VoxelSetupData, enum class EValid CallFunc_GetVoxelSetupDataStruct_Paths, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetResourceType(struct FItemTemplateRowHandle* ItemRow, const struct FVoxelSetupData& CallFunc_GetVoxelSetupDataStruct_VoxelSetupData, enum class EValid CallFunc_GetVoxelSetupDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void SetResourceMaterial(class UMaterialInterface* Material, const struct FRowHandle& NewLocalVar_0, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	void UserConstructionScript(int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature(class UFLODActorComponent* Component, class AActor* Actor, struct FTransform& Transform);
	void ConsumeHit(const struct FIcarusDamagePacket& DamagePacket);
	void ResourcesMined(float ResourceMinedCount, class AIcarusPlayerController* LastHitPlayerController);
	void ReInitVoxel();
	void OnVoxelCompleted();
	void UpdateExperienceComponent(struct FItemTemplateRowHandle& ForResourceType);
	void ExecuteUbergraph_BP_VoxelResource_Base(int32 EntryPoint, const struct FIcarusDamagePacket& K2Node_CustomEvent_DamagePacket, float K2Node_Event_ResourceMinedCount, class AIcarusPlayerController* K2Node_Event_LastHitPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVoxelSetupData& CallFunc_GetVoxelSetupDataStruct_VoxelSetupData, enum class EValid CallFunc_GetVoxelSetupDataStruct_Paths, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFLODActorComponent* K2Node_ComponentBoundEvent_Component, class AActor* K2Node_ComponentBoundEvent_Actor, const struct FTransform& K2Node_ComponentBoundEvent_Transform, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_Array_Get_Item, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, class UMiningSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_GrantExperienceToActorWithMultiplier_ReturnValue, const struct FItemTemplateRowHandle& K2Node_Event_ForResourceType, bool CallFunc_EqualEqual_FItemTemplateRowHandleFItemTemplateRowHandle_ReturnValue);
};

}


