#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2E0 - 0x2C0)
// BlueprintGeneratedClass RidingBikeTutorial.RidingBikeTutorial_C
class ARidingBikeTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CachedLocation;                                    // 0x2D0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceToComplete;                                // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ARidingBikeTutorial_C* GetDefaultObj();

	void CheckIfCarHasMoved(float CallFunc_Square_ReturnValue, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, float CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1);
	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void ExecuteUbergraph_RidingBikeTutorial(int32 EntryPoint, const class FString& CallFunc_GetTutorialID_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGGPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class FText K2Node_Select_Default, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, const struct FNotification& CallFunc_MakeNotification_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}


