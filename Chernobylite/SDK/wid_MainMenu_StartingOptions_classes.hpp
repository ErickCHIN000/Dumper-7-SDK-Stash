#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F9 (0x459 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_StartingOptions.wid_MainMenu_StartingOptions_C
class UWid_MainMenu_StartingOptions_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_graphics_Option_C*       AudioDevice;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       AudioLanguage;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons4_C*              Buttons;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       HDR;                                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Locale;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_RoomSkillTreeConfirm_C*           RestartPopup;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_graphics_Option_C*       Subtitles;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsUnlocked;                                        // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FString>                        AvailableCultures;                                 // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, class FText>             CultureNames;                                      // 0x2D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EWWiseLanguage, class FText> VoicesLangs;                                       // 0x328(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         RestartRequired;                                   // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1E9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        ShowPopupForCultures;                              // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ShouldShowCulturePopup;                            // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1EAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EWWiseLanguage, class FText> VoicesLangsInPreviewMode;                          // 0x398(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FString, class FText>             CultureNamesInPreviewMode;                         // 0x3E8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          CachedAudioDevicesName;                            // 0x438(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         ShouldUpdateButtonsPadding;                        // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_MainMenu_StartingOptions_C* GetDefaultObj();

	TArray<class FString> GetCultureIDS(bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, bool CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue, TArray<class FString>& K2Node_Select_Default);
	void Get_Audio_Device_With_Id(int32 AudioDeviceId, struct FAudioDeviceInfo* AudioDevice, class FName* DatatableName, bool* Success, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void On_Audio_Device_Changed();
	void Set_And_Save_Audio_Settings(int32 SelectedAudioDevice, float EffectVolume, float DialogueVolume, float MusicVolume, float MasterVolume, const struct FAudioDeviceInfo& CallFunc_Get_Selected_Audio_Device_AudioDevice, class FName CallFunc_Get_Selected_Audio_Device_DatatableName, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue);
	void Select_Audio_Device(const TArray<float>& AudioDevicesModifier, TArray<float>& K2Node_MakeArray_Array, const struct FAudioDeviceInfo& CallFunc_Get_Selected_Audio_Device_AudioDevice, class FName CallFunc_Get_Selected_Audio_Device_DatatableName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter);
	void Setup_Audio_Devices(const TArray<class FText>& AudioDeviceValues, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void Get_Selected_Audio_Device(struct FAudioDeviceInfo* AudioDevice, class FName* DatatableName, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class FName CallFunc_Array_Get_Item, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void OnPopupConfirmed();
	void ShowCulturePopup(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void PlayButtonSound(class UWid_MainMenu_Buttons_Entry_C* Button, bool CallFunc_IsVisible_ReturnValue);
	void Show_Restart_Popup(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	int32 Get_Saved_Audio_Language_Index(int32 Temp_int_Variable, bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TArray<enum class EWWiseLanguage>& CallFunc_Map_Keys_Keys, int32 CallFunc_GetCurrentLanguage_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	int32 Get_Saved_Locale_Index(bool Temp_bool_Variable, int32 Temp_int_Variable, TArray<class FString>& CallFunc_GetCultureIDS_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void Setup_Locale_Values(bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue, TMap<class FString, class FText> K2Node_Select_Default, TArray<class FText>& CallFunc_Map_Values_Values);
	void Get_Selected_Locale(class FString* Selected_Locale, TArray<class FString>& CallFunc_GetCultureIDS_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, const class FString& CallFunc_Array_Get_Item);
	enum class EWWiseLanguage Get_Selected_Audio_Language(TArray<enum class EWWiseLanguage>& CallFunc_Map_Keys_Keys, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, enum class EWWiseLanguage CallFunc_Array_Get_Item);
	void Setup_Audio_Language_Values(bool Temp_bool_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue, TMap<enum class EWWiseLanguage, class FText> K2Node_Select_Default, TArray<class FText>& CallFunc_Map_Values_Values);
	void On_Subtitles_Value_Changed(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Conv_IntToBool_ReturnValue);
	void Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
	void Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetAudioSettings_MasterVolumeVal, float CallFunc_GetAudioSettings_MusicVolumeVal, float CallFunc_GetAudioSettings_DialoguesVolumeVal, float CallFunc_GetAudioSettings_EffectsVolumeVal, int32 CallFunc_GetAudioSettings_AudioDeviceIdVal, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, const struct FAudioDeviceInfo& CallFunc_Get_Audio_Device_With_Id_AudioDevice, class FName CallFunc_Get_Audio_Device_With_Id_DatatableName, bool CallFunc_Get_Audio_Device_With_Id_Success, bool CallFunc_IsHDREnabled_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, int32 CallFunc_Get_Saved_Audio_Language_Index_ReturnValue, int32 CallFunc_Get_Saved_Locale_Index_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_GetSubtitlesOn_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1);
	void Setup_Selectable_Manager(TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void CloseOptions();
	void Set_Default_Values(enum class EWWiseLanguage Temp_byte_Variable, int32 CallFunc_Conv_BoolToInt_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, bool CallFunc_IsVisible_ReturnValue, TArray<class FText>& CallFunc_Map_Values_Values, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue);
	void Up();
	void Down();
	void Left();
	void Right();
	void Accept();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SaveSettings();
	void SetDefault();
	void SetupPreviewMode();
	void PreConstruct(bool IsDesignTime);
	void BackPressed();
	void Construct();
	void ExecuteUbergraph_wid_MainMenu_StartingOptions(int32 EntryPoint, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool CallFunc_IsVisible_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_2, enum class EWWiseLanguage Temp_byte_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, enum class EWWiseLanguage CallFunc_Get_Selected_Audio_Language_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Get_Selected_Locale_Selected_Locale, bool CallFunc_SetCurrentCulture_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, const class FString& CallFunc_Get_Selected_Locale_Selected_Locale_1, bool CallFunc_NotEqual_StriStri_ReturnValue, enum class EWWiseLanguage CallFunc_Get_Selected_Audio_Language_ReturnValue_1, const class FString& CallFunc_GetCurrentAudioCulture_ReturnValue, const class FString& K2Node_Select_Default, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue, bool CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue, bool K2Node_Event_IsDesignTime, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_GetIsVoiceLanguageInPreviewMode_ReturnValue_1, bool CallFunc_GetIsTextLanguageInPreviewMode_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, TScriptInterface<class ISelectableEntryInterace_C> CallFunc_GetEntryIndex_self_CastInput, int32 CallFunc_GetEntryIndex_EntryIndex, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, bool CallFunc_Conv_IntToBool_ReturnValue);
	void Finished__DelegateSignature();
};

}


