#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass BP_RewardBehaviour_GameEffect.BP_RewardBehaviour_GameEffect_C
class UBP_RewardBehaviour_GameEffect_C : public UBP_RewardBehaviour_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GameEffect;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_GameEffect_C* GetDefaultObj();

	void GrantEffectReward(class APlayerState* PlayerState, class UObject* SenderContextObject, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
	void GetDebugText(class FText* DebugText, class FText InstancedDataText);
	void ApplyReward(class APlayerState* PlayerState, class UObject* SenderContextObject);
	void ExecuteUbergraph_BP_RewardBehaviour_GameEffect(int32 EntryPoint, class APlayerState* K2Node_Event_PlayerState, class UObject* K2Node_Event_SenderContextObject);
};

}


