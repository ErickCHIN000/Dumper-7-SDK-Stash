#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0xC4 - 0xA0)
// BlueprintGeneratedClass BTD_AbortSubtreeOnDamage.BTD_AbortSubtreeOnDamage_C
class UBTD_AbortSubtreeOnDamage_C : public UBTDecorator_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UActorState*                           OwnerActorState;                                   // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalDamageTaken;                                  // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DamageThreshold;                                   // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TagToApplyOnAbort;                                 // 0xB8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	float                                        TagDuration;                                       // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTD_AbortSubtreeOnDamage_C* GetDefaultObj();

	bool PerformConditionCheck(class AActor* OwnerActor, bool CallFunc_Less_IntInt_ReturnValue);
	void OnOwnerDamaged(class UActorState* ActorState, int32 DamageTaken, struct FDamageEvent& DamageEvent, class AController* Instigator, class AActor* DamageCauser);
	void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, enum class EBTNodeResult NodeResult);
	void ExecuteUbergraph_BTD_AbortSubtreeOnDamage(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UActorState* K2Node_CustomEvent_ActorState, int32 K2Node_CustomEvent_DamageTaken, const struct FDamageEvent& K2Node_CustomEvent_DamageEvent, class AController* K2Node_CustomEvent_Instigator, class AActor* K2Node_CustomEvent_DamageCauser, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, class UActorState* CallFunc_GetAIActorState_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, enum class EBTNodeResult K2Node_Event_NodeResult, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBehaviorTreeComponent* CallFunc_GetOwnerComponent_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


