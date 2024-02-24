#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A (0x432 - 0x418)
// BlueprintGeneratedClass GenericGathering.GenericGathering_C
class AGenericGathering_C : public AGenericItem_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x418(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        ExplorationTime;                                   // 0x420(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1683[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundCue*                             ExplorationSound;                                  // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSomeoneSearching;                                 // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ParallelGatheringAccepted;                         // 0x431(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGenericGathering_C* GetDefaultObj();

	void IsCodeLocked(bool* Result);
	void HoldUseSupports(bool* Result);
	bool ShouldNotBeExplored(class ASHPlayerCharacter* PlayerCharacter);
	class USoundCue* GetExplorationSound();
	float GetExplorationTime();
	bool IsExplored();
	bool StartExploration(class ASHPlayerCharacter* PlayerCharacter, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool StopExploration(class ASHPlayerCharacter* PlayerCharacter);
	void OnHoldUseActor(class ASHPlayerCharacter* Character);
	void UnlockActor(class FText Password);
	void OnUseActor(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GenericGathering(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Pickup_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character_1, class FText K2Node_Event_Password);
};

}


