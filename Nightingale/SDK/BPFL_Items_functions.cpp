#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Items.BPFL_Items_C
// (None)

class UClass* UBPFL_Items_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Items_C");

	return Clss;
}


// BPFL_Items_C BPFL_Items.Default__BPFL_Items_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Items_C* UBPFL_Items_C::GetDefaultObj()
{
	static class UBPFL_Items_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Items_C*>(UBPFL_Items_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Items.BPFL_Items_C.GetLoadoutSlotType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        SlotType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGameplayTag, enum class ELoadoutSlotType>TagMap                                                           (Edit, BlueprintVisible)
// TMap<struct FGameplayTag, enum class ELoadoutSlotType>K2Node_MakeVariable_MakeVariableOutput                           (None)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Equippable        CallFunc_TryGetItemDataEquippable_OutData                        (None)
// enum class EGetResult              CallFunc_TryGetItemDataEquippable_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetLoadoutSlotType(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, enum class ELoadoutSlotType* SlotType, TMap<struct FGameplayTag, enum class ELoadoutSlotType> TagMap, TMap<struct FGameplayTag, enum class ELoadoutSlotType> K2Node_MakeVariable_MakeVariableOutput, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Equippable& CallFunc_TryGetItemDataEquippable_OutData, enum class EGetResult CallFunc_TryGetItemDataEquippable_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ELoadoutSlotType CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetLoadoutSlotType");

	Params::UBPFL_Items_C_GetLoadoutSlotType_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.TagMap = TagMap;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataEquippable_OutData = CallFunc_TryGetItemDataEquippable_OutData;
	Parms.CallFunc_TryGetItemDataEquippable_Branches = CallFunc_TryGetItemDataEquippable_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotType != nullptr)
		*SlotType = Parms.SlotType;

}


// Function BPFL_Items.BPFL_Items_C.GetToolbarArrangementForSlotTag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                SlotTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EToolbarArrangement     ToolbarArrangement                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EToolbarArrangement     CallFunc_GetToolbarArrangementFromLoadoutSlotTag_ToolbarArrangement(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetToolbarArrangementFromLoadoutSlotTag_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetToolbarArrangementForSlotTag(const struct FGameplayTag& SlotTag, class UObject* __WorldContext, enum class EToolbarArrangement* ToolbarArrangement, enum class EToolbarArrangement CallFunc_GetToolbarArrangementFromLoadoutSlotTag_ToolbarArrangement, bool CallFunc_GetToolbarArrangementFromLoadoutSlotTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetToolbarArrangementForSlotTag");

	Params::UBPFL_Items_C_GetToolbarArrangementForSlotTag_Params Parms{};

	Parms.SlotTag = SlotTag;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetToolbarArrangementFromLoadoutSlotTag_ToolbarArrangement = CallFunc_GetToolbarArrangementFromLoadoutSlotTag_ToolbarArrangement;
	Parms.CallFunc_GetToolbarArrangementFromLoadoutSlotTag_ReturnValue = CallFunc_GetToolbarArrangementFromLoadoutSlotTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ToolbarArrangement != nullptr)
		*ToolbarArrangement = Parms.ToolbarArrangement;

}


// Function BPFL_Items.BPFL_Items_C.GetItemTraitsArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        Traits                                                           (Parm, OutParm)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue                                 (None)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)

void UBPFL_Items_C::GetItemTraitsArray(const struct FItemData& ItemData, class UObject* __WorldContext, bool* Success, TArray<struct FGameplayTag>* Traits, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemTraitsArray");

	Params::UBPFL_Items_C_GetItemTraitsArray_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemTags_ReturnValue = CallFunc_GetItemTags_ReturnValue;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Traits != nullptr)
		*Traits = std::move(Parms.Traits);

}


// Function BPFL_Items.BPFL_Items_C.NWXPrintItems
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            LogLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemHandle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDefaultItemName_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_Items_C::NWXPrintItems(class UObject* Context, enum class ENWXLogLevel LogLevel, const struct FItemDataReference& ItemHandle, const class FString& Message, class UObject* __WorldContext, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const class FString& CallFunc_GetDefaultItemName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "NWXPrintItems");

	Params::UBPFL_Items_C_NWXPrintItems_Params Parms{};

	Parms.Context = Context;
	Parms.LogLevel = LogLevel;
	Parms.ItemHandle = ItemHandle;
	Parms.Message = Message;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_GetDefaultItemName_ReturnValue = CallFunc_GetDefaultItemName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Items.BPFL_Items_C.IsItemEquippableToQuickbar
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsEquippable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemEquipmentSlotTag_bSuccess                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSlotTagEquippableToQuickbar_bIsEquippable             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::IsItemEquippableToQuickbar(const struct FItemDataReference& ItemId, class UObject* __WorldContext, bool* bIsEquippable, bool CallFunc_GetItemEquipmentSlotTag_bSuccess, const struct FGameplayTag& CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag, bool CallFunc_IsSlotTagEquippableToQuickbar_bIsEquippable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "IsItemEquippableToQuickbar");

	Params::UBPFL_Items_C_IsItemEquippableToQuickbar_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemEquipmentSlotTag_bSuccess = CallFunc_GetItemEquipmentSlotTag_bSuccess;
	Parms.CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag = CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag;
	Parms.CallFunc_IsSlotTagEquippableToQuickbar_bIsEquippable = CallFunc_IsSlotTagEquippableToQuickbar_bIsEquippable;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEquippable != nullptr)
		*bIsEquippable = Parms.bIsEquippable;

}


