#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xE0 - 0xA0)
// BlueprintGeneratedClass BP_CharacterSpellComponent.BP_CharacterSpellComponent_C
class UBP_CharacterSpellComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ANWXPlayerCharacter*                   Owner;                                             // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              BeastInstinctPPMaterial;                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXAbilitySystemComponent*            AbilitySystem;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       BeastInstinctElapsedTime;                          // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BeastInstinctPeriod;                               // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BeastInstinctTimer;                                // 0xD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_EarthquakeSpell_C*                 SpellEarthquake;                                   // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CharacterSpellComponent_C* GetDefaultObj();

	void TriggerAudioPulse(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UScopedAkComponent* CallFunc_GetAudioComponentForBucket_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue);
	void OnTagCountChanged(struct FGameplayTag& Tag, int32 Count, class UScopedAkComponent* LoopingAKObject, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UPostProcessComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPostProcessComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue_2, class UScopedAkComponent* CallFunc_GetAudioComponentForBucket_ReturnValue, bool CallFunc_PostAkEventScoped_ReturnValue, class UScopedAkComponent* CallFunc_GetAudioComponentForBucket_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_PostAkEventScoped_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void BeastInstinctPulse(class UCurveFloat* IntensityCurve, double PulseTime, class UCurveFloat* RangeCurve, double Range, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_CharacterSpellComponent(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


