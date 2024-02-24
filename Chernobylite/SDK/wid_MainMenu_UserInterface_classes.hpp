#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x169 (0x3C9 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_UserInterface.wid_MainMenu_UserInterface_C
class UWid_MainMenu_UserInterface_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_graphics_Option_C*       AimIndicator;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       AllUI;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       AmmoUI;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons2_C*              Buttons;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       CharacterPortraits;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       CompasUI;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       EnemyHealthUI;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       ExperienceUI;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       HealthUI;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       InformationFrameUI;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       QuickMenuUI;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       SpottedIndicatorUI;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       ThreatMeterUI;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsUnlocked;                                        // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2108[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_MainMenu_Options_C*               OptionsMenu;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FString>                        AvailableCultures;                                 // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, class FText>             CultureNames;                                      // 0x310(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EWWiseLanguage, class FText> VoicesLangs;                                       // 0x360(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         RestartRequired;                                   // 0x3B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2112[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ShowPopupForCultures;                              // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShouldShowCulturePopup;                            // 0x3C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_MainMenu_UserInterface_C* GetDefaultObj();

	bool IsAllUISetToTrue(int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void OnCharacterPortraitsChanged(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class ESubtitlesMode CallFunc_CharacterPortraitsToEnum_SubtitleMode);
	void CharacterPortraitsToEnum(enum class ESubtitlesMode* SubtitleMode, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool K2Node_SwitchInteger_CmpSuccess);
	void EnumToCharacterPortraitsValue(enum class ESubtitlesMode Selection, int32* Value, bool K2Node_SwitchEnum_CmpSuccess);
	bool IsUserInterfaceDisabled(class UWid_MainMenu_graphics_Option_C* Option, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SaveUIVisibility(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_IsUserInterfaceDisabled_ReturnValue, bool CallFunc_IsAllUISetToTrue_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected_2, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_2, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_3, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_4, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_5, bool CallFunc_IsUserInterfaceDisabled_ReturnValue_6);
	void On_All_UI_Value_Changed(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWid_MainMenu_graphics_Option_C*>& K2Node_MakeArray_Array, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class UWid_MainMenu_graphics_Option_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class ESubtitlesMode CallFunc_GetSubtitleMode_ReturnValue, int32 CallFunc_EnumToCharacterPortraitsValue_Value, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, int32 CallFunc_Conv_BoolToInt_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_3, int32 CallFunc_Conv_BoolToInt_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_4, int32 CallFunc_Conv_BoolToInt_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_5, int32 CallFunc_Conv_BoolToInt_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_6, int32 CallFunc_Conv_BoolToInt_ReturnValue_8);
	void Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void Close_Game_Options();
	void Set_Default_Values(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_EnumToCharacterPortraitsValue_Value, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1);
	void SetDefault();
	void Up();
	void Down();
	void Left();
	void Right();
	void PreConstruct(bool IsDesignTime);
	void BackPressed();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SaveSettings();
	void ExecuteUbergraph_wid_MainMenu_UserInterface(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


