#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x2F9 - 0x2F0)
// WidgetBlueprintGeneratedClass BPWidget_BooleanListItem.BPWidget_BooleanListItem_C
class UBPWidget_BooleanListItem_C : public UGbxListItemBoolean
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(Transient, DuplicateTransient)
	bool                                         Selected;                                          // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBPWidget_BooleanListItem_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_BPWidget_BooleanListItem(int32 EntryPoint);
};

}


