#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass StatRow.StatRow_C
class UStatRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            NameText;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FStatsEnum                            Stat;                                              // 0x270(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatRow_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_StatRow(int32 EntryPoint, class FName CallFunc_BreakStatsEnum_Name, int32 CallFunc_BreakStatsEnum_Index, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


