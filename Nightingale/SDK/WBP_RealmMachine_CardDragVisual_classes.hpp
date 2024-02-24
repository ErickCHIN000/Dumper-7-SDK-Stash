#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x308 (0x650 - 0x348)
// WidgetBlueprintGeneratedClass WBP_RealmMachine_CardDragVisual.WBP_RealmMachine_CardDragVisual_C
class UWBP_RealmMachine_CardDragVisual_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_CardContainer;                              // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        Pad_51A6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CardData;                                          // 0x360(0x2F0)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_RealmMachine_CardDragVisual_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_RealmMachine_CardDragVisual(int32 EntryPoint, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_RealmCard_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


