#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x390 - 0x340)
// WidgetBlueprintGeneratedClass WBP_InputActionPresentationWidget.WBP_InputActionPresentationWidget_C
class UWBP_InputActionPresentationWidget_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        PresentationContainerBox;                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UInputAction>           InputAction;                                       // 0x350(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       Height;                                            // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FInputActionPresentationData>  InputActionPresentations;                          // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_InputActionPresentationWidget_C* GetDefaultObj();

	void Get_Keys_for_Action(class UInputAction*& CurrentInputAction, struct FInputActionPresentationData& DefaultActionPresentation, bool& IsUsingGamepad, TArray<struct FKey>* CurrentKeys, const TArray<struct FKey>& AllKeysMappedToAction, const TArray<struct FKey>& Keys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, const struct FKey& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_QueryKeysMappedToAction_self_CastInput, TArray<struct FKey>& CallFunc_QueryKeysMappedToAction_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
	void SetInputData(TSoftObjectPtr<class UInputAction> InputAction);
	void Update(bool IsUsingGamepad, const struct FInputActionPresentationData& CurrentPresentationData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_InputKeyIconSet_C* CallFunc_Create_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_InputKey_OR_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsUsingGamepad_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FInputActionPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UInputAction* K2Node_DynamicCast_AsInput_Action, bool K2Node_DynamicCast_bSuccess, TArray<struct FInputActionPresentationData>& CallFunc_GetInputActionPresentation_OutPresentationDataArray, TArray<struct FKey>& CallFunc_Get_Keys_for_Action_CurrentKeys);
	void Construct();
	void OnUsingGamepadChanged(bool bUsingGamepad);
	void Destruct();
	void ExecuteUbergraph_WBP_InputActionPresentationWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput, class UEnhancedInputUserSettings* CallFunc_GetUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bUsingGamepad, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput_1, class UEnhancedInputUserSettings* CallFunc_GetUserSettings_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
};

}


