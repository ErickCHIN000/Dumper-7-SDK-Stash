#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x330 - 0x308)
// WidgetBlueprintGeneratedClass SocialMediaWidget.SocialMediaWidget_C
class USocialMediaWidget_C : public UGGUserWidget
{
public:
	class USocialMediaButton_C*                  Button_Discord;                                    // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialMediaButton_C*                  Button_Facebook;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialMediaButton_C*                  Button_TikTok;                                     // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialMediaButton_C*                  Button_Twitter;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialMediaButton_C*                  Button_Web;                                        // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USocialMediaWidget_C* GetDefaultObj();

	class UWidget* GetInitialWidgetFocus(class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue);
};

}


