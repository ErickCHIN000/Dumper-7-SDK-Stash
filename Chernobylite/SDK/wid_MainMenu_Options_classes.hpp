#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x308 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Options.wid_MainMenu_Options_C
class UWid_MainMenu_Options_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_SubMenu_List_C*          Entries;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Logo;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ContinueDelegate;                                  // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NewDeletage;                                       // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ExitDelegate;                                      // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAudioComponent*                       MenuTheme;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUnlocked;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_MainMenu_Audio_C*                 AudioMenu;                                         // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Options_C*               OptionsMenu;                                       // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_GameOptions_C*           GameOptionsMenu;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Video_Options_C*         VideoOptionsMenu;                                  // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Options_C*      ControlsOptionsMenu;                               // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasMouseClick;                                     // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_11FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_UserInterface_C*         UserInterfaceMenu;                                 // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Options_C* GetDefaultObj();

	void CloseOptions();
	void PlayUIMoveSound();
	void UpdateList();
	void Down();
	void Construct();
	void AcceptOpt();
	void Up();
	void SetAudioSettings();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CustomEvent_0(int32 NewParam);
	void PreConstruct(bool IsDesignTime);
	void Click_anim_finished();
	void Back();
	void ExecuteUbergraph_wid_MainMenu_Options(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UWid_MainMenu_Video_Options_C* CallFunc_Create_ReturnValue, class UWid_MainMenu_Controls_Options_C* CallFunc_Create_ReturnValue_1, class UWid_MainMenu_Audio_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWid_MainMenu_UserInterface_C* CallFunc_Create_ReturnValue_3, class UWid_MainMenu_ControlSettings_C* CallFunc_Create_ReturnValue_4, class UWid_MainMenu_VideoSettingsConsole_C* CallFunc_Create_ReturnValue_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, float CallFunc_GetAudioSettings_MasterVolumeVal, float CallFunc_GetAudioSettings_MusicVolumeVal, float CallFunc_GetAudioSettings_DialoguesVolumeVal, float CallFunc_GetAudioSettings_EffectsVolumeVal, int32 CallFunc_GetAudioSettings_AudioDeviceIdVal, bool Temp_bool_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin, int32 K2Node_CustomEvent_NewParam, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetSelectedEntryIndex_CurrentlySelected, bool K2Node_SwitchInteger_CmpSuccess, TScriptInterface<class ISelectableEntryOwnerInterface_C> CallFunc_SelectNewEntry_self_CastInput, int32 CallFunc_GetMainMenuZOrder_ZOrder, int32 CallFunc_GetMainMenuZOrder_ZOrder_1, int32 CallFunc_GetMainMenuZOrder_ZOrder_2, int32 CallFunc_GetMainMenuZOrder_ZOrder_3, int32 CallFunc_GetMainMenuZOrder_ZOrder_4, bool CallFunc_Get_Is_Console_Platform_IsConsole, class UWid_MainMenu_GameOptions_C* CallFunc_Create_ReturnValue_6, int32 CallFunc_GetMainMenuZOrder_ZOrder_5, bool CallFunc_Get_Is_Console_Platform_IsConsole_1, int32 CallFunc_GetMainMenuZOrder_ZOrder_6);
	void ExitDelegate__DelegateSignature();
	void NewDeletage__DelegateSignature();
	void ContinueDelegate__DelegateSignature();
};

}


