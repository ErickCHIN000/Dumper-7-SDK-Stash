#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x278 - 0x260)
// WidgetBlueprintGeneratedClass DialogueCFRow.DialogueCFRow_C
class UDialogueCFRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            RowText;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  RowName;                                           // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDialogueCFRow_C* GetDefaultObj();

	bool LessThan(class UObject* Other, class UDialogueCFRow_C* K2Node_DynamicCast_AsDialogue_CFRow, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LexicalLess_Name_ReturnValue);
	void Construct();
	void ExecuteUbergraph_DialogueCFRow(int32 EntryPoint, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