// Function BPFL_Items.BPFL_Items_C.IsSlotTagEquippableToQuickbar
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                SlotTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bIsEquippable                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagTagValidForAnyToolbar_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::IsSlotTagEquippableToQuickbar(const struct FGameplayTag& SlotTag, class UObject* __WorldContext, bool* bIsEquippable, bool CallFunc_IsGameplayTagTagValidForAnyToolbar_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "IsSlotTagEquippableToQuickbar");

	Params::UBPFL_Items_C_IsSlotTagEquippableToQuickbar_Params Parms{};

	Parms.SlotTag = SlotTag;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsGameplayTagTagValidForAnyToolbar_ReturnValue = CallFunc_IsGameplayTagTagValidForAnyToolbar_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsEquippable != nullptr)
		*bIsEquippable = Parms.bIsEquippable;

}


// Function BPFL_Items.BPFL_Items_C.UpdateWaterLevel
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquippableItemBase_C*    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Change                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             NewWater                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFuel_HasFuelData                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInstanceFuelData       CallFunc_GetFuel_Fuel                                            (NoDestructor)
// double                             K2Node_FunctionResult_NewWater_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::UpdateWaterLevel(class ABP_EquippableItemBase_C* Item, double Change, class UObject* __WorldContext, double* NewWater, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFuel_HasFuelData, const struct FItemInstanceFuelData& CallFunc_GetFuel_Fuel, double K2Node_FunctionResult_NewWater_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "UpdateWaterLevel");

	Params::UBPFL_Items_C_UpdateWaterLevel_Params Parms{};

	Parms.Item = Item;
	Parms.Change = Change;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFuel_HasFuelData = CallFunc_GetFuel_HasFuelData;
	Parms.CallFunc_GetFuel_Fuel = CallFunc_GetFuel_Fuel;
	Parms.K2Node_FunctionResult_NewWater_ImplicitCast = K2Node_FunctionResult_NewWater_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (NewWater != nullptr)
		*NewWater = Parms.NewWater;

}


// Function BPFL_Items.BPFL_Items_C.GetWaterData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquippableItemBase_C*    Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Water                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxWater                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         ParentChar                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     InventoryComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       InstanceID                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFuel_HasFuelData                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInstanceFuelData       CallFunc_GetFuel_Fuel                                            (NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_Water_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_MaxWater_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetWaterData(class ABP_EquippableItemBase_C* Item, class UObject* __WorldContext, bool* Success, double* Water, double* MaxWater, class ABP_AnimCharacter_C* ParentChar, class AController* Controller, class UInventoryComponentBase* InventoryComponent, const struct FGuid& InstanceID, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFuel_HasFuelData, const struct FItemInstanceFuelData& CallFunc_GetFuel_Fuel, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double K2Node_FunctionResult_Water_ImplicitCast, double K2Node_FunctionResult_MaxWater_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetWaterData");

	Params::UBPFL_Items_C_GetWaterData_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.ParentChar = ParentChar;
	Parms.Controller = Controller;
	Parms.InventoryComponent = InventoryComponent;
	Parms.InstanceID = InstanceID;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFuel_HasFuelData = CallFunc_GetFuel_HasFuelData;
	Parms.CallFunc_GetFuel_Fuel = CallFunc_GetFuel_Fuel;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_FunctionResult_Water_ImplicitCast = K2Node_FunctionResult_Water_ImplicitCast;
	Parms.K2Node_FunctionResult_MaxWater_ImplicitCast = K2Node_FunctionResult_MaxWater_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Water != nullptr)
		*Water = Parms.Water;

	if (MaxWater != nullptr)
		*MaxWater = Parms.MaxWater;

}


// Function BPFL_Items.BPFL_Items_C.GetEquipmentSlotTypeForTag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_EquipSlotType         SlotType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FGameplayTag, enum class E_EquipSlotType>TagMap                                                           (Edit, BlueprintVisible)
// TMap<struct FGameplayTag, enum class E_EquipSlotType>K2Node_MakeVariable_MakeVariableOutput                           (None)
// enum class E_EquipSlotType         CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetEquipmentSlotTypeForTag(const struct FGameplayTag& Tag, class UObject* __WorldContext, enum class E_EquipSlotType* SlotType, TMap<struct FGameplayTag, enum class E_EquipSlotType> TagMap, TMap<struct FGameplayTag, enum class E_EquipSlotType> K2Node_MakeVariable_MakeVariableOutput, enum class E_EquipSlotType CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetEquipmentSlotTypeForTag");

	Params::UBPFL_Items_C_GetEquipmentSlotTypeForTag_Params Parms{};

	Parms.Tag = Tag;
	Parms.__WorldContext = __WorldContext;
	Parms.TagMap = TagMap;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotType != nullptr)
		*SlotType = Parms.SlotType;

}


