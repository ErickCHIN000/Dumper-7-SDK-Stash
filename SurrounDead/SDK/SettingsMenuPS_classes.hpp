#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x310 - 0x2C0)
// WidgetBlueprintGeneratedClass SettingsMenuPS.SettingsMenuPS_C
class USettingsMenuPS_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioSettingsPage_C*                  AudioSettingsPage;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               BackButton;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BackText;                                          // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalRadioSelect_C*                CategorySelect;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       CategorySwitcher;                                  // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDifficultySettingsPage_C*             DifficultySettingsPage;                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGameplaySettingsPage_C*               GameplaySettingsPage;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInputSettingsPage_C*                  InputSettingsPage;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVideoSettingsPage_C*                  VideoSettingsPage;                                 // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USettingsMenuPS_C* GetDefaultObj();

	void BndEvt__BackButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void CategoryChanged(const class FString& Value);
	void Construct();
	void CloseMenu();
	void ExecuteUbergraph_SettingsMenuPS(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_Value, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, const struct FSettingOption& K2Node_MakeStruct_SettingOption, const struct FSettingOption& K2Node_MakeStruct_SettingOption_1, const struct FSettingOption& K2Node_MakeStruct_SettingOption_2, const struct FSettingOption& K2Node_MakeStruct_SettingOption_3, TArray<struct FSettingOption>& K2Node_MakeArray_Array, class AHUD_Game_C* CallFunc_GetGameHUD_HUD);
};

}


