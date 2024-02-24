#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x281 - 0x260)
// WidgetBlueprintGeneratedClass wid_pda_Map_Desc_ScrollableText.wid_pda_Map_Desc_ScrollableText_C
class UWid_pda_Map_Desc_ScrollableText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            ScrollableContent;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             CurrentSize;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FitIn;                                             // 0x280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_pda_Map_Desc_ScrollableText_C* GetDefaultObj();

	void Update(class FText Text);
	void Scroll(float Delta, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Init(const struct FVector2D& Size, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Less_FloatFloat_ReturnValue);
	void ScrollUp();
	void ScrollDown();
	void ExecuteUbergraph_wid_pda_Map_Desc_ScrollableText(int32 EntryPoint);
};

}


