#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x408 - 0x2E8)
// WidgetBlueprintGeneratedClass GameplaySettingsPage.GameplaySettingsPage_C
class UGameplaySettingsPage_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalRadioSelect_C*              AmbassadorRadioSelect;                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CheatItemButton;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CheatPowerPolesButton;                             // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CheatSpawnRacingMetaPuzzle;                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CheatSpawnRandomAirdrop;                           // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               CheatWisdomButton;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              CrouchModeRadioSelect;                             // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        DevContentBox;                                     // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ForbidPowerCyclescheckbox_1;                       // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              FPSRadioSelect;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                         FPSRow;                                            // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USettingRow_C*                         FPSRow_1;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       GameModeTypeCombo_1;                               // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       GameStartTypeCombo;                                // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              InsightsRadioSelect;                               // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      MatchWinConTextbox;                                // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      MaxMatchDurationTextBox;                           // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              MonsterHunterRunRadioSelect_1;                     // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              NoWFlyForwardRadioSelect;                          // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               OverrideButton;                                    // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      OverrideTextBox;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              PartyGridRadioSelect;                              // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              PingRadioSelect;                                   // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             PlacePoweredOnlycheckbox_1;                        // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             PolesRewardSolverCheckbox_1;                       // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               PuzzleSpawnRateSlider;                             // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              ServerFPSRadioSelect_1;                            // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SetServerValueButton;                              // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              ShowMinimapRadioSelect;                            // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ShowOrphanPuzzles;                                 // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalRadioSelect_C*              SprintModeRadioSelect;                             // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_584;                                     // 0x3E8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ToggleDevModeBtn;                                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                MatchDurationString;                               // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGameplaySettingsPage_C* GetDefaultObj();

	void CheckOnlyNumbers(class FText& InText, class UEditableTextBox* Target, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue_2, bool CallFunc_IsNumeric_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class FText GetText_0(float CallFunc_GetValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void Construct();
	void BndEvt__LanguageSettingsPage_FPSRadioSelect_K2Node_ComponentBoundEvent_1_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void BndEvt__LanguageSettingsPage_PingRadioSelect_K2Node_ComponentBoundEvent_3_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void BndEvt__GameplaySettingsPage_SprintModeRadioSelect_K2Node_ComponentBoundEvent_17_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void BndEvt__GameplaySettingsPage_AmbassadorRadioSelect_K2Node_ComponentBoundEvent_5_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void BndEvt__GameplaySettingsPage_InsightsRadioSelect_K2Node_ComponentBoundEvent_15_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void BndEvt__GameplaySettingsPage_FPSRadioSelect_1_K2Node_ComponentBoundEvent_3_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void BndEvt__GameplaySettingsPage_PartyGridRadioSelect_K2Node_ComponentBoundEvent_11_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void BndEvt__GameplaySettingsPage_CrouchModeRadioSelect_K2Node_ComponentBoundEvent_16_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void SetDefaults();
	void CheckLoaded();
	void ExecuteUbergraph_GameplaySettingsPage(int32 EntryPoint, const class FString& K2Node_ComponentBoundEvent_Value_7, const class FString& K2Node_ComponentBoundEvent_Value_6, const class FString& K2Node_ComponentBoundEvent_Value_5, const class FString& K2Node_ComponentBoundEvent_Value_4, const class FString& K2Node_ComponentBoundEvent_Value_3, const class FString& K2Node_ComponentBoundEvent_Value_2, const class FString& K2Node_ComponentBoundEvent_Value_1, const class FString& K2Node_ComponentBoundEvent_Value, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_6, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_7, const class FString& CallFunc_Conv_IntToString_ReturnValue_5, const class FString& CallFunc_Conv_IntToString_ReturnValue_6, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_8, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_9, const class FString& CallFunc_Conv_IntToString_ReturnValue_7, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_10, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_11, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_12, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_13, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_14, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_15, class UGISSettings* CallFunc_GetGameInstanceSubsystem_ReturnValue_16);
};

}


