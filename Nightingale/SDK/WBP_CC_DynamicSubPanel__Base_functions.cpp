#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel__Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel__Base_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel__Base_C WBP_CC_DynamicSubPanel__Base.Default__WBP_CC_DynamicSubPanel__Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel__Base_C* UWBP_CC_DynamicSubPanel__Base_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel__Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel__Base_C*>(UWBP_CC_DynamicSubPanel__Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.Utility_GetMorphValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MorphName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAppearanceMorphTarget>CallFunc_GetBodyMorphTargets_OutCurrentMorphs                    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAppearanceMorphTarget      CallFunc_Array_Get_Item                                          (NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel__Base_C::Utility_GetMorphValue(class FName MorphName, float* Value, bool CallFunc_IsValid_ReturnValue, TArray<struct FAppearanceMorphTarget>& CallFunc_GetBodyMorphTargets_OutCurrentMorphs, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FAppearanceMorphTarget& CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "Utility_GetMorphValue");

	Params::UWBP_CC_DynamicSubPanel__Base_C_Utility_GetMorphValue_Params Parms{};

	Parms.MorphName = MorphName;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBodyMorphTargets_OutCurrentMorphs = CallFunc_GetBodyMorphTargets_OutCurrentMorphs;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.CollectPanelValues
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel__Base_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel__Base_C_CollectPanelValues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.SendTelemetryEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TimeSpent                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      PanelName                                                        (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>Values                                                           (Edit, BlueprintVisible)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_DateTimeToUnixTimestamp_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Subtract_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue_1                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_DateTimeToUnixTimestamp_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Subtract_Int64Int64_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>CallFunc_CollectPanelValues_OutValues                            (None)
// class FString                      CallFunc_CollectPanelValues_OutPanelName                         (ZeroConstructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel__Base_C::SendTelemetryEvents(int32 TimeSpent, const class FString& PanelName, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> Values, const struct FDateTime& CallFunc_UtcNow_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue_1, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue_1, int64 CallFunc_Subtract_Int64Int64_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> CallFunc_CollectPanelValues_OutValues, const class FString& CallFunc_CollectPanelValues_OutPanelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "SendTelemetryEvents");

	Params::UWBP_CC_DynamicSubPanel__Base_C_SendTelemetryEvents_Params Parms{};

	Parms.TimeSpent = TimeSpent;
	Parms.PanelName = PanelName;
	Parms.Values = Values;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_DateTimeToUnixTimestamp_ReturnValue = CallFunc_DateTimeToUnixTimestamp_ReturnValue;
	Parms.CallFunc_Subtract_Int64Int64_ReturnValue = CallFunc_Subtract_Int64Int64_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_UtcNow_ReturnValue_1 = CallFunc_UtcNow_ReturnValue_1;
	Parms.CallFunc_DateTimeToUnixTimestamp_ReturnValue_1 = CallFunc_DateTimeToUnixTimestamp_ReturnValue_1;
	Parms.CallFunc_Subtract_Int64Int64_ReturnValue_1 = CallFunc_Subtract_Int64Int64_ReturnValue_1;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_CollectPanelValues_OutValues = CallFunc_CollectPanelValues_OutValues;
	Parms.CallFunc_CollectPanelValues_OutPanelName = CallFunc_CollectPanelValues_OutPanelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.CacheStartingPanelValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_DateTimeToUnixTimestamp_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel__Base_C::CacheStartingPanelValues(const struct FDateTime& CallFunc_UtcNow_ReturnValue, int64 CallFunc_DateTimeToUnixTimestamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel__Base_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_DateTimeToUnixTimestamp_ReturnValue = CallFunc_DateTimeToUnixTimestamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.RefreshPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel__Base_C::RefreshPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "RefreshPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel__Base_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel__Base_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel__Base_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel__Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel__Base_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel__Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel__Base");

	Params::UWBP_CC_DynamicSubPanel__Base_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel__Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel__Base.WBP_CC_DynamicSubPanel__Base_C.PanelClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel__Base_C::PanelClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel__Base_C", "PanelClosed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


