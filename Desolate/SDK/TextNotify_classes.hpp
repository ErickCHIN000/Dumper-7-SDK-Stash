#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x299 - 0x285)
// WidgetBlueprintGeneratedClass TextNotify.TextNotify_C
class UTextNotify_C : public UBaseAutoHideWidget_C
{
public:
	uint8                                        Pad_1B55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Text;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Flag;                                              // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UTextNotify_C* GetDefaultObj();

	void SetText(class FText DecalText, bool CanShow);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ShowNotify(class FText Text);
	void OnHidden();
	void ExecuteUbergraph_TextNotify(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class FText K2Node_CustomEvent_Text);
};

}


