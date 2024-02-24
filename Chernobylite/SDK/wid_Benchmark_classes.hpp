#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass wid_Benchmark.wid_Benchmark_C
class UWid_Benchmark_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_MainMenu_Buttons_Entry_C*         EscapeButton;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainCanvas;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                           CurrentState;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_Benchmark_C*                       BenchmarkActor;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Benchmark_C* GetDefaultObj();

	class UClass* GetCurrentState(class UClass* CallFunc_GetObjectClass_ReturnValue);
	void SetState(class UClass* NewState);
	void Construct();
	void ExecuteUbergraph_wid_Benchmark(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class UClass* K2Node_CustomEvent_NewState, class UUserWidget* CallFunc_Create_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IWid_Benchmark_State_C> K2Node_DynamicCast_AsWid_Benchmark_State, bool K2Node_DynamicCast_bSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IWid_Benchmark_State_C> K2Node_DynamicCast_AsWid_Benchmark_State_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


