#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2B0 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Controls_ControllerSettings.wid_MainMenu_Controls_ControllerSettings_C
class UWid_MainMenu_Controls_ControllerSettings_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_Volume_Option_C*         AimAssistStrength;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       AimAssit;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons2_C*              Buttons;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_menu_Benchmark_button_C*          ControllerLayoutButton;                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Options_C*      ControlsOptionsMenu;                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Controls_ControllerSettings_C* GetDefaultObj();

	void BackPressed();
	void Save_Settings();
	void Close_Control_Settings();
	void DefaultPressed(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetAimAssitDefaultValue_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue);
	void Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetIsAimAssistEnabled_ReturnValue, float CallFunc_GetAimAssistStrength_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue);
	void Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void On_AimAssist_Changed(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Conv_IntToBool_ReturnValue);
	void On_AimAssist_Strength_Changed(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Left();
	void Right();
	void Up();
	void Down();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InputEnter();
	void InputDefault();
	void ShowControllerLayout();
	void InputBack();
	void Construct();
	void RightReleased();
	void LeftRelesed();
	void ExecuteUbergraph_wid_MainMenu_Controls_ControllerSettings(int32 EntryPoint, class UWid_MainMenu_Controls_Controller_C* CallFunc_Create_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 CallFunc_GetSelectedEntryIndex_CurrentlySelected, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetMainMenuZOrder_ZOrder);
};

}


