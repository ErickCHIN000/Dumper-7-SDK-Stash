#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass BestiaryGroupRow.BestiaryGroupRow_C
class UBestiaryGroupRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  BestiaryName;                                      // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBestiaryDataRowHandle                Bestiary;                                          // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBestiaryGroupRow_C* GetDefaultObj();

	void SetBestiary(const struct FBestiaryDataRowHandle& NewBestiary);
	void SetAsAll();
	void ExecuteUbergraph_BestiaryGroupRow(int32 EntryPoint, const struct FBestiaryData& CallFunc_GetBestiaryDataStruct_BestiaryData, enum class EValid CallFunc_GetBestiaryDataStruct_Paths, const struct FBestiaryDataRowHandle& K2Node_CustomEvent_NewBestiary, bool K2Node_SwitchEnum_CmpSuccess);
};

}