// Function BPFL_Items.BPFL_Items_C.GetFloatyTypeFromTagValueContainer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTagValueContainer          TagValueContainer                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_UI_FloatyType         FloatType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Item_Effectiveness_Tag_NewParam                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Find_Value                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Find_Found                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetFloatyTypeFromTagValueContainer(const struct FTagValueContainer& TagValueContainer, class UObject* __WorldContext, enum class E_UI_FloatyType* FloatType, const struct FGameplayTag& CallFunc_Item_Effectiveness_Tag_NewParam, float CallFunc_Find_Value, bool CallFunc_Find_Found, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetFloatyTypeFromTagValueContainer");

	Params::UBPFL_Items_C_GetFloatyTypeFromTagValueContainer_Params Parms{};

	Parms.TagValueContainer = TagValueContainer;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Item_Effectiveness_Tag_NewParam = CallFunc_Item_Effectiveness_Tag_NewParam;
	Parms.CallFunc_Find_Value = CallFunc_Find_Value;
	Parms.CallFunc_Find_Found = CallFunc_Find_Found;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (FloatType != nullptr)
		*FloatType = Parms.FloatType;

}


// Function BPFL_Items.BPFL_Items_C.GetShotDirectionsFromAmmo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ShotOrigin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactDirection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          AmmoItemReference                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      WeaponActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OriginalAimDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpreadAngle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             ShotDirections                                                   (Parm, OutParm)
// double                             RaycastDistance                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             ShotDirectionsLocal                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IRangedWeaponInterface>K2Node_DynamicCast_AsRanged_Weapon_Interface                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRaycastDistance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Ammo              CallFunc_TryGetItemDataAmmo_OutData                              (None)
// enum class EGetResult              CallFunc_TryGetItemDataAmmo_Branches                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVectorInEllipticalConeInDegrees_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_RaycastDistance_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetShotDirectionsFromAmmo(const struct FVector& ShotOrigin, const struct FVector& ImpactDirection, const struct FItemDataReference& AmmoItemReference, class AActor* WeaponActor, const struct FVector& OriginalAimDirection, double SpreadAngle, class UObject* __WorldContext, TArray<struct FVector>* ShotDirections, double RaycastDistance, const TArray<struct FVector>& ShotDirectionsLocal, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float Temp_real_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TScriptInterface<class IRangedWeaponInterface> K2Node_DynamicCast_AsRanged_Weapon_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetRaycastDistance_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Ammo& CallFunc_TryGetItemDataAmmo_OutData, enum class EGetResult CallFunc_TryGetItemDataAmmo_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_RandomUnitVectorInEllipticalConeInDegrees_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, double K2Node_VariableSet_RaycastDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetShotDirectionsFromAmmo");

	Params::UBPFL_Items_C_GetShotDirectionsFromAmmo_Params Parms{};

	Parms.ShotOrigin = ShotOrigin;
	Parms.ImpactDirection = ImpactDirection;
	Parms.AmmoItemReference = AmmoItemReference;
	Parms.WeaponActor = WeaponActor;
	Parms.OriginalAimDirection = OriginalAimDirection;
	Parms.SpreadAngle = SpreadAngle;
	Parms.__WorldContext = __WorldContext;
	Parms.RaycastDistance = RaycastDistance;
	Parms.ShotDirectionsLocal = ShotDirectionsLocal;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsRanged_Weapon_Interface = K2Node_DynamicCast_AsRanged_Weapon_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRaycastDistance_ReturnValue = CallFunc_GetRaycastDistance_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataAmmo_OutData = CallFunc_TryGetItemDataAmmo_OutData;
	Parms.CallFunc_TryGetItemDataAmmo_Branches = CallFunc_TryGetItemDataAmmo_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_RandomUnitVectorInEllipticalConeInDegrees_ReturnValue = CallFunc_RandomUnitVectorInEllipticalConeInDegrees_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_VariableSet_RaycastDistance_ImplicitCast = K2Node_VariableSet_RaycastDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ShotDirections != nullptr)
		*ShotDirections = std::move(Parms.ShotDirections);

}


