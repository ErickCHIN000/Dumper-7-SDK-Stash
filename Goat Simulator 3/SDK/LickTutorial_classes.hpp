#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x43 (0x303 - 0x2C0)
// BlueprintGeneratedClass LickTutorial.LickTutorial_C
class ALickTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        LickCount;                                         // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LickObjectInitialLoc;                              // 0x2D4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DragCompleteDist;                                  // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C0A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LickedActor;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DragTimerHandle;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bWaitingForNewLick;                                // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C18[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LicksNeededToComplete;                             // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasLickedSomething;                                // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasReleasedSomething;                              // 0x301(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasDraggedSomething;                               // 0x302(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ALickTutorial_C* GetDefaultObj();

	TArray<class FText> GetStepOverrideDescriptionArray(TArray<class FText>& K2Node_MakeArray_Array);
	TArray<bool> GetStepCompletionArray(bool CallFunc_BooleanNOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, TArray<bool>& K2Node_MakeArray_Array);
	void GoatLickedActor(class AGGGoat* GoatLicking, class AActor* LickedActor);
	void CheckIfAllBasicMechanicsAreCompleted();
	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void CheckDragging();
	void GoatDroppedActor(class AGGGoat* GoatLicking, class AActor* LickedActor);
	void ExecuteUbergraph_LickTutorial(int32 EntryPoint, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, class AActor* CallFunc_GetLickedObject_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, float CallFunc_Square_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AGGGoat* K2Node_CustomEvent_GoatLicking_1, class AActor* K2Node_CustomEvent_LickedActor_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGGGoat* K2Node_CustomEvent_GoatLicking, class AActor* K2Node_CustomEvent_LickedActor, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1);
};

}


