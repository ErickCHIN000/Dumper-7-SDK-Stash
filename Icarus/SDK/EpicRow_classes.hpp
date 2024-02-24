#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass EpicRow.EpicRow_C
class UEpicRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  SetupName;                                         // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEpicCreaturesRowHandle               EpicName;                                          // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEpicRow_C* GetDefaultObj();

	void AddAI(class FText RowName);
	void ExecuteUbergraph_EpicRow(int32 EntryPoint, class FText K2Node_CustomEvent_RowName, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FEpicCreaturesRowHandle& CallFunc_MakeEpicCreatures_ReturnValue);
};

}