// Function BPFL_Items.BPFL_Items_C.GetItemOverlayBankSet
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_OverlayBankSet           OverlayBankSet                                                   (Parm, OutParm, HasGetValueTypeHash)
// struct FS_OverlayBankSet           K2Node_MakeStruct_S_OverlayBankSet                               (HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Animation         CallFunc_TryGetItemDataAnimation_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataAnimation_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_OverlayBankSet           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemOverlayBankSet(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, struct FS_OverlayBankSet* OverlayBankSet, const struct FS_OverlayBankSet& K2Node_MakeStruct_S_OverlayBankSet, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Animation& CallFunc_TryGetItemDataAnimation_OutData, enum class EGetResult CallFunc_TryGetItemDataAnimation_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FS_OverlayBankSet& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemOverlayBankSet");

	Params::UBPFL_Items_C_GetItemOverlayBankSet_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_S_OverlayBankSet = K2Node_MakeStruct_S_OverlayBankSet;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataAnimation_OutData = CallFunc_TryGetItemDataAnimation_OutData;
	Parms.CallFunc_TryGetItemDataAnimation_Branches = CallFunc_TryGetItemDataAnimation_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OverlayBankSet != nullptr)
		*OverlayBankSet = std::move(Parms.OverlayBankSet);

}


// Function BPFL_Items.BPFL_Items_C.GetItemTraitsArrayFromEntry
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits                           (None)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)

TArray<struct FGameplayTag> UBPFL_Items_C::GetItemTraitsArrayFromEntry(const struct FInventoryEntry& Item, class UObject* __WorldContext, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemTraitsArrayFromEntry");

	Params::UBPFL_Items_C_GetItemTraitsArrayFromEntry_Params Parms{};

	Parms.Item = Item;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits = CallFunc_GetItemTraitsFromEntry_Traits;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Items.BPFL_Items_C.GetDefaultItemTraitsArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue                                 (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGameplayTagContainer UBPFL_Items_C::GetDefaultItemTraitsArray(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, bool* Success, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetDefaultItemTraitsArray");

	Params::UBPFL_Items_C_GetDefaultItemTraitsArray_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_GetItemTags_ReturnValue = CallFunc_GetItemTags_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	return Parms.ReturnValue;

}


// Function BPFL_Items.BPFL_Items_C.IsItemIdNone
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ItemIdEqual_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_Items_C::IsItemIdNone(const struct FDataTableRowHandle& ItemId, class UObject* __WorldContext, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_ItemIdEqual_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "IsItemIdNone");

	Params::UBPFL_Items_C_IsItemIdNone_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_ItemIdEqual_ReturnValue = CallFunc_ItemIdEqual_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Items.BPFL_Items_C.GetItemIdDebugString
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_BreakSoftObjectPath_PathString                          (ZeroConstructor, HasGetValueTypeHash)

class FString UBPFL_Items_C::GetItemIdDebugString(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_BreakSoftObjectPath_PathString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemIdDebugString");

	Params::UBPFL_Items_C_GetItemIdDebugString_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BreakSoftObjectPath_PathString = CallFunc_BreakSoftObjectPath_PathString;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Items.BPFL_Items_C.ItemIdEqual
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDataTableRowHandle         A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         B                                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBPFL_Items_C::ItemIdEqual(const struct FDataTableRowHandle& A, const struct FDataTableRowHandle& B, class UObject* __WorldContext, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "ItemIdEqual");

	Params::UBPFL_Items_C_ItemIdEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Items.BPFL_Items_C.CreateMultipleItemProxies
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NumberToSpawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             SpawnSpec                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     SourceObject                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXItemProxySpawnerSubsystem*CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::CreateMultipleItemProxies(const struct FTransform& SpawnTransform, int32 NumberToSpawn, const struct FInventoryEntry& SpawnSpec, class UObject* SourceObject, class UObject* __WorldContext, class UNWXItemProxySpawnerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, const struct FVector& Temp_struct_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "CreateMultipleItemProxies");

	Params::UBPFL_Items_C_CreateMultipleItemProxies_Params Parms{};

	Parms.SpawnTransform = SpawnTransform;
	Parms.NumberToSpawn = NumberToSpawn;
	Parms.SpawnSpec = SpawnSpec;
	Parms.SourceObject = SourceObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Items.BPFL_Items_C.GetItemTraitsFromEntry
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Traits                                                           (Parm, OutParm)
// struct FInstanceData_Traits        CallFunc_TryGetItemTraits_Traits                                 (None)
// enum class EGetResult              CallFunc_TryGetItemTraits_Branches                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemTraitsFromEntry(const struct FInventoryEntry& ItemEntry, class UObject* __WorldContext, struct FGameplayTagContainer* Traits, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemTraitsFromEntry");

	Params::UBPFL_Items_C_GetItemTraitsFromEntry_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemTraits_Traits = CallFunc_TryGetItemTraits_Traits;
	Parms.CallFunc_TryGetItemTraits_Branches = CallFunc_TryGetItemTraits_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Traits != nullptr)
		*Traits = std::move(Parms.Traits);

}


// Function BPFL_Items.BPFL_Items_C.GetItemQualityFromEntry
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          ItemHandle                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInstanceData_Quality       CallFunc_TryGetItemQuality_Quality                               (NoDestructor)
// enum class EGetResult              CallFunc_TryGetItemQuality_Branches                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EItemQuality UBPFL_Items_C::GetItemQualityFromEntry(const struct FInventoryEntry& ItemEntry, class UObject* __WorldContext, const struct FItemDataReference& ItemHandle, const struct FInstanceData_Quality& CallFunc_TryGetItemQuality_Quality, enum class EGetResult CallFunc_TryGetItemQuality_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemQualityFromEntry");

	Params::UBPFL_Items_C_GetItemQualityFromEntry_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.__WorldContext = __WorldContext;
	Parms.ItemHandle = ItemHandle;
	Parms.CallFunc_TryGetItemQuality_Quality = CallFunc_TryGetItemQuality_Quality;
	Parms.CallFunc_TryGetItemQuality_Branches = CallFunc_TryGetItemQuality_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPFL_Items.BPFL_Items_C.CreateItemProxyFromEntry
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Impulse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LifeTime                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     SourceObject                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsBonus                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXItemProxySpawnerSubsystem*CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::CreateItemProxyFromEntry(const struct FTransform& SpawnTransform, const struct FVector& Impulse, double LifeTime, const struct FInventoryEntry& InventoryEntry, class UObject* SourceObject, bool IsBonus, class UObject* __WorldContext, class UNWXItemProxySpawnerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "CreateItemProxyFromEntry");

	Params::UBPFL_Items_C_CreateItemProxyFromEntry_Params Parms{};

	Parms.SpawnTransform = SpawnTransform;
	Parms.Impulse = Impulse;
	Parms.LifeTime = LifeTime;
	Parms.InventoryEntry = InventoryEntry;
	Parms.SourceObject = SourceObject;
	Parms.IsBonus = IsBonus;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_Items.BPFL_Items_C.GetTechniqueDataFromInstanced
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InstanceID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     InventoryComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Techniques        Out_Struct                                                       (Parm, OutParm)
// bool                               Succeeded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Techniques        CallFunc_TryGetItemDataTechniques_OutData                        (None)
// enum class EGetResult              CallFunc_TryGetItemDataTechniques_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetTechniqueDataFromInstanced(const struct FGuid& InstanceID, class UInventoryComponentBase* InventoryComponent, class UObject* __WorldContext, struct FItemData_Techniques* Out_Struct, bool* Succeeded, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_Techniques& CallFunc_TryGetItemDataTechniques_OutData, enum class EGetResult CallFunc_TryGetItemDataTechniques_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetTechniqueDataFromInstanced");

	Params::UBPFL_Items_C_GetTechniqueDataFromInstanced_Params Parms{};

	Parms.InstanceID = InstanceID;
	Parms.InventoryComponent = InventoryComponent;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_TryGetItemDataTechniques_OutData = CallFunc_TryGetItemDataTechniques_OutData;
	Parms.CallFunc_TryGetItemDataTechniques_Branches = CallFunc_TryGetItemDataTechniques_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Struct != nullptr)
		*Out_Struct = std::move(Parms.Out_Struct);

	if (Succeeded != nullptr)
		*Succeeded = Parms.Succeeded;

}


