#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass AddResourceComboRow.AddResourceComboRow_C
class UAddResourceComboRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                RowIcon;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RowText;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  RowName;                                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAddResourceComboRow_C* GetDefaultObj();

	bool LessThan(class UObject* Other, class UAddResourceComboRow_C* K2Node_DynamicCast_AsAdd_Resource_Combo_Row, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Text_ReturnValue);
	void Construct();
	void ExecuteUbergraph_AddResourceComboRow(int32 EntryPoint, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FItemTemplateRowHandle& CallFunc_MakeItemTemplate_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, bool K2Node_SwitchEnum_CmpSuccess);
};

}


