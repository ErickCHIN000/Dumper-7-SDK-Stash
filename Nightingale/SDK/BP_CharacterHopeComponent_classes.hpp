#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB0 - 0xA0)
// BlueprintGeneratedClass BP_CharacterHopeComponent.BP_CharacterHopeComponent_C
class UBP_CharacterHopeComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNWXAbilitySystemComponent*            AbilitySystem;                                     // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CharacterHopeComponent_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_0(float Delta, double CallFunc_OnLoadoutLevelChanged_ChangedAmount_ImplicitCast);
	void OnQuestScoreChanged(float Delta);
	void BindASCEvents(class UNWXAbilitySystemComponent*& AbilitySystem, class UNWXAttributeSet* AttributeSubobject, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXAttributeSet* CallFunc_GetAttributeSubobject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	double CalculateCurrentHopePool(float HopePool, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, int32 CallFunc_FFloor_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_FMax_A_ImplicitCast, float K2Node_VariableSet_HopePool_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1);
	void OnEstateScoreChanged(float Delta);
	void RefreshHopePool(const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_CalculateCurrentHopePool_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast);
	void OnLoadoutLevelChanged(double ChangedAmount);
	void Initialize(class UNWXAttributeSet* AttributeSubobject, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CharacterHopeComponent(int32 EntryPoint);
};

}


