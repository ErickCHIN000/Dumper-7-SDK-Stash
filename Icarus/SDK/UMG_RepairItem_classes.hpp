#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x430 (0x690 - 0x260)
// WidgetBlueprintGeneratedClass UMG_RepairItem.UMG_RepairItem_C
class UUMG_RepairItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                ItemImage;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Percent;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Selectable;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FRepairableItem                       RepairableItem;                                    // 0x280(0x220)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	struct FItemData                             Item;                                              // 0x4A0(0x1F0)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_RepairItem_C* GetDefaultObj();

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_RepairItem(int32 EntryPoint, class UUMG_BasicTooltip_C* CallFunc_Create_ReturnValue, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_Event_IsDesignTime, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


