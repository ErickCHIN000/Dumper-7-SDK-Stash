#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x61 (0x2C1 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_TitleLogo.wid_MainMenu_TitleLogo_C
class UWid_MainMenu_TitleLogo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                PlayingSurface;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        PressKeyText;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  PCPressText;                                       // 0x280(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ConsolePressText;                                  // 0x298(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            Finished;                                          // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         AllowInput;                                        // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_MainMenu_TitleLogo_C* GetDefaultObj();

	void Construct();
	void Start();
	void UpdateText();
	void InputDeviceChanged(bool NewInputIsGamepad);
	void Finish();
	void ActivateInput();
	void ExecuteUbergraph_wid_MainMenu_TitleLogo(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_OpenSource_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, class FText K2Node_Select_Default, class FText CallFunc_KeyToIcon_OutText, bool K2Node_CustomEvent_NewInputIsGamepad, class FText CallFunc_FormatText_Output, bool Temp_bool_IsClosed_Variable, float CallFunc_GetWorldDeltaSeconds_ReturnValue);
	void Finished__DelegateSignature();
};

}


