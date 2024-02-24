#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x2E1 - 0x2C0)
// BlueprintGeneratedClass SlowMotionTutorial.SlowMotionTutorial_C
class ASlowMotionTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TimeUntilDisableReminder;                          // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BF6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DisableReminderTimer;                              // 0x2D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         DisableReminderActive;                             // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ASlowMotionTutorial_C* GetDefaultObj();

	bool ShouldCompleteTutorial();
	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void OnDisableReminder();
	void ExecuteUbergraph_SlowMotionTutorial(int32 EntryPoint, float CallFunc_GetCurrentTimeDilation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FNotification& CallFunc_MakeNotification_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