// Function BPFL_Items.BPFL_Items_C.CreateEquippableItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsSecondaryItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SlotTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ActorClass                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemActorClass_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetItemActorClass_ItemActor                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_Guid_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class ABP_EquippableItemBase_C* UBPFL_Items_C::CreateEquippableItem(const struct FInventoryEntry& ItemEntry, const struct FTransform& SpawnTransform, class AActor* Owner, bool IsSecondaryItem, const struct FGameplayTag& SlotTag, class UObject* __WorldContext, bool* bSuccess, class UClass* ActorClass, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_GetItemActorClass_Success, class UClass* CallFunc_GetItemActorClass_ItemActor, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_EquippableItemBase_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "CreateEquippableItem");

	Params::UBPFL_Items_C_CreateEquippableItem_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.SpawnTransform = SpawnTransform;
	Parms.Owner = Owner;
	Parms.IsSecondaryItem = IsSecondaryItem;
	Parms.SlotTag = SlotTag;
	Parms.__WorldContext = __WorldContext;
	Parms.ActorClass = ActorClass;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetItemActorClass_Success = CallFunc_GetItemActorClass_Success;
	Parms.CallFunc_GetItemActorClass_ItemActor = CallFunc_GetItemActorClass_ItemActor;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_Guid_ReturnValue = CallFunc_IsValid_Guid_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	return Parms.ReturnValue;

}


