#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BestiaryGroupRow.BestiaryGroupRow_C
// (None)

class UClass* UBestiaryGroupRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BestiaryGroupRow_C");

	return Clss;
}


// BestiaryGroupRow_C BestiaryGroupRow.Default__BestiaryGroupRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBestiaryGroupRow_C* UBestiaryGroupRow_C::GetDefaultObj()
{
	static class UBestiaryGroupRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBestiaryGroupRow_C*>(UBestiaryGroupRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BestiaryGroupRow.BestiaryGroupRow_C.SetBestiary
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBestiaryDataRowHandle      NewBestiary                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UBestiaryGroupRow_C::SetBestiary(const struct FBestiaryDataRowHandle& NewBestiary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BestiaryGroupRow_C", "SetBestiary");

	Params::UBestiaryGroupRow_C_SetBestiary_Params Parms{};

	Parms.NewBestiary = NewBestiary;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BestiaryGroupRow.BestiaryGroupRow_C.SetAsAll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBestiaryGroupRow_C::SetAsAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BestiaryGroupRow_C", "SetAsAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BestiaryGroupRow.BestiaryGroupRow_C.ExecuteUbergraph_BestiaryGroupRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBestiaryData               CallFunc_GetBestiaryDataStruct_BestiaryData                      (None)
// enum class EValid                  CallFunc_GetBestiaryDataStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBestiaryDataRowHandle      K2Node_CustomEvent_NewBestiary                                   (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBestiaryGroupRow_C::ExecuteUbergraph_BestiaryGroupRow(int32 EntryPoint, const struct FBestiaryData& CallFunc_GetBestiaryDataStruct_BestiaryData, enum class EValid CallFunc_GetBestiaryDataStruct_Paths, const struct FBestiaryDataRowHandle& K2Node_CustomEvent_NewBestiary, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BestiaryGroupRow_C", "ExecuteUbergraph_BestiaryGroupRow");

	Params::UBestiaryGroupRow_C_ExecuteUbergraph_BestiaryGroupRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBestiaryDataStruct_BestiaryData = CallFunc_GetBestiaryDataStruct_BestiaryData;
	Parms.CallFunc_GetBestiaryDataStruct_Paths = CallFunc_GetBestiaryDataStruct_Paths;
	Parms.K2Node_CustomEvent_NewBestiary = K2Node_CustomEvent_NewBestiary;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


