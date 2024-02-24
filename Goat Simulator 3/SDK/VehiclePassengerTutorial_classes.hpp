#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x308 - 0x2C0)
// BlueprintGeneratedClass VehiclePassengerTutorial.VehiclePassengerTutorial_C
class AVehiclePassengerTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TimeUntilAutomaticCompletion;                      // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C3C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CarTutorialText;                                   // 0x2D8(0x18)(Edit, BlueprintVisible)
	class FText                                  BikeTutorialText;                                  // 0x2F0(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AVehiclePassengerTutorial_C* GetDefaultObj();

	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void OnAutomaticCompletion();
	void OnVehicleAbilityActivated_Event_0(class AGGVehicle* Vehicle, const struct FGameplayTagContainer& AbilityTags);
	void ExecuteUbergraph_VehiclePassengerTutorial(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, class AGGVehicle* K2Node_DynamicCast_AsGGVehicle, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_GetTutorialID_ReturnValue, class AGGVehicle* K2Node_CustomEvent_Vehicle, const struct FGameplayTagContainer& K2Node_CustomEvent_AbilityTags, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, class AGGVehicle* K2Node_DynamicCast_AsGGVehicle_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue_1, const class FString& CallFunc_GetTutorialID_ReturnValue_1, const struct FNotification& CallFunc_MakeNotification_ReturnValue, const struct FNotification& CallFunc_MakeNotification_ReturnValue_1);
};

}