// Function BPFL_Items.BPFL_Items_C.GetItemEquipmentSlotTag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                EquipmentSlotTag                                                 (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FDynamicTypedStructs        ItemDynamicData                                                  (Edit, BlueprintVisible)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Equippable        CallFunc_TryGetItemDataEquippable_OutData                        (None)
// enum class EGetResult              CallFunc_TryGetItemDataEquippable_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemEquipmentSlotTag(const struct FItemDataReference& ItemId, class UObject* __WorldContext, bool* bSuccess, struct FGameplayTag* EquipmentSlotTag, const struct FDynamicTypedStructs& ItemDynamicData, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_Equippable& CallFunc_TryGetItemDataEquippable_OutData, enum class EGetResult CallFunc_TryGetItemDataEquippable_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemEquipmentSlotTag");

	Params::UBPFL_Items_C_GetItemEquipmentSlotTag_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.ItemDynamicData = ItemDynamicData;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_TryGetItemDataEquippable_OutData = CallFunc_TryGetItemDataEquippable_OutData;
	Parms.CallFunc_TryGetItemDataEquippable_Branches = CallFunc_TryGetItemDataEquippable_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (EquipmentSlotTag != nullptr)
		*EquipmentSlotTag = std::move(Parms.EquipmentSlotTag);

}


// Function BPFL_Items.BPFL_Items_C.GetItemAnimClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AnimClass                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Animation         CallFunc_TryGetItemDataAnimation_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataAnimation_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsAnim_Instance                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemAnimClass(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, class UClass** AnimClass, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_Animation& CallFunc_TryGetItemDataAnimation_OutData, enum class EGetResult CallFunc_TryGetItemDataAnimation_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemAnimClass");

	Params::UBPFL_Items_C_GetItemAnimClass_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_TryGetItemDataAnimation_OutData = CallFunc_TryGetItemDataAnimation_OutData;
	Parms.CallFunc_TryGetItemDataAnimation_Branches = CallFunc_TryGetItemDataAnimation_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsAnim_Instance = K2Node_ClassDynamicCast_AsAnim_Instance;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimClass != nullptr)
		*AnimClass = Parms.AnimClass;

}


// Function BPFL_Items.BPFL_Items_C.GetItemAnimationBanks
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AnimBank_FP                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Animation         CallFunc_TryGetItemDataAnimation_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataAnimation_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsAnim_B_Base_FP                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemAnimationBanks(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, class UClass** AnimBank_FP, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_Animation& CallFunc_TryGetItemDataAnimation_OutData, enum class EGetResult CallFunc_TryGetItemDataAnimation_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UClass* K2Node_ClassDynamicCast_AsAnim_B_Base_FP, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemAnimationBanks");

	Params::UBPFL_Items_C_GetItemAnimationBanks_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_TryGetItemDataAnimation_OutData = CallFunc_TryGetItemDataAnimation_OutData;
	Parms.CallFunc_TryGetItemDataAnimation_Branches = CallFunc_TryGetItemDataAnimation_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_ClassDynamicCast_AsAnim_B_Base_FP = K2Node_ClassDynamicCast_AsAnim_B_Base_FP;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimBank_FP != nullptr)
		*AnimBank_FP = Parms.AnimBank_FP;

}


// Function BPFL_Items.BPFL_Items_C.GetItemAnim
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      AnimClass                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Animation         CallFunc_TryGetItemDataAnimation_OutData                         (None)
// enum class EGetResult              CallFunc_TryGetItemDataAnimation_Branches                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsAnim_Instance                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemAnim(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, class UClass** AnimClass, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_Animation& CallFunc_TryGetItemDataAnimation_OutData, enum class EGetResult CallFunc_TryGetItemDataAnimation_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemAnim");

	Params::UBPFL_Items_C_GetItemAnim_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_TryGetItemDataAnimation_OutData = CallFunc_TryGetItemDataAnimation_OutData;
	Parms.CallFunc_TryGetItemDataAnimation_Branches = CallFunc_TryGetItemDataAnimation_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsAnim_Instance = K2Node_ClassDynamicCast_AsAnim_Instance;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimClass != nullptr)
		*AnimClass = Parms.AnimClass;

}


// Function BPFL_Items.BPFL_Items_C.GetLootSpawnLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     CentrePoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SpawnPosition                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            FirstPersonCamera                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             DistanceToSpawn                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TestPoint                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CameraForwardVector                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CameraLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerCharacter*         K2Node_DynamicCast_AsNWXPlayer_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>CallFunc_GetEquippedItem_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICameraProviderInterface>K2Node_DynamicCast_AsCamera_Provider_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetCamera_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetLootSpawnLocation(const struct FVector& CentrePoint, class AActor* Instigator, class UObject* __WorldContext, struct FVector* SpawnPosition, class UCameraComponent* FirstPersonCamera, double DistanceToSpawn, const struct FVector& TestPoint, const struct FVector& CameraForwardVector, const struct FVector& CameraLocation, class UCameraComponent* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class ILoadoutReadInterface> CallFunc_GetEquippedItem_self_CastInput, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, TScriptInterface<class ICameraProviderInterface> K2Node_DynamicCast_AsCamera_Provider_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& K2Node_MathExpression_ReturnValue, class UCameraComponent* CallFunc_GetCamera_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetLootSpawnLocation");

	Params::UBPFL_Items_C_GetLootSpawnLocation_Params Parms{};

	Parms.CentrePoint = CentrePoint;
	Parms.Instigator = Instigator;
	Parms.__WorldContext = __WorldContext;
	Parms.FirstPersonCamera = FirstPersonCamera;
	Parms.DistanceToSpawn = DistanceToSpawn;
	Parms.TestPoint = TestPoint;
	Parms.CameraForwardVector = CameraForwardVector;
	Parms.CameraLocation = CameraLocation;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Character = K2Node_DynamicCast_AsNWXPlayer_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedItem_self_CastInput = CallFunc_GetEquippedItem_self_CastInput;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Provider_Interface = K2Node_DynamicCast_AsCamera_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.CallFunc_GetCamera_ReturnValue = CallFunc_GetCamera_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnPosition != nullptr)
		*SpawnPosition = std::move(Parms.SpawnPosition);

}


