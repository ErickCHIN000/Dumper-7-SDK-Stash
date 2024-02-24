#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x2DC - 0x2C0)
// WidgetBlueprintGeneratedClass BP_InspectorCanvas.BP_InspectorCanvas_C
class UBP_InspectorCanvas_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          MainCanvas;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanelSlot*                      CurrentActive;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Canvas;                                            // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InspectorCanvas_C* GetDefaultObj();

	void AddNewItem(class UWidget* Content);
	void SetActiveWindow(class UCanvasPanelSlot* CanvasSlot);
	void ExecuteUbergraph_BP_InspectorCanvas(int32 EntryPoint, class UWidget* K2Node_CustomEvent_Content, class UCanvasPanelSlot* K2Node_CustomEvent_CanvasSlot, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


