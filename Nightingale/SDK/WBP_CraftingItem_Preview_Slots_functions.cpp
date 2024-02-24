#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CraftingItem_Preview_Slots.WBP_CraftingItem_Preview_Slots_C
// (None)

class UClass* UWBP_CraftingItem_Preview_Slots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CraftingItem_Preview_Slots_C");

	return Clss;
}


// WBP_CraftingItem_Preview_Slots_C WBP_CraftingItem_Preview_Slots.Default__WBP_CraftingItem_Preview_Slots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CraftingItem_Preview_Slots_C* UWBP_CraftingItem_Preview_Slots_C::GetDefaultObj()
{
	static class UWBP_CraftingItem_Preview_Slots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CraftingItem_Preview_Slots_C*>(UWBP_CraftingItem_Preview_Slots_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CraftingItem_Preview_Slots.WBP_CraftingItem_Preview_Slots_C.UpdateSlotDetails
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     Ingredients                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNWXMenuDataEntry*           EntryToUpgrade                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_CraftingItem_SlotPanel_C*K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CraftingItem_Preview_Slots_C::UpdateSlotDetails(TArray<struct FInventoryEntry>& Ingredients, class UNWXMenuDataEntry* EntryToUpgrade, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_CraftingItem_SlotPanel_C* K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CraftingItem_Preview_Slots_C", "UpdateSlotDetails");

	Params::UWBP_CraftingItem_Preview_Slots_C_UpdateSlotDetails_Params Parms{};

	Parms.Ingredients = Ingredients;
	Parms.EntryToUpgrade = EntryToUpgrade;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel = K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


