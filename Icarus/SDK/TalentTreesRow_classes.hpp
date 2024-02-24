#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass TalentTreesRow.TalentTreesRow_C
class UTalentTreesRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  NameText;                                          // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTalentTreesRowHandle                 TalentTreesRowHandle;                              // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTalentTreesRow_C* GetDefaultObj();

	void SetTalentTreeRow(const struct FTalentTreesRowHandle& TalentTreesRowHandle);
	void ExecuteUbergraph_TalentTreesRow(int32 EntryPoint, const struct FTalentTreesRowHandle& K2Node_CustomEvent_TalentTreesRowHandle, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


