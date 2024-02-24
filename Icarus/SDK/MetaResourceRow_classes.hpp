#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x2AC - 0x260)
// WidgetBlueprintGeneratedClass MetaResourceRow.MetaResourceRow_C
class UMetaResourceRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_56;                                      // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ResourceName;                                      // 0x278(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EIcarusResourceType               ResourceType;                                      // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C1D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMetaCurrencyRowHandle                Currency_Row;                                      // 0x294(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMetaResourceRow_C* GetDefaultObj();

	void SetMetaResource(const struct FMetaCurrencyRowHandle& CurrencyRow);
	void ExecuteUbergraph_MetaResourceRow(int32 EntryPoint, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FMetaCurrencyRowHandle& K2Node_CustomEvent_CurrencyRow);
};

}


