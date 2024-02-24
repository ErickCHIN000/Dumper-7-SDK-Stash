#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x2F2 - 0x2C0)
// BlueprintGeneratedClass MovementTutorial2.MovementTutorial2_C
class AMovementTutorial2_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MoveCameraCheckTimer;                              // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GoatDefaultLoc;                                    // 0x2D8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistancePlayerMustMoveToComplete;                  // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CheckIfGoatIsSprintingTimer;                       // 0x2E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         HasSprinted;                                       // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHasJumped;                                        // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AMovementTutorial2_C* GetDefaultObj();

	TArray<bool> GetStepCompletionArray(bool Temp_bool_Variable, bool CallFunc_IsMobilePlatform_ReturnValue, TArray<bool>& K2Node_MakeArray_Array, TArray<bool>& K2Node_MakeArray_Array_1, TArray<bool>& K2Node_Select_Default);
	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void CheckIfGoatIsSprinting();
	void CheckIfTutorialCompleted();
	void GoatJumped(class AGGCharacter* Character);
	void ExecuteUbergraph_MovementTutorial2(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGGGoat* CallFunc_GetControlledGoat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsSprinting_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGGCharacter* K2Node_CustomEvent_Character, TArray<bool>& CallFunc_GetStepCompletionArray_ReturnValue, bool CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


