#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass PlayerTrackerComboRow.PlayerTrackerComboRow_C
class UPlayerTrackerComboRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            RowText;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  RowName;                                           // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerTrackerComboRow_C* GetDefaultObj();

	bool LessThan(class UObject* Other, class UPlayerTrackerComboRow_C* K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue);
	void Construct();
	void ExecuteUbergraph_PlayerTrackerComboRow(int32 EntryPoint, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


