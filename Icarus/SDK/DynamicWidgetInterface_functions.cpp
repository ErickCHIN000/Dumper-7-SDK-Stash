#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DynamicWidgetInterface.DynamicWidgetInterface_C
// (None)

class UClass* IDynamicWidgetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicWidgetInterface_C");

	return Clss;
}


// DynamicWidgetInterface_C DynamicWidgetInterface.Default__DynamicWidgetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IDynamicWidgetInterface_C* IDynamicWidgetInterface_C::GetDefaultObj()
{
	static class IDynamicWidgetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IDynamicWidgetInterface_C*>(IDynamicWidgetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicWidgetInterface.DynamicWidgetInterface_C.IsEscapeMenuDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IDynamicWidgetInterface_C::IsEscapeMenuDisabled(bool* Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicWidgetInterface_C", "IsEscapeMenuDisabled");

	Params::IDynamicWidgetInterface_C_IsEscapeMenuDisabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Disabled != nullptr)
		*Disabled = Parms.Disabled;

}

}


