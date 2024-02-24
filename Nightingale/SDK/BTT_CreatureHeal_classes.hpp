#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass BTT_CreatureHeal.BTT_CreatureHeal_C
class UBTT_CreatureHeal_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTT_CreatureHeal_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_CreatureHeal(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TScriptInterface<class ISquadMemberNativeInterface> K2Node_DynamicCast_AsSquad_Member_Native_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetSpawnerActor_ReturnValue, class ABP_Creature_Wildlife_DemonDeer_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Demon_Deer, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXAIAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsMaxHealth_bIsMinHealth, bool CallFunc_Not_PreBool_ReturnValue, class AActor* Temp_object_Variable, const struct FVector& CallFunc_Vector_Zero_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess_2);
};

}


