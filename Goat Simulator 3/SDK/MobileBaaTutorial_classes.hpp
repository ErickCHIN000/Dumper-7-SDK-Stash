#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// BlueprintGeneratedClass MobileBaaTutorial.MobileBaaTutorial_C
class AMobileBaaTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMobileBaaTutorial_C* GetDefaultObj();

	TArray<class FText> GetStepOverrideDescriptionArray(TArray<class FText>& K2Node_MakeArray_Array);
	void GoatBaa(class AGGGoat* GoatBaaing);
	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void ExecuteUbergraph_MobileBaaTutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatBaaing, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat);
};

}


