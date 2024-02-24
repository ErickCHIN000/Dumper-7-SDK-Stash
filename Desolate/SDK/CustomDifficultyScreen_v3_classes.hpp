#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDD (0x362 - 0x285)
// WidgetBlueprintGeneratedClass CustomDifficultyScreen_v3.CustomDifficultyScreen_v3_C
class UCustomDifficultyScreen_v3_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1FB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOptionLine_Slider_C*                  AIDamage;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  AIHealth;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  AnomalyDamage;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  ArmorDurabilityTakeCost;                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMainMenuButton_1_C*                   BackButton;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BackTitle;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTooltipWrapper_C*                     BackTooltipWrapper;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CaptionGlow;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CaptionTint;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CustomTitle;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  DayLength;                                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  DeathMoneyDropRate;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  DebuffDamage;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  DurabilityHitCost;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFakeFocusWidget_C*                    FakeFocusWidget;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Selection_C*               FullDrop;                                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  HungerDamage;                                      // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            OptionScrollBox;                                   // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHRadioGroup*                         OptionsGroup;                                      // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Selection_C*               PveMode;                                           // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  QuestReward;                                       // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Selection_C*               Selfhealing;                                       // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Selection_C*               ShowAim;                                           // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Selection_C*               ShowHUD;                                           // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOptionLine_Slider_C*                  StressPower;                                       // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USHUserWidget*                         SelectedButton;                                    // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLoaded;                                           // 0x360(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bChanged;                                          // 0x361(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCustomDifficultyScreen_v3_C* GetDefaultObj();

	enum class ESlateVisibility Get_ShowAim_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Get_ShowAim_bIsEnabled_0_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	bool Get_ShowAim_bIsEnabled_0(int32 CallFunc_GetSelectedIndex_Result, bool CallFunc_Conv_IntToBool_ReturnValue);
	enum class ESlateVisibility Get_DeathMoneyDropRate_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Get_DeathMoneyDropRate_bIsEnabled_0_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	bool Get_DeathMoneyDropRate_bIsEnabled_0(int32 CallFunc_GetSelectedIndex_Result, bool CallFunc_Conv_IntToBool_ReturnValue);
	void SaveSettings(enum class ESelfHealingType Temp_byte_Variable, enum class ESelfHealingType Temp_byte_Variable_1, enum class ESelfHealingType Temp_byte_Variable_2, float CallFunc_GetValue_Value, float CallFunc_GetValue_Value_1, float CallFunc_GetValue_Value_2, int32 Temp_int_Variable, int32 CallFunc_GetSelectedIndex_Result, enum class ESelfHealingType K2Node_Select_Default, int32 CallFunc_GetSelectedIndex_Result_1, int32 CallFunc_GetSelectedIndex_Result_2, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32 CallFunc_GetSelectedIndex_Result_3, int32 CallFunc_GetSelectedIndex_Result_4, bool CallFunc_Conv_IntToBool_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue_3, float CallFunc_GetValue_Value_3, float CallFunc_GetValue_Value_4, float CallFunc_GetValue_Value_5, float CallFunc_GetValue_Value_6, float CallFunc_GetValue_Value_7, float CallFunc_GetValue_Value_8, float CallFunc_GetValue_Value_9, float CallFunc_GetValue_Value_10, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess);
	void ReadSettings(enum class ESelfHealingType Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void FocusCurrentButton(class USHGlobals* CallFunc_GetSHGlobals_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Show();
	void ShowInstant();
	void Hide();
	void DrawText();
	void OnSynchronizeProperties();
	void OnSelectionChanged_Event_0();
	void OnWidgetSelectedEvent_Event_0(int32 GroupIndex);
	void CustomEvent_0();
	void ExecuteUbergraph_CustomDifficultyScreen_v3(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class USHUserWidget* K2Node_DynamicCast_AsSHUser_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class USHUserWidget* CallFunc_GetSelectedWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_GroupIndex, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_GetSelectedIndex_Result, class FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, float K2Node_Select_Default);
};

}


