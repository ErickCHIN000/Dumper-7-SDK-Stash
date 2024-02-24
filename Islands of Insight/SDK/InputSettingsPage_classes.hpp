#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x390 - 0x2E8)
// WidgetBlueprintGeneratedClass InputSettingsPage.InputSettingsPage_C
class UInputSettingsPage_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInputRow_C*                           CheatSolve;                                        // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputRow_C*                           CheatTeleport;                                     // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                         ControllerSensitivity;                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledSliderSetting_C*                ControllerSensitivitySliderSetting;                // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                         MouseSensitivity;                                  // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStyledSliderSetting_C*                MouseSensitivitySliderSetting;                     // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              PresetSelector;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StyledButton_C*                   ResetButton;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, class FText>               GlobalActionAxisToLabelMap;                        // 0x330(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UActionMapping*>                All_Action_Mappings;                               // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UInputSettingsPage_C* GetDefaultObj();

	enum class ESlateVisibility CheatSettingVisibility(bool CallFunc_LocalPlayerIsInDevMode_ReturnValue);
	void Construct();
	void BndEvt__PresetSelector_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void BndEvt__InputSettingsPage_WBP_StyledButton_K2Node_ComponentBoundEvent_1_Pressed__DelegateSignature();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void ExecuteUbergraph_InputSettingsPage(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Loop_Counter_Variable_4, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_4, class UActionMapping* CallFunc_Array_Get_Item, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, const struct FPlayerInputMappings& CallFunc_GetPlayerInputMappingsStatic_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, bool K2Node_SwitchName_CmpSuccess, const class FString& K2Node_ComponentBoundEvent_Value, bool K2Node_SwitchString_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, TArray<class UWidget*>& CallFunc_GetAllChildWidgetsRecursive_Widgets, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_Array_Get_Item_2, class UInputRow_C* K2Node_DynamicCast_AsInput_Row, bool K2Node_DynamicCast_bSuccess, class UInputMapping* K2Node_DynamicCast_AsInput_Mapping, bool K2Node_DynamicCast_bSuccess_1, TArray<class UWidget*>& CallFunc_GetAllChildWidgetsRecursive_Widgets_1, int32 CallFunc_Array_Length_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1, class UAxisMapping* K2Node_DynamicCast_AsAxis_Mapping, bool K2Node_DynamicCast_bSuccess_2, class UActionMapping* K2Node_DynamicCast_AsAction_Mapping, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, TArray<class UWidget*>& CallFunc_GetAllChildWidgetsRecursive_Widgets_2, bool Temp_bool_IsClosed_Variable, class UWidget* CallFunc_Array_Get_Item_4, class UActionMapping* K2Node_DynamicCast_AsAction_Mapping_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue);
};

}


