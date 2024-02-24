#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass ProspectForecastRow.ProspectForecastRow_C
class UProspectForecastRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ProspectForecastName;                              // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FProspectForecastEnum                 ProspectForecast;                                  // 0x288(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UProspectForecastRow_C* GetDefaultObj();

	void SetProspectForecast(const struct FProspectForecastEnum& NewProspectForecast);
	void ExecuteUbergraph_ProspectForecastRow(int32 EntryPoint, const struct FProspectForecastEnum& K2Node_CustomEvent_NewProspectForecast, class FName CallFunc_BreakProspectForecastEnum_Name, int32 CallFunc_BreakProspectForecastEnum_Index, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


