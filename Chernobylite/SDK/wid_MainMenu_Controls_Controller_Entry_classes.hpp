#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Controls_Controller_Entry.wid_MainMenu_Controls_Controller_Entry_C
class UWid_MainMenu_Controls_Controller_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                LeftIcon;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightIcon;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextLabel;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         LeftSideIcon;                                      // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_17B7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PS4Text;                                           // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class Enum_Buttons_PS4                  PS4ButtonType;                                     // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   XBoxButtonType;                                    // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UsePS4Buttons;                                     // 0x2A2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_17C3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  XBoxText;                                          // 0x2A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Controls_Controller_Entry_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void Update();
	void UpdateIcon(bool UsePS4);
	void ExecuteUbergraph_wid_MainMenu_Controls_Controller_Entry(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UImage* K2Node_Select_Default_2, TSoftObjectPtr<class UTexture2D> CallFunc_Get_PS4Button_Icon_Icon, TSoftObjectPtr<class UTexture2D> CallFunc_GetXboxButtonIcon_Icon, bool K2Node_CustomEvent_UsePS4, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_3, class FText K2Node_Select_Default_4, class FText CallFunc_FormatText_Output);
};

}


