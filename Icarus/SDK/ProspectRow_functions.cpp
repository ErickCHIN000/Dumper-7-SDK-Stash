#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProspectRow.ProspectRow_C
// (None)

class UClass* UProspectRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProspectRow_C");

	return Clss;
}


// ProspectRow_C ProspectRow.Default__ProspectRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProspectRow_C* UProspectRow_C::GetDefaultObj()
{
	static class UProspectRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProspectRow_C*>(UProspectRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ProspectRow.ProspectRow_C.SetProspectRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProspectListRowHandle      ProspectRowHandle                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UProspectRow_C::SetProspectRow(const struct FProspectListRowHandle& ProspectRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProspectRow_C", "SetProspectRow");

	Params::UProspectRow_C_SetProspectRow_Params Parms{};

	Parms.ProspectRowHandle = ProspectRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ProspectRow.ProspectRow_C.ExecuteUbergraph_ProspectRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      K2Node_CustomEvent_ProspectRowHandle                             (NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UProspectRow_C::ExecuteUbergraph_ProspectRow(int32 EntryPoint, const struct FProspectListRowHandle& K2Node_CustomEvent_ProspectRowHandle, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProspectRow_C", "ExecuteUbergraph_ProspectRow");

	Params::UProspectRow_C_ExecuteUbergraph_ProspectRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ProspectRowHandle = K2Node_CustomEvent_ProspectRowHandle;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


