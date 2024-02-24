#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x430 - 0x410)
// BlueprintGeneratedClass GenericCraftingTool.GenericCraftingTool_C
class AGenericCraftingTool_C : public ASHCraftingTool
{
public:
	class FString                                Namespace;                                         // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DataTableButtonCaption;                            // 0x420(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class AGenericCraftingTool_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection);
};

}


