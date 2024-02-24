#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x2D3 - 0x2C0)
// BlueprintGeneratedClass BasicMechanicsTutorial.BasicMechanicsTutorial_C
class ABasicMechanicsTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasJumped;                                         // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasLicked;                                         // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasHeadbutted;                                     // 0x2D2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABasicMechanicsTutorial_C* GetDefaultObj();

	TArray<bool> GetStepCompletionArray(TArray<bool>& K2Node_MakeArray_Array);
	void GoatHeadbutted(class AGGGoat* GoatHeadbutting, bool bHitSomething, TArray<class AActor*>& HeadbuttedActors, bool Is_charge_headbutt);
	void GoatLickedActor(class AGGGoat* GoatLicking, class AActor* LickedActor);
	void GoatLickMissed(class AGGGoat* GoatLicking);
	void GoatJumped(class AGGCharacter* Character);
	void CheckIfAllBasicMechanicsAreCompleted();
	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void ExecuteUbergraph_BasicMechanicsTutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatHeadbutting, bool K2Node_CustomEvent_bHitSomething, TArray<class AActor*>& K2Node_CustomEvent_HeadbuttedActors, bool K2Node_CustomEvent_Is_charge_headbutt, class AGGGoat* K2Node_CustomEvent_GoatLicking_1, class AActor* K2Node_CustomEvent_LickedActor, class AGGGoat* K2Node_CustomEvent_GoatLicking, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGGCharacter* K2Node_CustomEvent_Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat);
};

}


