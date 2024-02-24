#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_VideoSettingsConsole.wid_MainMenu_VideoSettingsConsole_C
class UWid_MainMenu_VideoSettingsConsole_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Bloom;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons3_C*              Buttons;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       ChromaticAberation;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       DepthOfField;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FramerateLabel;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_menu_Benchmark_button_C*          GammaButton;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       GraphicsQualityConsole;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       HDR;                                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       LensFlare;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       MotionBlur;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           Popup;                                             // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            VideoLabel;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsUnlocked;                                        // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_232F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_MainMenu_Video_Options_C*         VideoOptionsMenu;                                  // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUltraQualityPopupVisible;                        // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInputEnabled;                                    // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsResetPopupVisible;                               // 0x2FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_233F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreviousFoliageQuality;                            // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Options_C*               OptionsMenu;                                       // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MainMenu_VideoSettingsConsole_C* GetDefaultObj();

	void Get_Graphics_Quality_Settings_Console(int32* Graphics_Quality, bool Temp_bool_Variable, int32 Temp_int_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_GetGeometryQuality_ReturnValue, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetVisualEffectQuality_ReturnValue, int32 CallFunc_GetShadowQuality_ReturnValue, int32 CallFunc_GetTextureQuality_ReturnValue, int32 CallFunc_GetAntiAliasingQuality_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, int32 CallFunc_MaxOfIntArray_IndexOfMaxValue, int32 CallFunc_MaxOfIntArray_MaxValue, int32 CallFunc_MinOfIntArray_IndexOfMinValue, int32 CallFunc_MinOfIntArray_MinValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue);
	int32 ClampGraphicsValue(enum class EScalabilityType Type, int32 Value, const struct FIntPoint& CallFunc_GetScalabilityClamp_Global_Clamp, const struct FIntPoint& CallFunc_GetScalabilityClamp_Advanced_Clamp, int32 CallFunc_Clamp_ReturnValue);
	void ShowRestartPopup(bool CallFunc_Is_Any_Popup_Visible_Is_Visible, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void OnPopupConfirmed();
	void ApplyButtonPressed(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Hide_Popup();
	void Capitalize_Labels(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1);
	void Is_Any_Popup_Visible(bool* Is_Visible, bool CallFunc_IsVisible_ReturnValue);
	void Show_Ultra_Quality_Popup(bool CallFunc_Is_Any_Popup_Visible_Is_Visible, class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void Close_Video_Settings();
	void Save_Graphics_Quality(int32 CurrentGraphicsQuality, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, int32 CallFunc_ClampGraphicsValue_ReturnValue, int32 CallFunc_ClampGraphicsValue_ReturnValue_1, int32 CallFunc_ClampGraphicsValue_ReturnValue_2, int32 CallFunc_ClampGraphicsValue_ReturnValue_3, int32 CallFunc_ClampGraphicsValue_ReturnValue_4, int32 CallFunc_ClampGraphicsValue_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_ClampGraphicsValue_ReturnValue_6, int32 CallFunc_SelectInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, int32 CallFunc_ClampGraphicsValue_ReturnValue_7);
	void Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
	void Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetDepthOfFieldEnabled_ReturnValue, bool CallFunc_GetMotionBlurEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, bool CallFunc_GetBloomEnabled_ReturnValue, bool CallFunc_GetChromaticAberationEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, bool CallFunc_GetLensFlareEnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, int32 CallFunc_Get_Graphics_Quality_Settings_Console_Graphics_Quality, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_IsHDREnabled_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_5);
	void Save_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_Conv_IntToBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, bool CallFunc_Conv_IntToBool_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, bool CallFunc_Conv_IntToBool_ReturnValue_2, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_3, bool CallFunc_Conv_IntToBool_ReturnValue_3, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_4, bool CallFunc_Conv_IntToBool_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, int32 CallFunc_GetFoliageQuality_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_5, bool CallFunc_Conv_IntToBool_ReturnValue_5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue);
	void Setup_Selectable_Manger(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void Reset_To_Defaults(int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, bool CallFunc_Is_Any_Popup_Visible_Is_Visible);
	void PreConstruct(bool IsDesignTime);
	void BackBtn();
	void Up();
	void Down();
	void Accept();
	void Left();
	void Right();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InputBackspace();
	void ShowGammaSettings();
	void ExecuteUbergraph_wid_MainMenu_VideoSettingsConsole(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_Is_Any_Popup_Visible_Is_Visible, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetSelectedEntry_Entry, class UWid_menu_Benchmark_button_C* K2Node_DynamicCast_AsWid_Menu_Benchmark_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_1, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_2, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_3, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_4, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Is_Any_Popup_Visible_Is_Visible_6, class UWid_MainMenu_Gamma_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetMainMenuZOrder_ZOrder);
};

}


