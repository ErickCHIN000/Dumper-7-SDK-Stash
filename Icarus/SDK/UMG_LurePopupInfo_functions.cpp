#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_LurePopupInfo.UMG_LurePopupInfo_C
// (None)

class UClass* UUMG_LurePopupInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_LurePopupInfo_C");

	return Clss;
}


// UMG_LurePopupInfo_C UMG_LurePopupInfo.Default__UMG_LurePopupInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_LurePopupInfo_C* UUMG_LurePopupInfo_C::GetDefaultObj()
{
	static class UUMG_LurePopupInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_LurePopupInfo_C*>(UUMG_LurePopupInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_LurePopupInfo.UMG_LurePopupInfo_C.Update
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue                                 (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetAttachmentSlot_Inventory                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAttachmentSlot_Slot                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetAttachmentSlot_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_LurePopupInfo_C::Update(struct FItemData& Item, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, class UInventory* CallFunc_GetAttachmentSlot_Inventory, int32 CallFunc_GetAttachmentSlot_Slot, enum class EDataValid CallFunc_GetAttachmentSlot_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LurePopupInfo_C", "Update");

	Params::UUMG_LurePopupInfo_C_Update_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetItemTags_ReturnValue = CallFunc_GetItemTags_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GetAttachmentSlot_Inventory = CallFunc_GetAttachmentSlot_Inventory;
	Parms.CallFunc_GetAttachmentSlot_Slot = CallFunc_GetAttachmentSlot_Slot;
	Parms.CallFunc_GetAttachmentSlot_Paths = CallFunc_GetAttachmentSlot_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LurePopupInfo.UMG_LurePopupInfo_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_LurePopupInfo_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LurePopupInfo_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_LurePopupInfo.UMG_LurePopupInfo_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LurePopupInfo_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LurePopupInfo_C", "BP_OnItemExpansionChanged");

	Params::UUMG_LurePopupInfo_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LurePopupInfo.UMG_LurePopupInfo_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LurePopupInfo_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LurePopupInfo_C", "BP_OnItemSelectionChanged");

	Params::UUMG_LurePopupInfo_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LurePopupInfo.UMG_LurePopupInfo_C.ExecuteUbergraph_UMG_LurePopupInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LurePopupInfo_C::ExecuteUbergraph_UMG_LurePopupInfo(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LurePopupInfo_C", "ExecuteUbergraph_UMG_LurePopupInfo");

	Params::UUMG_LurePopupInfo_C_ExecuteUbergraph_UMG_LurePopupInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}

}


