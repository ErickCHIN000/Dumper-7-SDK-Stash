#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass BP_RewardBehaviour_Curse.BP_RewardBehaviour_Curse_C
class UBP_RewardBehaviour_Curse_C : public UBP_RewardBehaviour_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSubclassOf<class UGameplayEffect>           GameplayEffect;                                    // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_Curse_C* GetDefaultObj();

	void GrantCurseReward(class APlayerState* PlayerState, class UObject* SenderContextObject, class UAbilitySystemComponent* LAbilitySystem, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetDebugText(class FText* DebugText, class FText InstancedDataText);
	void ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject);
	void ExecuteUbergraph_BP_RewardBehaviour_Curse(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject);
};

}


