#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x378 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Gamma.wid_MainMenu_Gamma_C
class UWid_MainMenu_Gamma_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons2_C*              Buttons;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons4_C*              ButtonsFromMain;                                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Logo;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_91;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Gamma_Slider_C*          Wid_MainMenu_Gamma_Slider;                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ContinueDelegate;                                  // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NewDeletage;                                       // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ExitDelegate;                                      // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAudioComponent*                       MenuTheme;                                         // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUnlocked;                                        // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          Values;                                            // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        AAVal;                                             // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TexVal;                                            // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShaVal;                                            // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EFFVal;                                            // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        POSVal;                                            // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DDVal;                                             // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VSyncVal;                                          // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FLVal;                                             // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             RESVal;                                            // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EWindowMode                       WM_Val;                                            // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FIntPoint>                     AvailableRes;                                      // 0x328(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                AvailableFL;                                       // 0x338(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        SelectedIndex;                                     // 0x348(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MenuSelected;                                      // 0x34C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_317[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedIndexMenu;                                 // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnToMain;                                      // 0x354(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_31E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_Video_Options_C*         VideoOptionsMenu;                                  // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_MainMenu_02_C*                    MainMenu;                                          // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsConsoleMenu;                                     // 0x368(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_329[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_VideoSettingsConsole_C*  VideoSettingsReference;                            // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Gamma_C* GetDefaultObj();

	void ResetToDefaults();
	void CloseGammaOption();
	void PlayUIMoveSound();
	void Construct();
	void BackBtn();
	void SelectMenu(class UWid_menu_button_C* Option);
	void ResetBtn();
	void SetDefault();
	void PreConstruct(bool IsDesignTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateMainMenuButtons();
	void EnterInput();
	void SliderValueChanged(float NewValueMinMax, float NewValueMinMaxOffset, float ZeroOneValue);
	void InputLeft();
	void InputRight();
	void InputLeftReleased();
	void InputRightReleased();
	void ExecuteUbergraph_wid_MainMenu_Gamma(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UWid_menu_button_C* K2Node_CustomEvent_Option, enum class ESlateVisibility K2Node_Select_Default, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, float CallFunc_GetGammaValue_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_NewValueMinMax, float K2Node_CustomEvent_NewValueMinMaxOffset, float K2Node_CustomEvent_ZeroOneValue);
	void ExitDelegate__DelegateSignature();
	void NewDeletage__DelegateSignature();
	void ContinueDelegate__DelegateSignature();
};

}


