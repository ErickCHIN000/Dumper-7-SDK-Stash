#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C
// (None)

class UClass* UWid_CompanionIndicator_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionIndicator_Entry_C");

	return Clss;
}


// wid_CompanionIndicator_Entry_C wid_CompanionIndicator_Entry.Default__wid_CompanionIndicator_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionIndicator_Entry_C* UWid_CompanionIndicator_Entry_C::GetDefaultObj()
{
	static class UWid_CompanionIndicator_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionIndicator_Entry_C*>(UWid_CompanionIndicator_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.GetIndicatorInfoFromDatatable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionIndicatorType Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionIndicatorTypeInfo IndicatorInfo                                                    (Parm, OutParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionIndicatorTypeInfo CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionIndicator_Entry_C::GetIndicatorInfoFromDatatable(enum class ECompanionIndicatorType Type, struct FCompanionIndicatorTypeInfo* IndicatorInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FCompanionIndicatorTypeInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionIndicator_Entry_C", "GetIndicatorInfoFromDatatable");

	Params::UWid_CompanionIndicator_Entry_C_GetIndicatorInfoFromDatatable_Params Parms{};

	Parms.Type = Type;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IndicatorInfo != nullptr)
		*IndicatorInfo = std::move(Parms.IndicatorInfo);

}


// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.UpdateType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECompanionIndicatorType Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionIndicatorTypeInfo CallFunc_GetIndicatorInfoFromDatatable_IndicatorInfo             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UWid_CompanionIndicator_Entry_C::UpdateType(enum class ECompanionIndicatorType Type, const struct FCompanionIndicatorTypeInfo& CallFunc_GetIndicatorInfoFromDatatable_IndicatorInfo, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionIndicator_Entry_C", "UpdateType");

	Params::UWid_CompanionIndicator_Entry_C_UpdateType_Params Parms{};

	Parms.Type = Type;
	Parms.CallFunc_GetIndicatorInfoFromDatatable_IndicatorInfo = CallFunc_GetIndicatorInfoFromDatatable_IndicatorInfo;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.IsValidIndicator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CompanionIndicator_Entry_C::IsValidIndicator(bool* IsValid, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionIndicator_Entry_C", "IsValidIndicator");

	Params::UWid_CompanionIndicator_Entry_C_IsValidIndicator_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.GetIndicatorLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_ch_npc_00_C*             K2Node_DynamicCast_AsBa_Ch_Npc_00                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionIndicator_Entry_C::GetIndicatorLocation(struct FVector* Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionIndicator_Entry_C", "GetIndicatorLocation");

	Params::UWid_CompanionIndicator_Entry_C_GetIndicatorLocation_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Ch_Npc_00 = K2Node_DynamicCast_AsBa_Ch_Npc_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CompanionIndicator_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionIndicator_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CompanionIndicator_Entry.wid_CompanionIndicator_Entry_C.ExecuteUbergraph_wid_CompanionIndicator_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CompanionIndicator_Entry_C::ExecuteUbergraph_wid_CompanionIndicator_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CompanionIndicator_Entry_C", "ExecuteUbergraph_wid_CompanionIndicator_Entry");

	Params::UWid_CompanionIndicator_Entry_C_ExecuteUbergraph_wid_CompanionIndicator_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


