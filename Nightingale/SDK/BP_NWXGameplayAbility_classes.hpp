#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x420 - 0x420)
// BlueprintGeneratedClass BP_NWXGameplayAbility.BP_NWXGameplayAbility_C
class UBP_NWXGameplayAbility_C : public UNWXGameplayAbility
{
public:

	static class UClass* StaticClass();
	static class UBP_NWXGameplayAbility_C* GetDefaultObj();

	void IsValidInDeathStates(bool* IsValid);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInAnyDeathState_ReturnValue, bool CallFunc_IsValidInDeathStates_IsValid);
	class UAbilitySystemComponent* GetOwningActorAbilitySystem(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class AController* GetActivatingController(class ACharacter* CallFunc_GetActivatingCharacter_Character, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetActivatingCharacter(class ACharacter** Character, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
};

}


