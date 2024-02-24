#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA9 (0x349 - 0x2A0)
// WidgetBlueprintGeneratedClass UMG_SettingRowBorder.UMG_SettingRowBorder_C
class UUMG_SettingRowBorder_C : public USettingRowBorder
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_83;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DarkTint;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SettingTooltipHover_C*            Help;                                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               HoverButton;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               NameBorder;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              OuterSizeBox;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_SettingTooltipRestart_C*          Restart;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            SettingsControlSlot;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SettingText;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SettingOptionText;                                 // 0x2F0(0x18)(Edit, BlueprintVisible)
	class FText                                  SettingOptionDescription;                          // 0x308(0x18)(Edit, BlueprintVisible)
	float                                        SettingControlFill;                                // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SettingOptionHovered;                              // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SettingOptionUnhovered;                            // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ManualMode;                                        // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_SettingRowBorder_C* GetDefaultObj();

	void Set_Requirements(const TArray<bool>& States, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, TArray<class FText>& CallFunc_Map_Values_Values, TArray<int32>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_CheckSettingCondition_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void GetFocusWidget(bool* bValid, class UWidget** Widget, bool* bThis, class UWidget* CallFunc_GetContent_ReturnValue, class UUMG_IcarusWidget_C* K2Node_DynamicCast_AsUMG_Icarus_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis);
	void PreConstruct(bool IsDesignTime);
	void Post_Setup();
	void Update_Enabled_State();
	void HideName();
	void Setup_Restart_Widget();
	void On_Restart_Requested(class FName SettingName);
	void Connect_To_Restart_Events();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UMG_SettingRowBorder(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsHovered_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsSettingEnabledForEdit_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_2, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_3, bool CallFunc_SettingRequiresRestart_ReturnValue, class FName K2Node_CustomEvent_SettingName, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_4, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void SettingOptionUnhovered__DelegateSignature(class UUMG_SettingRowBorder_C* SettingOption);
	void SettingOptionHovered__DelegateSignature(class UUMG_SettingRowBorder_C* SettingOption);
};

}


