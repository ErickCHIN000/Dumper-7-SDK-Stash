#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// WidgetBlueprintGeneratedClass UI_RadialMenu.UI_RadialMenu_C
class UUI_RadialMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_RadialMenu_C*                     UMG_RadialMenu;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_RadialMenu_C* GetDefaultObj();

	void GetSelectedOption(int32* OutIndex, bool* Valid, int32 CallFunc_GetCurrentIndex_Index, bool CallFunc_GetCurrentIndex_Valid);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void AddRadialMenuItem(class UTexture2D* IconImage, const struct FFBasicIconSettings& Settings);
	void ExecuteUbergraph_UI_RadialMenu(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UTexture2D* K2Node_CustomEvent_IconImage, const struct FFBasicIconSettings& K2Node_CustomEvent_Settings, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_RadialIcon_C* CallFunc_Create_ReturnValue, bool CallFunc_AddChildToRadialMenu_Success);
};

}


