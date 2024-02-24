#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass FLODTileRow.FLODTileRow_C
class UFLODTileRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_56;                                      // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  FLODTileName;                                      // 0x270(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFLODTile*                             FLODTile;                                          // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFLODTileRow_C* GetDefaultObj();

	void SetFLODTile(class AFLODTile* FLODTile);
	void ExecuteUbergraph_FLODTileRow(int32 EntryPoint, class AFLODTile* K2Node_CustomEvent_FLODTile, class FText CallFunc_Conv_NameToText_ReturnValue);
};

}


