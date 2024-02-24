#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x320 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Controls_Controller.wid_MainMenu_Controls_Controller_C
class UWid_MainMenu_Controls_Controller_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* Circle;                                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* Cross;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* DPadDown;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* DPadLeft;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* DPadRight;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* DPadUp;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Buttons_Entry_C*         EscapeButton;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* L1;                                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* L2;                                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Label;                                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Layout;                                            // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* LefttStick;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* R1;                                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* R2;                                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* RightStick;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* Share;                                             // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* Square;                                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_Controller_Entry_C* Triangle;                                          // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MainMenu_02_C*                    MainMenuReference;                                 // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_MainMenu_Controls_ControllerSettings_C* ControllerSettingsMenuReference;                   // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsFromControlSettings;                             // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1D0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_MainMenu_ControlSettings_C*       ControlSettingsMenuReference;                      // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Controls_Controller_C* GetDefaultObj();

	void UpdateLayout(bool IsPS4, bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default);
	void UpdateControllerType(bool CallFunc_IsPS4GamepadConnected_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
	void Back();
	void PreConstruct(bool IsDesignTime);
	void InputBack();
	void ExecuteUbergraph_wid_MainMenu_Controls_Controller(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_FormatText_Output, enum class ESlateVisibility K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


