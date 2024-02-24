#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_HitResponse.BPFL_HitResponse_C
class UBPFL_HitResponse_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_HitResponse_C* GetDefaultObj();

	void Play_Physical_Response_Predicted(class AActor* Striker, struct FHitResult& Hit, class AActor* AbilityOwner, TArray<struct FGameplayTag>& GameplayCuesPredicted, class UObject* __WorldContext, const struct FGameplayEffectContextHandle& Context, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void Play_Physical_Response(class AActor* Striker, const struct FHitResult& Hit, class UClass* PhysicalImpactEffect, class AActor* AbilityOwner, class UGameplayAbility* InstigatingAbility, class UObject* __WorldContext, class UAbilitySystemComponent* AbilitySystemComponent, const struct FGameplayEffectContextHandle& Context, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue);
	void PlayMultiActorResponses(TMap<class AActor*, struct FS_HitData> HitActors, class UObject* __WorldContext, class UBP_HitResponse_C* HitResponseComponent, TArray<class AActor*>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, const struct FS_HitData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PlayActorResponse(class AActor* TargetActor, const struct FS_HitData& HitData, class UObject* __WorldContext, class UHitResponseComponent* Temp_object_Variable, TScriptInterface<class IHitResponseProviderInterface> K2Node_DynamicCast_AsHit_Response_Provider_Interface, bool K2Node_DynamicCast_bSuccess, class UHitResponseComponent* CallFunc_GetHitResponseComponent_ReturnValue, class UBP_HitResponse_C* K2Node_DynamicCast_AsBP_Hit_Response, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


