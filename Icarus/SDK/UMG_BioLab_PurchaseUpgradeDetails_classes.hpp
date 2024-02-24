#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_PurchaseUpgradeDetails.UMG_BioLab_PurchaseUpgradeDetails_C
class UUMG_BioLab_PurchaseUpgradeDetails_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_AlterationDescription_C*          AlterationDetails;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        CostHBox;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            NameText;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UpgradeIcon;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLivingItemUpgradesRowHandle          UpgradeToShow;                                     // 0x288(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_BioLab_PurchaseUpgradeDetails_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UMG_BioLab_PurchaseUpgradeDetails(int32 EntryPoint, const struct FLivingItemUpgradeData& CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades, enum class EValid CallFunc_GetLivingItemUpgradesStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_WorkshopCost_C* CallFunc_Create_ReturnValue, const struct FWorkshopCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FAlterationsEnum& CallFunc_RowHandleToStruct_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


