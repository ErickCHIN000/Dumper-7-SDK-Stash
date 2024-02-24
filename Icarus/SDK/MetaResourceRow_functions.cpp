#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MetaResourceRow.MetaResourceRow_C
// (None)

class UClass* UMetaResourceRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MetaResourceRow_C");

	return Clss;
}


// MetaResourceRow_C MetaResourceRow.Default__MetaResourceRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMetaResourceRow_C* UMetaResourceRow_C::GetDefaultObj()
{
	static class UMetaResourceRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMetaResourceRow_C*>(UMetaResourceRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MetaResourceRow.MetaResourceRow_C.SetMetaResource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMetaCurrencyRowHandle      CurrencyRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UMetaResourceRow_C::SetMetaResource(const struct FMetaCurrencyRowHandle& CurrencyRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaResourceRow_C", "SetMetaResource");

	Params::UMetaResourceRow_C_SetMetaResource_Params Parms{};

	Parms.CurrencyRow = CurrencyRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MetaResourceRow.MetaResourceRow_C.ExecuteUbergraph_MetaResourceRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMetaCurrency               CallFunc_GetMetaCurrencyStruct_MetaCurrency                      (None)
// enum class EValid                  CallFunc_GetMetaCurrencyStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FMetaCurrencyRowHandle      K2Node_CustomEvent_CurrencyRow                                   (NoDestructor, HasGetValueTypeHash)

void UMetaResourceRow_C::ExecuteUbergraph_MetaResourceRow(int32 EntryPoint, const struct FMetaCurrency& CallFunc_GetMetaCurrencyStruct_MetaCurrency, enum class EValid CallFunc_GetMetaCurrencyStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FMetaCurrencyRowHandle& K2Node_CustomEvent_CurrencyRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MetaResourceRow_C", "ExecuteUbergraph_MetaResourceRow");

	Params::UMetaResourceRow_C_ExecuteUbergraph_MetaResourceRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMetaCurrencyStruct_MetaCurrency = CallFunc_GetMetaCurrencyStruct_MetaCurrency;
	Parms.CallFunc_GetMetaCurrencyStruct_Paths = CallFunc_GetMetaCurrencyStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_CustomEvent_CurrencyRow = K2Node_CustomEvent_CurrencyRow;

	UObject::ProcessEvent(Func, &Parms);

}

}


