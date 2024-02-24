#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// BlueprintGeneratedClass ObjectControlTutorial.ObjectControlTutorial_C
class AObjectControlTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AObjectControlTutorial_C* GetDefaultObj();

	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void TutorialDone();
	void ExecuteUbergraph_ObjectControlTutorial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, const class FString& CallFunc_GetTutorialID_ReturnValue, TScriptInterface<class IGGTutorialInterface> K2Node_DynamicCast_AsGGTutorial_Interface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetTutorialText_ReturnValue, const struct FNotification& CallFunc_MakeNotification_ReturnValue);
};

}


