#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass CharacterFlagRow.CharacterFlagRow_C
class UCharacterFlagRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  NameText;                                          // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCharacterFlagsRowHandle              Flag;                                              // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCharacterFlagRow_C* GetDefaultObj();

	void SetCharacterFlagRow(const struct FCharacterFlagsRowHandle& ProspectRowHandle);
	void ExecuteUbergraph_CharacterFlagRow(int32 EntryPoint, const struct FCharacterFlagsRowHandle& K2Node_CustomEvent_ProspectRowHandle, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


