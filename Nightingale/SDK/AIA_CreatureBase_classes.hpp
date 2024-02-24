#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xB8 - 0x68)
// BlueprintGeneratedClass AIA_CreatureBase.AIA_CreatureBase_C
class UAIA_CreatureBase_C : public UAIAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FGameplayTag>                  AIAAbilityTags;                                    // 0x70(0x10)(Edit, BlueprintVisible)
	struct FGameplayTag                          CooldownTag;                                       // 0x80(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          IncentiveTag;                                      // 0x88(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	class AAIC_CreatureBase_C*                   AICCreature;                                       // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  BBCreature;                                        // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNWXAbilitySystemComponent*            CreatureAbilitySystem;                             // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    BPCreature;                                        // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AnimStateTag;                                      // 0xB0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_CreatureBase_C* GetDefaultObj();

	void IsInCooldown(bool* InCooldown, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue);
	void GetIncentiveScore(double* IncentiveScore, bool CallFunc_NotEqual_GameplayTag_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_GetActiveEffectsWithAllTags_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_GetActiveGameplayEffectRemainingDuration_ReturnValue, float CallFunc_GetActiveGameplayEffectTotalDuration_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_A_ImplicitCast, double CallFunc_SafeDivide_B_ImplicitCast);
	void AIASelectAbilityTag(struct FGameplayTag* AbilityTag, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	bool Initialize(class APawn* CallFunc_GetOwnerPawn_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwnerPawn_ReturnValue_1, class UNWXAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AAIController* CallFunc_GetOwnerAIController_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess_1);
	void Start(class AActor* Target);
	void Stop(class AActor* Target);
	void ExecuteUbergraph_AIA_CreatureBase(int32 EntryPoint, class FName CallFunc_GetBBVar_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Target_1, class FName CallFunc_GetTagName_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_ActorHasTag_ReturnValue_1);
};

}


