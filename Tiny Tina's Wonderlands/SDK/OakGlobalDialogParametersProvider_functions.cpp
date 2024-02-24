#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OakGlobalDialogParametersProvider.OakGlobalDialogParametersProvider_C
// (None)

class UClass* UOakGlobalDialogParametersProvider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OakGlobalDialogParametersProvider_C");

	return Clss;
}


// OakGlobalDialogParametersProvider_C OakGlobalDialogParametersProvider.Default__OakGlobalDialogParametersProvider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOakGlobalDialogParametersProvider_C* UOakGlobalDialogParametersProvider_C::GetDefaultObj()
{
	static class UOakGlobalDialogParametersProvider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOakGlobalDialogParametersProvider_C*>(UOakGlobalDialogParametersProvider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OakGlobalDialogParametersProvider.OakGlobalDialogParametersProvider_C.InitDialogContext
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FDialogContext              Parameters                                                       (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UOakGlobalDialogParametersProvider_C::InitDialogContext(struct FDialogContext& Parameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakGlobalDialogParametersProvider_C", "InitDialogContext");

	Params::UOakGlobalDialogParametersProvider_C_InitDialogContext_Params Parms{};

	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}

}