// Function BPFL_Items.BPFL_Items_C.GetItemMeshes
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>Mesh3P                                                           (Parm, OutParm, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>Mesh1P                                                           (Parm, OutParm, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_MeshInfo          CallFunc_TryGetItemDataMeshInfo_OutData                          (None)
// enum class EGetResult              CallFunc_TryGetItemDataMeshInfo_Branches                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemMeshes(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, TSoftObjectPtr<class USkeletalMesh>* Mesh3P, TSoftObjectPtr<class USkeletalMesh>* Mesh1P, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_MeshInfo& CallFunc_TryGetItemDataMeshInfo_OutData, enum class EGetResult CallFunc_TryGetItemDataMeshInfo_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemMeshes");

	Params::UBPFL_Items_C_GetItemMeshes_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_TryGetItemDataMeshInfo_OutData = CallFunc_TryGetItemDataMeshInfo_OutData;
	Parms.CallFunc_TryGetItemDataMeshInfo_Branches = CallFunc_TryGetItemDataMeshInfo_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Mesh3P != nullptr)
		*Mesh3P = Parms.Mesh3P;

	if (Mesh1P != nullptr)
		*Mesh1P = Parms.Mesh1P;

}


// Function BPFL_Items.BPFL_Items_C.IsItemResource
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemTypeTag_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::IsItemResource(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, bool* Return_Value, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FGameplayTag& CallFunc_GetItemTypeTag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_MatchesTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "IsItemResource");

	Params::UBPFL_Items_C_IsItemResource_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_GetItemTypeTag_ReturnValue = CallFunc_GetItemTypeTag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function BPFL_Items.BPFL_Items_C.GetItemStackCount
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              StackCount                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemStackCount(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, int32* StackCount, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemStackCount");

	Params::UBPFL_Items_C_GetItemStackCount_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (StackCount != nullptr)
		*StackCount = Parms.StackCount;

}


// Function BPFL_Items.BPFL_Items_C.GetItemTags
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Tags                                                             (Parm, OutParm)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue                                 (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemTags(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, struct FGameplayTagContainer* Tags, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemTags");

	Params::UBPFL_Items_C_GetItemTags_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_GetItemTags_ReturnValue = CallFunc_GetItemTags_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Tags != nullptr)
		*Tags = std::move(Parms.Tags);

}


// Function BPFL_Items.BPFL_Items_C.GetItemType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               ItemType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemType(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, enum class EItemType* ItemType, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemType");

	Params::UBPFL_Items_C_GetItemType_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemType != nullptr)
		*ItemType = Parms.ItemType;

}


// Function BPFL_Items.BPFL_Items_C.CheckForValidItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::CheckForValidItem(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, bool* ItemValid, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "CheckForValidItem");

	Params::UBPFL_Items_C_CheckForValidItem_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemValid != nullptr)
		*ItemValid = Parms.ItemValid;

}


// Function BPFL_Items.BPFL_Items_C.GetItemLightweightClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      LightweightClass                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Equippable        CallFunc_TryGetItemDataEquippable_OutData                        (None)
// enum class EGetResult              CallFunc_TryGetItemDataEquippable_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Lightweight_Attached_Item           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemLightweightClass(const struct FItemDataReference& ItemId, class UObject* __WorldContext, bool* bSuccess, class UClass** LightweightClass, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_Equippable& CallFunc_TryGetItemDataEquippable_OutData, enum class EGetResult CallFunc_TryGetItemDataEquippable_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Lightweight_Attached_Item, bool K2Node_ClassDynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemLightweightClass");

	Params::UBPFL_Items_C_GetItemLightweightClass_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_TryGetItemDataEquippable_OutData = CallFunc_TryGetItemDataEquippable_OutData;
	Parms.CallFunc_TryGetItemDataEquippable_Branches = CallFunc_TryGetItemDataEquippable_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBP_Lightweight_Attached_Item = K2Node_ClassDynamicCast_AsBP_Lightweight_Attached_Item;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (LightweightClass != nullptr)
		*LightweightClass = Parms.LightweightClass;

}


