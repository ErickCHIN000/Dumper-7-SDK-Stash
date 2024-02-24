#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x5A0 - 0x510)
// WidgetBlueprintGeneratedClass WBP_Options_KeyBindingsScreen.WBP_Options_KeyBindingsScreen_C
class UWBP_Options_KeyBindingsScreen_C : public UNWXKeyMappingWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_ResetToDefaults;                               // 0x518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox;                                         // 0x520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VB_InputActions;                                   // 0x528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UInputAction*, class UWBP_Options_InputAction_C*> InputActionMap;                                    // 0x530(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UInputAction*>                  ExcludedInputActions;                              // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UInputMappingContext*>          RegisteredMappingContexts;                         // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Options_KeyBindingsScreen_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue);
	void Internal_OnSettingsValueUpdated(class UUserWidget* SettingsWidget, class UNWXOptionsSettingWidget* K2Node_DynamicCast_AsNWXOptions_Setting_Widget, bool K2Node_DynamicCast_bSuccess);
	void IsMappingNameSynchronized(class FName MappingName, bool* IsSynchronized, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FSynchronizedKeyMapping>& Temp_struct_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FSynchronizedKeyMapping& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void RebuildWidgets(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UInputMappingContext* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FEnhancedActionKeyMapping& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Options_InputAction_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_Options_InputAction_C* CallFunc_Create_ReturnValue, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput, class UEnhancedInputUserSettings* CallFunc_GetUserSettings_ReturnValue, class UEnhancedPlayerMappableKeyProfile* CallFunc_GetCurrentKeyProfile_ReturnValue, TMap<class FName, struct FKeyMappingRow> CallFunc_GetPlayerMappingRows_ReturnValue, TArray<struct FKeyMappingRow>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue_2, const struct FKeyMappingRow& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<struct FPlayerKeyMapping>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue_3, const struct FPlayerKeyMapping& CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsMappingNameSynchronized_IsSynchronized, bool CallFunc_Not_PreBool_ReturnValue, class UWBP_Options_InputAction_C* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1);
	class UWidget* GetDefaultFocusWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void BP_OnActivated();
	void Construct();
	void BndEvt__WBP_Options_KeyBindingsScreen_CBU_ResetToDefaults_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void InternalConfirmChanges();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_Options_KeyBindingsScreen(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput, class UEnhancedInputUserSettings* CallFunc_GetUserSettings_ReturnValue, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput_1, class UEnhancedInputUserSettings* CallFunc_GetUserSettings_ReturnValue_1, class UEnhancedPlayerMappableKeyProfile* CallFunc_GetCurrentKeyProfile_ReturnValue, bool CallFunc_IsFeatureFlagEnabled_ReturnValue, bool CallFunc_IsFeatureFlagEnabled_ReturnValue_1, class UEnhancedInputLocalPlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, TArray<TSoftObjectPtr<class UInputMappingContext>>& Temp_softobject_Variable, TScriptInterface<class IEnhancedInputSubsystemInterface> CallFunc_GetUserSettings_self_CastInput_2, class UEnhancedInputUserSettings* CallFunc_GetUserSettings_ReturnValue_2, TSoftObjectPtr<class UInputMappingContext> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UInputMappingContext* K2Node_DynamicCast_AsInput_Mapping_Context, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RegisterInputMappingContext_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
};

}


