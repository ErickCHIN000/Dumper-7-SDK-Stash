#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C
// (None)

class UClass* UWid_CompanionEquipment_StatsEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionEquipment_StatsEntry_C");

	return Clss;
}


// wid_CompanionEquipment_StatsEntry_C wid_CompanionEquipment_StatsEntry.Default__wid_CompanionEquipment_StatsEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionEquipment_StatsEntry_C* UWid_CompanionEquipment_StatsEntry_C::GetDefaultObj()
{
	static class UWid_CompanionEquipment_StatsEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionEquipment_StatsEntry_C*>(UWid_CompanionEquipment_StatsEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.GetStatsOffsetBasedOnItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionEffectiveness     CallFunc_GetCompanionEquipmnetStatsModifier_ReturnValue          (NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWid_CompanionEquipment_StatsEntry_C::GetStatsOffsetBasedOnItem(struct FInventoryEntry& ItemEntry, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FCompanionEffectiveness& CallFunc_GetCompanionEquipmnetStatsModifier_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "GetStatsOffsetBasedOnItem");

	Params::UWid_CompanionEquipment_StatsEntry_C_GetStatsOffsetBasedOnItem_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCompanionEquipmnetStatsModifier_ReturnValue = CallFunc_GetCompanionEquipmnetStatsModifier_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.GetEquipmentSlotBasedOnItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeSlotType                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeTemp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeTemp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeTemp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeTemp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECompanionEquipmentSlotTypeTemp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemInfo_IsValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemInfo_ReturnValue                                 (None)
// enum class ECompanionEquipmentSlotTypeK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_StatsEntry_C::GetEquipmentSlotBasedOnItem(class FName ItemId, enum class ECompanionEquipmentSlotType* SlotType, enum class EItemCategory Temp_byte_Variable, bool CallFunc_NotEqual_NameName_ReturnValue, enum class ECompanionEquipmentSlotType Temp_byte_Variable_1, enum class ECompanionEquipmentSlotType Temp_byte_Variable_2, enum class ECompanionEquipmentSlotType Temp_byte_Variable_3, enum class ECompanionEquipmentSlotType Temp_byte_Variable_4, enum class ECompanionEquipmentSlotType Temp_byte_Variable_5, enum class ECompanionEquipmentSlotType Temp_byte_Variable_6, enum class ECompanionEquipmentSlotType Temp_byte_Variable_7, enum class ECompanionEquipmentSlotType Temp_byte_Variable_8, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, bool CallFunc_GetItemInfo_IsValid, const struct FItemEntry& CallFunc_GetItemInfo_ReturnValue, enum class ECompanionEquipmentSlotType K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "GetEquipmentSlotBasedOnItem");

	Params::UWid_CompanionEquipment_StatsEntry_C_GetEquipmentSlotBasedOnItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_GetItemInfo_IsValid = CallFunc_GetItemInfo_IsValid;
	Parms.CallFunc_GetItemInfo_ReturnValue = CallFunc_GetItemInfo_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotType != nullptr)
		*SlotType = Parms.SlotType;

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.CalculateSignificantChange
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveCurrent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeCurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutSignificantChange                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SignificantValueLocal                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateSignificantValue_Out                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStatsOffsetBasedOnItem_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CompanionGetEquippedItem_outResult                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryEntry             CallFunc_CompanionGetEquippedItem_ReturnValue                    (None)
// int32                              CallFunc_GetStatsOffsetBasedOnItem_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_StatsEntry_C::CalculateSignificantChange(struct FInventoryEntry& ItemEntry, class FName CompanionID, bool RemoveCurrent, enum class ECompanionEquipmentSlotType CurrentSlot, int32* OutSignificantChange, int32 SignificantValueLocal, int32 CallFunc_CalculateSignificantValue_Out, int32 CallFunc_GetStatsOffsetBasedOnItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_CompanionGetEquippedItem_outResult, const struct FInventoryEntry& CallFunc_CompanionGetEquippedItem_ReturnValue, int32 CallFunc_GetStatsOffsetBasedOnItem_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "CalculateSignificantChange");

	Params::UWid_CompanionEquipment_StatsEntry_C_CalculateSignificantChange_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.CompanionID = CompanionID;
	Parms.RemoveCurrent = RemoveCurrent;
	Parms.CurrentSlot = CurrentSlot;
	Parms.SignificantValueLocal = SignificantValueLocal;
	Parms.CallFunc_CalculateSignificantValue_Out = CallFunc_CalculateSignificantValue_Out;
	Parms.CallFunc_GetStatsOffsetBasedOnItem_ReturnValue = CallFunc_GetStatsOffsetBasedOnItem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_CompanionGetEquippedItem_outResult = CallFunc_CompanionGetEquippedItem_outResult;
	Parms.CallFunc_CompanionGetEquippedItem_ReturnValue = CallFunc_CompanionGetEquippedItem_ReturnValue;
	Parms.CallFunc_GetStatsOffsetBasedOnItem_ReturnValue_1 = CallFunc_GetStatsOffsetBasedOnItem_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSignificantChange != nullptr)
		*OutSignificantChange = Parms.OutSignificantChange;

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.CalculateSignificantValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bClamped                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Out                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsModifier              LocalStats                                                       (Edit, BlueprintVisible)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsModifier              CallFunc_GetStatForCompanion_ReturnValue                         (None)

void UWid_CompanionEquipment_StatsEntry_C::CalculateSignificantValue(class FName CompanionID, bool bClamped, int32* Out, const struct FStatsModifier& LocalStats, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_3, int32 CallFunc_FTrunc_ReturnValue_4, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FStatsModifier& CallFunc_GetStatForCompanion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "CalculateSignificantValue");

	Params::UWid_CompanionEquipment_StatsEntry_C_CalculateSignificantValue_Params Parms{};

	Parms.CompanionID = CompanionID;
	Parms.bClamped = bClamped;
	Parms.LocalStats = LocalStats;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_2 = CallFunc_FTrunc_ReturnValue_2;
	Parms.CallFunc_FTrunc_ReturnValue_3 = CallFunc_FTrunc_ReturnValue_3;
	Parms.CallFunc_FTrunc_ReturnValue_4 = CallFunc_FTrunc_ReturnValue_4;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetStatForCompanion_ReturnValue = CallFunc_GetStatForCompanion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.UpdateCurrentChangeValue
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        CompanionName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveCurrent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeCurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_StatsEntry_C::UpdateCurrentChangeValue(struct FInventoryEntry& ItemEntry, class FName CompanionName, bool RemoveCurrent, enum class ECompanionEquipmentSlotType CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "UpdateCurrentChangeValue");

	Params::UWid_CompanionEquipment_StatsEntry_C_UpdateCurrentChangeValue_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.CompanionName = CompanionName;
	Parms.RemoveCurrent = RemoveCurrent;
	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.UpdateCurrentSignificantValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_StatsEntry_C::UpdateCurrentSignificantValue(class FName CompanionID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "UpdateCurrentSignificantValue");

	Params::UWid_CompanionEquipment_StatsEntry_C_UpdateCurrentSignificantValue_Params Parms{};

	Parms.CompanionID = CompanionID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CompanionEquipment_StatsEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_StatsEntry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "Tick");

	Params::UWid_CompanionEquipment_StatsEntry_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.Update
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        CompanionID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RemoveCurrent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeCurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionEquipment_StatsEntry_C::Update(struct FInventoryEntry& ItemEntry, class FName CompanionID, bool RemoveCurrent, enum class ECompanionEquipmentSlotType CurrentSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "Update");

	Params::UWid_CompanionEquipment_StatsEntry_C_Update_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.CompanionID = CompanionID;
	Parms.RemoveCurrent = RemoveCurrent;
	Parms.CurrentSlot = CurrentSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionEquipment_StatsEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "PreConstruct");

	Params::UWid_CompanionEquipment_StatsEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionEquipment_StatsEntry.wid_CompanionEquipment_StatsEntry_C.ExecuteUbergraph_wid_CompanionEquipment_StatsEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_ItemEntry_1                                   (ConstParm)
