#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x278 - 0x270)
// WidgetBlueprintGeneratedClass UMG_OnProspectNotification_ItemsReturned.UMG_OnProspectNotification_ItemsReturned_C
class UUMG_OnProspectNotification_ItemsReturned_C : public UUMG_OnProspectNotificationBase_C
{
public:
	class UVerticalBox*                          ItemBox;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_OnProspectNotification_ItemsReturned_C* GetDefaultObj();

	void SetItems(TArray<struct FItemData>& Items, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FItemData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_ReturnedItemEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
};

}


