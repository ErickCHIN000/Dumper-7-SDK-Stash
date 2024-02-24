#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x280 - 0x260)
// WidgetBlueprintGeneratedClass ModifierRow.ModifierRow_C
class UModifierRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                RowIcon;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RowText;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  RowName;                                           // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UModifierRow_C* GetDefaultObj();

	bool LessThan(class UObject* Other, class UModifierRow_C* K2Node_DynamicCast_AsModifier_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue);
	void Construct();
	void ExecuteUbergraph_ModifierRow(int32 EntryPoint, const struct FModifierStatesRowHandle& CallFunc_MakeModifierStates_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStatesStruct_ModifierStates, enum class EValid CallFunc_GetModifierStatesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
};

}


