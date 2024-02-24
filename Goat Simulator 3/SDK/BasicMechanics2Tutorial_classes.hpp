#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x2E1 - 0x2C0)
// BlueprintGeneratedClass BasicMechanics2Tutorial.BasicMechanics2Tutorial_C
class ABasicMechanics2Tutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasBaad;                                           // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasRagdolled;                                      // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_80B[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CheckIfGoatIsSprintingTimer;                       // 0x2D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasUnRagdolled;                                    // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABasicMechanics2Tutorial_C* GetDefaultObj();

	TArray<class FText> GetStepOverrideDescriptionArray(TArray<class FText>& K2Node_MakeArray_Array);
	TArray<bool> GetStepCompletionArray(bool CallFunc_BooleanNOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<bool>& K2Node_MakeArray_Array);
	void GoatBaa(class AGGGoat* GoatBaaing);
	void GoatRagdolled(class AGGCharacter* Character, bool NewRagdollState);
	void CheckIfBasicMechanics2AreCompleted();
	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void ExecuteUbergraph_BasicMechanics2Tutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatBaaing, class AGGCharacter* K2Node_CustomEvent_Character, bool K2Node_CustomEvent_NewRagdollState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_BooleanAND_ReturnValue, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


