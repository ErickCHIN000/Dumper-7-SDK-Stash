#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidgetSelector.WidgetSelector_C
// (None)

class UClass* IWidgetSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetSelector_C");

	return Clss;
}


// WidgetSelector_C WidgetSelector.Default__WidgetSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IWidgetSelector_C* IWidgetSelector_C::GetDefaultObj()
{
	static class IWidgetSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IWidgetSelector_C*>(IWidgetSelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WidgetSelector.WidgetSelector_C.GetSelectedWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IWidgetSelector_C::GetSelectedWidget(class UWidget** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSelector_C", "GetSelectedWidget");

	Params::IWidgetSelector_C_GetSelectedWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}

}


