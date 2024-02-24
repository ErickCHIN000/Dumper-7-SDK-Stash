#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0xB78 - 0xB65)
// BlueprintGeneratedClass BP_NPC_Needler_Character.BP_NPC_Needler_Character_C
class ABP_NPC_Needler_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
	uint8                                        Pad_3990[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                SK_CRE_Needler_Spikes;                             // 0xB68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          SpikesCooldownTimer;                               // 0xB70(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_NPC_Needler_Character_C* GetDefaultObj();

	void TryCosmeticResetNeedles(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void CosmeticResetNeedles();
	class FName GetNextAttackMontageSection(class AActor* AttackTarget, class FName CallFunc_GetNextAttackMontageSection_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex);
	bool GetMontageForAction(TSoftClassPtr<class UIcarusGOAPAction>& Action, TSoftObjectPtr<class UAnimMontage>* ActionMontage, class FName* MontageSection, class FName* MontageNotify, TSoftClassPtr<class UIcarusGOAPAction> RoarAction, TSoftClassPtr<class UIcarusGOAPAction> IdleAction, TSoftClassPtr<class UIcarusGOAPAction> AttackAction, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue, bool CallFunc_IsSwimming_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FActionAnimData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_SoftClassReference_ReturnValue_1, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, bool CallFunc_IsSwimming_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1);
	struct FVector GetDamageSourceLocation(const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
};

}


