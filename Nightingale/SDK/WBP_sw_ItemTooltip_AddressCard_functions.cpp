#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C
// (None)

class UClass* UWBP_sw_ItemTooltip_AddressCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_ItemTooltip_AddressCard_C");

	return Clss;
}


// WBP_sw_ItemTooltip_AddressCard_C WBP_sw_ItemTooltip_AddressCard.Default__WBP_sw_ItemTooltip_AddressCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_ItemTooltip_AddressCard_C* UWBP_sw_ItemTooltip_AddressCard_C::GetDefaultObj()
{
	static class UWBP_sw_ItemTooltip_AddressCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_ItemTooltip_AddressCard_C*>(UWBP_sw_ItemTooltip_AddressCard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.SetupRealmPowerLevel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        AllRealmTags                                                     (Edit, BlueprintVisible)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_sw_ItemTooltip_AddressCard_C::SetupRealmPowerLevel(class FText AllRealmTags, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_AddressCard_C", "SetupRealmPowerLevel");

	Params::UWBP_sw_ItemTooltip_AddressCard_C_SetupRealmPowerLevel_Params Parms{};

	Parms.AllRealmTags = AllRealmTags;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.SetupBiomeName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBiomeUIDataRegistry*        BiomeUIData                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomeUIData                CallFunc_TryGetBiomeUIData_OutData                               (None)
// enum class EGetResult              CallFunc_TryGetBiomeUIData_OutBranches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UWBP_sw_ItemTooltip_AddressCard_C::SetupBiomeName(class UBiomeUIDataRegistry* BiomeUIData, uint8 CallFunc_GetValidValue_ReturnValue, const struct FBiomeUIData& CallFunc_TryGetBiomeUIData_OutData, enum class EGetResult CallFunc_TryGetBiomeUIData_OutBranches, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_AddressCard_C", "SetupBiomeName");

	Params::UWBP_sw_ItemTooltip_AddressCard_C_SetupBiomeName_Params Parms{};

	Parms.BiomeUIData = BiomeUIData;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_TryGetBiomeUIData_OutData = CallFunc_TryGetBiomeUIData_OutData;
	Parms.CallFunc_TryGetBiomeUIData_OutBranches = CallFunc_TryGetBiomeUIData_OutBranches;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.SetupRespitePlayerNames
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ItemTooltip_AddressCard_C::SetupRespitePlayerNames(bool CallFunc_Array_IsEmpty_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_AddressCard_C", "SetupRespitePlayerNames");

	Params::UWBP_sw_ItemTooltip_AddressCard_C_SetupRespitePlayerNames_Params Parms{};

	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.OnRespitePlayerNamesRetrieved
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProfileNamesMapWrapper     Wrapper                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// struct FOnlineServiceStatus        ServiceStatus                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CombinedPlayerNames                                              (Edit, BlueprintVisible)
// bool                               CallFunc_IsSuccess_bIsSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FUniqueName                 CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPublicNameWithoutDiscriminator_ReturnValue           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_sw_ItemTooltip_AddressCard_C::OnRespitePlayerNamesRetrieved(const struct FProfileNamesMapWrapper& Wrapper, const struct FOnlineServiceStatus& ServiceStatus, class FText CombinedPlayerNames, bool CallFunc_IsSuccess_bIsSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, const struct FUniqueName& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetPublicNameWithoutDiscriminator_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_AddressCard_C", "OnRespitePlayerNamesRetrieved");

	Params::UWBP_sw_ItemTooltip_AddressCard_C_OnRespitePlayerNamesRetrieved_Params Parms{};

	Parms.Wrapper = Wrapper;
	Parms.ServiceStatus = ServiceStatus;
	Parms.CombinedPlayerNames = CombinedPlayerNames;
	Parms.CallFunc_IsSuccess_bIsSuccess = CallFunc_IsSuccess_bIsSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetPublicNameWithoutDiscriminator_ReturnValue = CallFunc_GetPublicNameWithoutDiscriminator_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.SetupText
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_ItemTooltip_AddressCard_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_AddressCard_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_ItemTooltip_AddressCard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_AddressCard_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_ItemTooltip_AddressCard.WBP_sw_ItemTooltip_AddressCard_C.ExecuteUbergraph_WBP_sw_ItemTooltip_AddressCard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ItemTooltip_AddressCard_C::ExecuteUbergraph_WBP_sw_ItemTooltip_AddressCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ItemTooltip_AddressCard_C", "ExecuteUbergraph_WBP_sw_ItemTooltip_AddressCard");

	Params::UWBP_sw_ItemTooltip_AddressCard_C_ExecuteUbergraph_WBP_sw_ItemTooltip_AddressCard_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


