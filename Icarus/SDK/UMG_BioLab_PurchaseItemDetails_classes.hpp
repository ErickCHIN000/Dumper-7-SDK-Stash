#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2D0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_PurchaseItemDetails.UMG_BioLab_PurchaseItemDetails_C
class UUMG_BioLab_PurchaseItemDetails_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        CostHBox;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ItemIcon;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ItemNameText;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ItemName;                                          // 0x280(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x298(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FWorkshopCost>                 Cost;                                              // 0x2C0(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_BioLab_PurchaseItemDetails_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UMG_BioLab_PurchaseItemDetails(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UUMG_WorkshopCost_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWorkshopCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


