#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// BlueprintGeneratedClass HelpMenuTutorial.HelpMenuTutorial_C
class AHelpMenuTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHelpMenuTutorial_C* GetDefaultObj();

	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void ExecuteUbergraph_HelpMenuTutorial(int32 EntryPoint, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, class UGGInventory* CallFunc_GetPlayerInventory_ReturnValue);
};

}


