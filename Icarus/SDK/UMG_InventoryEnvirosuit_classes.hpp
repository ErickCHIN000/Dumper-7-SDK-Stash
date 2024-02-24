#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass UMG_InventoryEnvirosuit.UMG_InventoryEnvirosuit_C
class UUMG_InventoryEnvirosuit_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_InventoryItemSlow_C*              ItemSlot;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_InventoryEnvirosuit_C* GetDefaultObj();

	void UpdateLockState();
	void ExecuteUbergraph_UMG_InventoryEnvirosuit(int32 EntryPoint, bool CallFunc_IsFeatureLevelEnabled_ReturnValue);
};

}


