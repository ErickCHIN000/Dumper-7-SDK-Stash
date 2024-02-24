#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass AfflictionRow.AfflictionRow_C
class UAfflictionRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            RowText;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  RowName;                                           // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DisplayName;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                RowNameStr;                                        // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAfflictionRow_C* GetDefaultObj();

	bool LessThan(class UObject* Other, class UAfflictionRow_C* K2Node_DynamicCast_AsAffliction_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue);
	void Set_Row(class FName RowName);
	void ExecuteUbergraph_AfflictionRow(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, class FName K2Node_CustomEvent_RowName, const struct FAfflictionChanceRowHandle& CallFunc_MakeAfflictionChance_ReturnValue, int32 CallFunc_ReplaceInline_ReturnValue, const struct FAfflictionChance& CallFunc_GetAfflictionChanceStruct_AfflictionChance, enum class EValid CallFunc_GetAfflictionChanceStruct_Paths, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


