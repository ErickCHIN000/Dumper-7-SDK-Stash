#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x310 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Audio.wid_MainMenu_Audio_C
class UWid_MainMenu_Audio_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_graphics_Option_C*       AudioDevice;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons2_C*              Buttons;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Volume_Option_C*         DialoguesSlider;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Volume_Option_C*         EffectsSlider;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Volume_Option_C*         MusicSlider;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SelectableManager_C*              SelectableManager;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Volume_Option_C*         VolumeSlider;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ContinueDelegate;                                  // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NewDeletage;                                       // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ExitDelegate;                                      // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAudioComponent*                       MenuTheme;                                         // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUnlocked;                                        // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1008[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_MainMenu_Options_C*               OptionsMenu;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class FName>                          CachedAudioDevicesName;                            // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Audio_C* GetDefaultObj();

	void Get_Selected_Audio_Device(struct FAudioDeviceInfo* AudioDevice, class FName* DatatableName, int32 CallFunc_GetCurrentlySelectedIndex_CurrentlySelected, class FName CallFunc_Array_Get_Item, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void Get_Audio_Device_With_Id(int32 AudioDeviceId, struct FAudioDeviceInfo* AudioDevice, class FName* DatatableName, bool* Success, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Setup_Audio_Devices(const TArray<class FText>& AudioDeviceValues, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FAudioDeviceInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void Close_Audio_Settings();
	void Capitalize_Label(class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void On_Audio_Device_Changed();
	void On_Any_Audio_Value_Changed();
	void Setup_Selectable_Manager(TArray<TScriptInterface<class ISelectableEntryInterace_C>>& K2Node_MakeArray_Array);
	void Setup_Events(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void Load_Settings(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetAudioSettings_MasterVolumeVal, float CallFunc_GetAudioSettings_MusicVolumeVal, float CallFunc_GetAudioSettings_DialoguesVolumeVal, float CallFunc_GetAudioSettings_EffectsVolumeVal, int32 CallFunc_GetAudioSettings_AudioDeviceIdVal, const struct FAudioDeviceInfo& CallFunc_Get_Audio_Device_With_Id_AudioDevice, class FName CallFunc_Get_Audio_Device_With_Id_DatatableName, bool CallFunc_Get_Audio_Device_With_Id_Success, int32 CallFunc_Array_Find_ReturnValue);
	void Set_Background_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Set_And_Save_Audio_Settings(int32 SelectedAudioDevice, float EffectVolume, float DialogueVolume, float MusicVolume, float MasterVolume, const struct FAudioDeviceInfo& CallFunc_Get_Selected_Audio_Device_AudioDevice, class FName CallFunc_Get_Selected_Audio_Device_DatatableName, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetValueWithinMinMax_ReturnValue, float CallFunc_GetValueWithinMinMax_ReturnValue_1, float CallFunc_GetValueWithinMinMax_ReturnValue_2, float CallFunc_GetValueWithinMinMax_ReturnValue_3);
	void Reset_To_Defaults();
	void Select_Audio_Device(const TArray<float>& AudioDevicesModifier, TArray<float>& K2Node_MakeArray_Array, const struct FAudioDeviceInfo& CallFunc_Get_Selected_Audio_Device_AudioDevice, class FName CallFunc_Get_Selected_Audio_Device_DatatableName, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter);
	void PlayUIMoveSound();
	void Right();
	void Left();
	void Accept();
	void Back_Button();
	void SetDefault();
	void PreConstruct(bool IsDesignTime);
	void Up();
	void Down();
	void Construct();
	void SelectNewEntry(int32 EntryIndex, bool PostSoundEvent);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void LeftRelesed();
	void RightReleased();
	void ExecuteUbergraph_wid_MainMenu_Audio(int32 EntryPoint, bool K2Node_Event_IsDesignTime, int32 K2Node_Event_EntryIndex, bool K2Node_Event_PostSoundEvent, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
	void ExitDelegate__DelegateSignature();
	void NewDeletage__DelegateSignature();
	void ContinueDelegate__DelegateSignature();
};

}


