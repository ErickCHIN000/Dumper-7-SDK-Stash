#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass UMG_StatDescriptionBestiary.UMG_StatDescriptionBestiary_C
class UUMG_StatDescriptionBestiary_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Description;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        StatValue;                                         // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         IsSetBonus;                                        // 0x274(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsSetBonusActive;                                  // 0x275(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsActive;                                          // 0x276(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_37D0[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStatsEnum                            Stat;                                              // 0x278(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_StatDescriptionBestiary_C* GetDefaultObj();

	void Initialise(const struct FStatsEnum& Stat, int32 Value, class FText RetrievedDescription, class FText CallFunc_GetStatDescriptionBP_Description, enum class EFunctionOutcome CallFunc_GetStatDescriptionBP_Outcome, bool K2Node_SwitchEnum_CmpSuccess);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void Set_Active_State(bool Active);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_StatDescriptionBestiary(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_CustomEvent_Active, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2);
};

}


