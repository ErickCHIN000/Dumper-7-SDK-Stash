#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x350 - 0x340)
// WidgetBlueprintGeneratedClass WBP_WidgetSkin_Base_Button.WBP_WidgetSkin_Base_Button_C
class UWBP_WidgetSkin_Base_Button_C : public UNWXUserWidget
{
public:
	struct FMargin                               MarginPadding_Text;                                // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_WidgetSkin_Base_Button_C* GetDefaultObj();

	void RetrieveButtonStyle(struct FS_WidgetStyle_Button* ButtonStyleStruct);
};

}


