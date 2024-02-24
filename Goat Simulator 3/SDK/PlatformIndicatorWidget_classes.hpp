#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass PlatformIndicatorWidget.PlatformIndicatorWidget_C
class UPlatformIndicatorWidget_C : public UUserWidget
{
public:
	class UImage*                                Image_Crossplay_Epic;                              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Crossplay_Steam;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_CrossplayIcon;                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlatformIndicatorWidget_C* GetDefaultObj();

	void UpdatePlatformIndicator(enum class EFriendPlatform Platform, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EPlatformFlagsBP CallFunc_GetPlatformForUI_ReturnValue, bool CallFunc_IsEpicAccountLinked_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


