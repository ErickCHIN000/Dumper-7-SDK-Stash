#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2E8 - 0x2C0)
// BlueprintGeneratedClass MoveCameraTutorial.MoveCameraTutorial_C
class AMoveCameraTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MoveCameraCheckTimer;                              // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GoatDefaultLoc;                                    // 0x2D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistancePlayerMustMoveToComplete;                  // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMoveCameraTutorial_C* GetDefaultObj();

	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void CheckIfPlayerHasMoved();
	void ExecuteUbergraph_MoveCameraTutorial(int32 EntryPoint, bool CallFunc_IsTutorialShown_ReturnValue, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_VSize_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


