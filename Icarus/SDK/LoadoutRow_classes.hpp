#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x288 - 0x260)
// WidgetBlueprintGeneratedClass LoadoutRow.LoadoutRow_C
class ULoadoutRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  LoadoutName;                                       // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ULoadoutRow_C* GetDefaultObj();

	void AddLoadout(class FName Loadout);
	void ExecuteUbergraph_LoadoutRow(int32 EntryPoint, class FName K2Node_CustomEvent_Loadout, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


