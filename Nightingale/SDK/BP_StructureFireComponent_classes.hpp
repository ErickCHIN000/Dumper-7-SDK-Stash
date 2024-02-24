#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x1B0 - 0xF8)
// BlueprintGeneratedClass BP_StructureFireComponent.BP_StructureFireComponent_C
class UBP_StructureFireComponent_C : public UStructureFireComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               DefaultFireAsset;                                  // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSubclassOf<class UGE_DoT_CrossServer_C>     DamageGE;                                          // 0x108(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TMap<class AActor*, struct FActiveGameplayEffectHandle> ActiveWarmthEffects;                               // 0x110(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TMap<class AActor*, struct FActiveGameplayEffectHandle> ActiveLightEffects;                                // 0x160(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_StructureFireComponent_C* GetDefaultObj();

	void Ignite(class APawn* Pawn, class AActor* CallFunc_GetOwner_ReturnValue, enum class EIgniteBlockedReason CallFunc_CanIgnite_OutReason, bool CallFunc_CanIgnite_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void Extinguish(class APawn* Pawn, enum class EExtinguishReason Reason, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetBurningState_ReturnValue);
	void RemoveAOEFromActors(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, TArray<class AActor*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_Map_Keys_Keys_1, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1);
	void ApplyAOEToActorsInRange(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RemoveAOEFromActor(class AActor*& Actor, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_Map_Remove_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1);
	void ApplyAOEToActor(class AActor*& Actor, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1);
	void IgnitionEarlyOutHelper(class AActor* InActor, bool* bCanBurn, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
	void OnLightRadiusExit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
	void OnLightRadiusEntered(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetBurningState_ReturnValue);
	void IgniteAllOverlappingActors(int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetDamageSphereOverlappingActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ExtinguishAllOverlappingActors(int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetDamageSphereOverlappingActors_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void ExtinguishActor(class AActor* Actor, double TickDamage, class AActor* LActor, bool CallFunc_CanIgniteTargetActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue);
	void IgniteActor(class AActor* Actor, const struct FTagValueContainer& TagContainer, double TickDamage, class AActor* LActor, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_CanIgniteTargetActor_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void EnableFire(bool Enable, bool LEnable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetBurningState_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FGameplayTag& CallFunc_GetBurningTag_BurningGameplayTag, TScriptInterface<class IStructureLightInterface> K2Node_DynamicCast_AsStructure_Light_Interface, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_GetBurningTag_BurningGameplayTag_1, class UPointLightComponent* CallFunc_GetStructureLightComponentForModify_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1, bool K2Node_DynamicCast_bSuccess_2);
	void OnFireRadiusEnter(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void OnFireRadiusExit(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BindFireEvents();
	void OnIsFireEnabledChanged(bool bIsFireEnabled);
	void ExecuteUbergraph_BP_StructureFireComponent(int32 EntryPoint, bool K2Node_Event_bIsFireEnabled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPrimitiveComponent* K2Node_Event_OverlappedComponent_1, class AActor* K2Node_Event_OtherActor_1, class UPrimitiveComponent* K2Node_Event_OtherComp_1, int32 K2Node_Event_OtherBodyIndex_1, bool K2Node_Event_bFromSweep, const struct FHitResult& K2Node_Event_SweepResult, class UPrimitiveComponent* K2Node_Event_OverlappedComponent, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, int32 K2Node_Event_OtherBodyIndex, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1);
};

}


