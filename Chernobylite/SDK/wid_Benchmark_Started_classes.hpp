#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass wid_Benchmark_Started.wid_Benchmark_Started_C
class UWid_Benchmark_Started_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            FPSCounter;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class Abp_Benchmark_C*                       BActor;                                            // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CurrentColor;                                      // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Benchmark_Started_C* GetDefaultObj();

	void Start();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetBenchmarkActor(class Abp_Benchmark_C* BActor);
	void ExecuteUbergraph_wid_Benchmark_Started(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class Abp_Benchmark_C* K2Node_Event_BActor, float CallFunc_GetSmoothedAvarageFPS_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
};

}


