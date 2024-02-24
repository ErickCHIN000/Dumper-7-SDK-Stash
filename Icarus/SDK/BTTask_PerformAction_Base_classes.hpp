#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x189 - 0x119)
// BlueprintGeneratedClass BTTask_PerformAction_Base.BTTask_PerformAction_Base_C
class UBTTask_PerformAction_Base_C : public UBTTask_PlayMontage_C
{
public:
	uint8                                        Pad_3035[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  ActionNotifyName;                                  // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FStatsEnum, int32>               ActionStats;                                       // 0x130(0x50)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UIcarusStatContainer*                  OwnerStatContainer;                                // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FinishOnActionExecution;                           // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_PerformAction_Base_C* GetDefaultObj();

	void DoAction();
	void OnMontageNotifyBegin(class FName NotifyName, class UAnimNotify* Notify);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void OnMontageComplete();
	void ReceiveAbort(class AActor* OwnerActor);
	void OnMontageInterrupted();
	void ExecuteUbergraph_BTTask_PerformAction_Base(int32 EntryPoint, class FName K2Node_Event_NotifyName, class UAnimNotify* K2Node_Event_Notify, bool CallFunc_IsValid_ReturnValue, bool CallFunc_RemoveStats_BP_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_OwnerActor, bool CallFunc_AddStats_BP_ReturnValue);
};

}


