#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x7D0 - 0x780)
// BlueprintGeneratedClass BP_ExplodingObject_DaffodilBarrel_Barrelmaker.BP_ExplodingObject_DaffodilBarrel_Barrelmaker_C
class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C : public ABP_ExplodingObject_DaffodilBarrel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x780(0x8)(Transient, DuplicateTransient)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSpawnableSpellBasicData              OwningSpellData;                                   // 0x790(0x40)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ABP_ExplodingObject_DaffodilBarrel_Barrelmaker_C* GetDefaultObj();

	void Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C* NewPresentation, class UMaterialInstanceDynamic** DynamicMI, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void UserConstructionScript();
	void Explode_Damage();
	void Explode_Puddle();
	void Explode();
	void BPI_SetNavPainterEnabled(bool Enabled);
	void VisualState_FuseStop();
	void __UserState_ExplodingObjectState_1(bool bFromLoad);
	void VisualState_ExplodedStart();
	void Explode_Cloud();
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_DaffodilBarrel_Barrelmaker(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void ExecuteUbergraph_BP_ExplodingObject_DaffodilBarrel_Barrelmaker(int32 EntryPoint, class USplatData* Temp_object_Variable, class USplatData* Temp_object_Variable1, class USplatData* Temp_object_Variable2, class USplatData* Temp_object_Variable3, class USplatData* Temp_object_Variable4, class USplatData* Temp_object_Variable5, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable1, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool K2Node_Event_Enabled, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, enum class EOakElementalType Temp_byte_Variable, bool Temp_bool_IsClosed_Variable1, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, class UWwiseAudioComponent* CallFunc_GetAudioComponentFromPlaybackInstance_ReturnValue, class USplatData* K2Node_Select_Default, bool CallFunc_IsAudioPlaying_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool K2Node_UserStateEvent_bFromLoad, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, const struct FHitResult& Temp_struct_Variable);
};

}


