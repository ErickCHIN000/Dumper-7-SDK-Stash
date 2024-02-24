#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x100 - 0xA8)
// BlueprintGeneratedClass BTT_CreatureAbilityByTag.BTT_CreatureAbilityByTag_C
class UBTT_CreatureAbilityByTag_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          CreatureAbilityTag;                                // 0xB0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CompletionTimer;                                   // 0xB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    BPCreature;                                        // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          InitialMontage;                                    // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         SucceedIfAbilityFails;                             // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseRandomChance;                                   // 0xD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_439F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBlackboardKeySelector                RandomChance;                                      // 0xD8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTT_CreatureAbilityByTag_C* GetDefaultObj();

	void CleanupAction(bool* Success);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void CheckCompletion();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_CreatureAbilityByTag(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_TryActivateAbilitiesByTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, bool CallFunc_IsValid_ReturnValue_2, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_CleanupAction_Success, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_3, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8);
};

}


