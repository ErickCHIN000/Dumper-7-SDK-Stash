#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass Event_RewardPlayerXP.Event_RewardPlayerXP_C
class UEvent_RewardPlayerXP_C : public UNarrativeEvent
{
public:
	double                                       Amount;                                            // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEvent_RewardPlayerXP_C* GetDefaultObj();

	bool ExecuteEvent(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent, class ULevellingComponent_C* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_AddXP_XPOutput);
};

}