// class FName                        K2Node_CustomEvent_CompanionName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_RemoveCurrent_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeK2Node_CustomEvent_CurrentSlot_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_CompanionID_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateSignificantChange_OutSignificantChange         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CalculateSignificantValue_Out                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Abs_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_ItemEntry                                     (ConstParm)
// class FName                        K2Node_CustomEvent_CompanionID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_RemoveCurrent                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECompanionEquipmentSlotTypeK2Node_CustomEvent_CurrentSlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_CompanionEquipment_StatsEntry_C::ExecuteUbergraph_wid_CompanionEquipment_StatsEntry(int32 EntryPoint, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry_1, class FName K2Node_CustomEvent_CompanionName, bool K2Node_CustomEvent_RemoveCurrent_1, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_CurrentSlot_1, class FName K2Node_CustomEvent_CompanionID_1, int32 CallFunc_CalculateSignificantChange_OutSignificantChange, int32 CallFunc_CalculateSignificantValue_Out, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Abs_Int_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, const struct FInventoryEntry& K2Node_CustomEvent_ItemEntry, class FName K2Node_CustomEvent_CompanionID, bool K2Node_CustomEvent_RemoveCurrent, enum class ECompanionEquipmentSlotType K2Node_CustomEvent_CurrentSlot, float CallFunc_FInterpTo_ReturnValue_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionEquipment_StatsEntry_C", "ExecuteUbergraph_wid_CompanionEquipment_StatsEntry");

	Params::UWid_CompanionEquipment_StatsEntry_C_ExecuteUbergraph_wid_CompanionEquipment_StatsEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CustomEvent_ItemEntry_1 = K2Node_CustomEvent_ItemEntry_1;
	Parms.K2Node_CustomEvent_CompanionName = K2Node_CustomEvent_CompanionName;
	Parms.K2Node_CustomEvent_RemoveCurrent_1 = K2Node_CustomEvent_RemoveCurrent_1;
	Parms.K2Node_CustomEvent_CurrentSlot_1 = K2Node_CustomEvent_CurrentSlot_1;
	Parms.K2Node_CustomEvent_CompanionID_1 = K2Node_CustomEvent_CompanionID_1;
	Parms.CallFunc_CalculateSignificantChange_OutSignificantChange = CallFunc_CalculateSignificantChange_OutSignificantChange;
	Parms.CallFunc_CalculateSignificantValue_Out = CallFunc_CalculateSignificantValue_Out;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Abs_Int_ReturnValue = CallFunc_Abs_Int_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.K2Node_CustomEvent_ItemEntry = K2Node_CustomEvent_ItemEntry;
	Parms.K2Node_CustomEvent_CompanionID = K2Node_CustomEvent_CompanionID;
	Parms.K2Node_CustomEvent_RemoveCurrent = K2Node_CustomEvent_RemoveCurrent;
	Parms.K2Node_CustomEvent_CurrentSlot = K2Node_CustomEvent_CurrentSlot;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


