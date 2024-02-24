#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x308 - 0x2A8)
// WidgetBlueprintGeneratedClass UMG_SettingsView.UMG_SettingsView_C
class UUMG_SettingsView_C : public USettingsView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          SectionsBox;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SettingsViewDescription;                           // 0x2B8(0x18)(Edit, BlueprintVisible)
	class UTextBlock*                            SettingOptionDescription;                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            On_Setting_Option_Hovered;                         // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_Setting_Option_Unhovered;                       // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            On_View_Refresh;                                   // 0x2F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_SettingsView_C* GetDefaultObj();

	class USettingsSection* CreateNewSection(class UUMG_SettingsSection_C* Section, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UUMG_SettingsSection_C* CallFunc_Create_ReturnValue);
	class USettingsSection* AddNewSection(class UUMG_SettingsSection_C* Section, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UUMG_SettingsSection_C* CallFunc_Create_ReturnValue);
	void Setting_Option_Hovered(class UUMG_SettingRowBorder_C* Setting_Option);
	void Setting_Option_Unhovered(class UUMG_SettingRowBorder_C* Setting_Option);
	void PostSetup();
	void OnRefresh();
	void Set_Confirmation_Slot(class UNamedSlot* Confirmation_Slot);
	void ExecuteUbergraph_UMG_SettingsView(int32 EntryPoint, class UNamedSlot* K2Node_CustomEvent_Confirmation_Slot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_SettingRowBorder_C* K2Node_CustomEvent_Setting_Option_1, class UUMG_SettingRowBorder_C* K2Node_CustomEvent_Setting_Option, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_SettingsSection_C* K2Node_DynamicCast_AsUMG_Settings_Section, bool K2Node_DynamicCast_bSuccess);
	void On_View_Refresh__DelegateSignature(class UUMG_SettingsView_C* View);
	void On_Setting_Option_Unhovered__DelegateSignature(class UUMG_SettingRowBorder_C* Setting_Option);
	void On_Setting_Option_Hovered__DelegateSignature(class UUMG_SettingRowBorder_C* Setting_Option);
};

}


