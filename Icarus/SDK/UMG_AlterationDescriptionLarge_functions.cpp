#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C
// (None)

class UClass* UUMG_AlterationDescriptionLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AlterationDescriptionLarge_C");

	return Clss;
}


// UMG_AlterationDescriptionLarge_C UMG_AlterationDescriptionLarge.Default__UMG_AlterationDescriptionLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AlterationDescriptionLarge_C* UUMG_AlterationDescriptionLarge_C::GetDefaultObj()
{
	static class UUMG_AlterationDescriptionLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AlterationDescriptionLarge_C*>(UUMG_AlterationDescriptionLarge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        RetrievedDescription                                             (Edit, BlueprintVisible)
// class UUMG_StatDescriptionLarge_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAlterationsRowHandle       CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FAlteration                 CallFunc_GetAlterationsStruct_Alterations                        (None)
// enum class EValid                  CallFunc_GetAlterationsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStatsEnum>          CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FStatsEnum                  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AlterationDescriptionLarge_C::Initialise(class FText RetrievedDescription, class UUMG_StatDescriptionLarge_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FAlterationsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FAlteration& CallFunc_GetAlterationsStruct_Alterations, enum class EValid CallFunc_GetAlterationsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FStatsEnum>& CallFunc_Map_Keys_Keys, const struct FStatsEnum& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationDescriptionLarge_C", "Initialise");

	Params::UUMG_AlterationDescriptionLarge_C_Initialise_Params Parms{};

	Parms.RetrievedDescription = RetrievedDescription;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetAlterationsStruct_Alterations = CallFunc_GetAlterationsStruct_Alterations;
	Parms.CallFunc_GetAlterationsStruct_Paths = CallFunc_GetAlterationsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_AlterationDescriptionLarge_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationDescriptionLarge_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AlterationDescriptionLarge_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationDescriptionLarge_C", "BP_OnItemExpansionChanged");

	Params::UUMG_AlterationDescriptionLarge_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AlterationDescriptionLarge_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationDescriptionLarge_C", "BP_OnItemSelectionChanged");

	Params::UUMG_AlterationDescriptionLarge_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_AlterationDescriptionLarge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationDescriptionLarge_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.Reinitalise
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAlterationsEnum            Alteration                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_AlterationDescriptionLarge_C::Reinitalise(const struct FAlterationsEnum& Alteration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationDescriptionLarge_C", "Reinitalise");

	Params::UUMG_AlterationDescriptionLarge_C_Reinitalise_Params Parms{};

	Parms.Alteration = Alteration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AlterationDescriptionLarge.UMG_AlterationDescriptionLarge_C.ExecuteUbergraph_UMG_AlterationDescriptionLarge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAlterationsEnum            K2Node_CustomEvent_Alteration                                    (HasGetValueTypeHash)

void UUMG_AlterationDescriptionLarge_C::ExecuteUbergraph_UMG_AlterationDescriptionLarge(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, const struct FAlterationsEnum& K2Node_CustomEvent_Alteration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AlterationDescriptionLarge_C", "ExecuteUbergraph_UMG_AlterationDescriptionLarge");

	Params::UUMG_AlterationDescriptionLarge_C_ExecuteUbergraph_UMG_AlterationDescriptionLarge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_CustomEvent_Alteration = K2Node_CustomEvent_Alteration;

	UObject::ProcessEvent(Func, &Parms);

}

}


