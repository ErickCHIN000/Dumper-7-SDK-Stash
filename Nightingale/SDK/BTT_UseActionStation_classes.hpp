#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xE8 - 0xA8)
// BlueprintGeneratedClass BTT_UseActionStation.BTT_UseActionStation_C
class UBTT_UseActionStation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Target;                                            // 0xB0(0x28)(Edit, BlueprintVisible)
	class ABP_CreatureBase_C*                    Char;                                              // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXActionStationComponent*            ActionStation;                                     // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_UseActionStation_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void FinishedActionStation(const struct FGameplayTag& NotifyGameplayTag);
	void FinishedInterupt(const struct FGameplayTag& NotifyGameplayTag);
	void ExecuteUbergraph_BTT_UseActionStation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class UNWXActionStationComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyGameplayTag_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& K2Node_CustomEvent_NotifyGameplayTag, bool CallFunc_HasActionStationUserForCharacter_ReturnValue, class UActionStationUser* CallFunc_GetActionStationUserForCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


