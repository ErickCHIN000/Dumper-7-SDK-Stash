#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass WB_PB_Linear_Target.WB_PB_Linear_Target_C
class UWB_PB_Linear_Target_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UProgressBar*                          PB_Base;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PB_Raw_C*                          WB_PB_Raw;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_PB_Linear_Target_C* GetDefaultObj();

	void GetPercent(float* Percent);
	void SetFillColor(const struct FLinearColor& InColor);
	void SetBarFillType(enum class EProgressBarFillType BarFillType);
	void SetPercent(float InPercent);
	void SetDefaultValues();
	void ExecuteUbergraph_WB_PB_Linear_Target(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_InColor, enum class EProgressBarFillType K2Node_CustomEvent_BarFillType, float K2Node_CustomEvent_InPercent);
};

}