// Function BPFL_Items.BPFL_Items_C.GetItemActorClass
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ItemActor                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsBP_Equippable_Item_Base                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemActorClass(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, bool* Success, class UClass** ItemActor, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftClassReference_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Equippable_Item_Base, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemActorClass");

	Params::UBPFL_Items_C_GetItemActorClass_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsBP_Equippable_Item_Base = K2Node_ClassDynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (ItemActor != nullptr)
		*ItemActor = Parms.ItemActor;

}


// Function BPFL_Items.BPFL_Items_C.GetItemQuality
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Return_Value                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_DefaultQuality    CallFunc_TryGetItemDataDefaultQuality_OutData                    (NoDestructor)
// enum class EGetResult              CallFunc_TryGetItemDataDefaultQuality_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemQuality(const struct FItemDataReference& ItemId, class UObject* __WorldContext, enum class EItemQuality* Return_Value, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FItemData_DefaultQuality& CallFunc_TryGetItemDataDefaultQuality_OutData, enum class EGetResult CallFunc_TryGetItemDataDefaultQuality_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemQuality");

	Params::UBPFL_Items_C_GetItemQuality_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_TryGetItemDataDefaultQuality_OutData = CallFunc_TryGetItemDataDefaultQuality_OutData;
	Parms.CallFunc_TryGetItemDataDefaultQuality_Branches = CallFunc_TryGetItemDataDefaultQuality_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = Parms.Return_Value;

}


// Function BPFL_Items.BPFL_Items_C.GetItemEquipmentSlot
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_EquipSlotType         EquipmentSlot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData_Equippable        CallFunc_TryGetItemDataEquippable_OutData                        (None)
// enum class EGetResult              CallFunc_TryGetItemDataEquippable_Branches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_EquipSlotType         CallFunc_GetEquipmentSlotTypeForTag_SlotType                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetItemEquipmentSlot(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, enum class E_EquipSlotType* EquipmentSlot, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData_Equippable& CallFunc_TryGetItemDataEquippable_OutData, enum class EGetResult CallFunc_TryGetItemDataEquippable_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, enum class E_EquipSlotType CallFunc_GetEquipmentSlotTypeForTag_SlotType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetItemEquipmentSlot");

	Params::UBPFL_Items_C_GetItemEquipmentSlot_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetItemDataEquippable_OutData = CallFunc_TryGetItemDataEquippable_OutData;
	Parms.CallFunc_TryGetItemDataEquippable_Branches = CallFunc_TryGetItemDataEquippable_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetEquipmentSlotTypeForTag_SlotType = CallFunc_GetEquipmentSlotTypeForTag_SlotType;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipmentSlot != nullptr)
		*EquipmentSlot = Parms.EquipmentSlot;

}


// Function BPFL_Items.BPFL_Items_C.IsItemPhysicallyEquipped
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ItemValid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PhysicallyEquipped                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemData                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FDynamicTypedStructs        ItemDynamicData                                                  (Edit, BlueprintVisible)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItemDataEquippable_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::IsItemPhysicallyEquipped(const struct FItemDataReference& ItemReference, class UObject* __WorldContext, bool* ItemValid, bool* PhysicallyEquipped, const struct FItemData& ItemData, const struct FDynamicTypedStructs& ItemDynamicData, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool CallFunc_HasItemDataEquippable_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "IsItemPhysicallyEquipped");

	Params::UBPFL_Items_C_IsItemPhysicallyEquipped_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.__WorldContext = __WorldContext;
	Parms.ItemData = ItemData;
	Parms.ItemDynamicData = ItemDynamicData;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_HasItemDataEquippable_ReturnValue = CallFunc_HasItemDataEquippable_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemValid != nullptr)
		*ItemValid = Parms.ItemValid;

	if (PhysicallyEquipped != nullptr)
		*PhysicallyEquipped = Parms.PhysicallyEquipped;

}


// Function BPFL_Items.BPFL_Items_C.IsItemDroppable
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsDroppable                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_Tags                                        (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::IsItemDroppable(const struct FItemDataReference& ItemId, class UObject* __WorldContext, bool* IsDroppable, const struct FGameplayTagContainer& CallFunc_GetItemTags_Tags, bool CallFunc_HasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "IsItemDroppable");

	Params::UBPFL_Items_C_IsItemDroppable_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemTags_Tags = CallFunc_GetItemTags_Tags;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDroppable != nullptr)
		*IsDroppable = Parms.IsDroppable;

}


// Function BPFL_Items.BPFL_Items_C.GetLootSpawnTransform
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     LocationToSpawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LootScale                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Items_C::GetLootSpawnTransform(const struct FVector& LocationToSpawn, class UObject* __WorldContext, struct FTransform* Transform, double LootScale, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Items_C", "GetLootSpawnTransform");

	Params::UBPFL_Items_C_GetLootSpawnTransform_Params Parms{};

	Parms.LocationToSpawn = LocationToSpawn;
	Parms.__WorldContext = __WorldContext;
	Parms.LootScale = LootScale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}

}


