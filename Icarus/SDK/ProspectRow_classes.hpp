#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass ProspectRow.ProspectRow_C
class UProspectRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  NameText;                                          // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAISetupRowHandle                     AISetup;                                           // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                Prospect;                                          // 0x2A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UProspectRow_C* GetDefaultObj();

	void SetProspectRow(const struct FProspectListRowHandle& ProspectRowHandle);
	void ExecuteUbergraph_ProspectRow(int32 EntryPoint, const struct FProspectListRowHandle& K2Node_CustomEvent_ProspectRowHandle, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess);
};

}


