#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x2D4 - 0x2C0)
// BlueprintGeneratedClass VehicleAbilityTutorial.VehicleAbilityTutorial_C
class AVehicleAbilityTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TimeUntilAutomaticCompletion;                      // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AVehicleAbilityTutorial_C* GetDefaultObj();

	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void OnAutomaticCompletion();
	void OnVehicleAbilityActivated_Event_0(class AGGVehicle* Vehicle, const struct FGameplayTagContainer& AbilityTags);
	void ExecuteUbergraph_VehicleAbilityTutorial(int32 EntryPoint, TArray<struct FGameplayTag>& K2Node_MakeArray_Array, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FNotificationProperties& CallFunc_MakeNotificationProperties_ReturnValue, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, TScriptInterface<class IGGTutorialInterface> K2Node_DynamicCast_AsGGTutorial_Interface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetTutorialText_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_GetTutorialID_ReturnValue, class AGGVehicle* K2Node_CustomEvent_Vehicle, const struct FGameplayTagContainer& K2Node_CustomEvent_AbilityTags, const struct FNotification& CallFunc_MakeNotification_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AGGVehicle* K2Node_DynamicCast_AsGGVehicle, bool K2Node_DynamicCast_bSuccess_1);
};

}


