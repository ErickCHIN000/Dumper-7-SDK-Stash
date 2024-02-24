#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BestiaryExperience.UMG_BestiaryExperience_C
// (None)

class UClass* UUMG_BestiaryExperience_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BestiaryExperience_C");

	return Clss;
}


// UMG_BestiaryExperience_C UMG_BestiaryExperience.Default__UMG_BestiaryExperience_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BestiaryExperience_C* UUMG_BestiaryExperience_C::GetDefaultObj()
{
	static class UUMG_BestiaryExperience_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BestiaryExperience_C*>(UUMG_BestiaryExperience_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BestiaryExperience.UMG_BestiaryExperience_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BestiaryExperience_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BestiaryExperience_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BestiaryExperience.UMG_BestiaryExperience_C.Remove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BestiaryExperience_C::Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BestiaryExperience_C", "Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BestiaryExperience.UMG_BestiaryExperience_C.ExecuteUbergraph_UMG_BestiaryExperience
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FBestiaryData               CallFunc_GetBestiaryDataStruct_BestiaryData                      (None)
// enum class EValid                  CallFunc_GetBestiaryDataStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_BestiaryExperience_C::ExecuteUbergraph_UMG_BestiaryExperience(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FBestiaryData& CallFunc_GetBestiaryDataStruct_BestiaryData, enum class EValid CallFunc_GetBestiaryDataStruct_Paths, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BestiaryExperience_C", "ExecuteUbergraph_UMG_BestiaryExperience");

	Params::UUMG_BestiaryExperience_C_ExecuteUbergraph_UMG_BestiaryExperience_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetBestiaryDataStruct_BestiaryData = CallFunc_GetBestiaryDataStruct_BestiaryData;
	Parms.CallFunc_GetBestiaryDataStruct_Paths = CallFunc_GetBestiaryDataStruct_Paths;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


