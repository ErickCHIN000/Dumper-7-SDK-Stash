#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2D8 - 0x2C0)
// WidgetBlueprintGeneratedClass WB_PB_Linear_Target.WB_PB_Linear_Target_C
class UWB_PB_Linear_Target_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UProgressBar*                          PB_Base;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_PB_Raw_C*                          WB_PB_Raw;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_PB_Linear_Target_C* GetDefaultObj();

	void GetPercent(double* Percent, double K2Node_FunctionResult_Percent_ImplicitCast);
	void SetFillColor(const struct FLinearColor& InColor);
	void SetBarFillType(enum class EProgressBarFillType BarFillType, bool bUseShader);
	void SetPercent(double InPercent);
	void SetDefaultValues();
	void ExecuteUbergraph_WB_PB_Linear_Target(int32 EntryPoint, const struct FLinearColor& K2Node_CustomEvent_InColor, enum class EProgressBarFillType K2Node_CustomEvent_BarFillType, bool K2Node_CustomEvent_bUseShader, double K2Node_CustomEvent_InPercent);
};

}


