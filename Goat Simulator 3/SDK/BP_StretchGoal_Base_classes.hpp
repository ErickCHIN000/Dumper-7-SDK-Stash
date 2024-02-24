#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x308 - 0x2B0)
// BlueprintGeneratedClass BP_StretchGoal_Base.BP_StretchGoal_Base_C
class ABP_StretchGoal_Base_C : public AGGCastleStretchGoal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_StretchGoal_Base_C*                PreviousStretchGoal;                               // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnStretchgoalSequenceFinished;                     // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_StretchGoal_Indicator_Base_C*      StretchGoalIndicator;                              // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_BossPortal_C>       BossPortal;                                        // 0x2E0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StretchGoal_Base_C* GetDefaultObj();

	void OnSequenceFinished();
	void GoalChangedState(enum class EStretchGoalStates NewState, enum class EStateChangeSource ChangeSource);
	void CurrentStateReplicated(enum class EStretchGoalStates NewState);
	void ExecuteUbergraph_BP_StretchGoal_Base(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, enum class EStretchGoalStates K2Node_Event_NewState_1, enum class EStateChangeSource K2Node_Event_ChangeSource, enum class EStretchGoalStates K2Node_Event_NewState);
	void OnStretchgoalSequenceFinished__DelegateSignature();
};

}


