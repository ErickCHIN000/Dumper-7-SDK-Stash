#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SecondaryWidgetInterface.BP_SecondaryWidgetInterface_C
// (None)

class UClass* IBP_SecondaryWidgetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SecondaryWidgetInterface_C");

	return Clss;
}


// BP_SecondaryWidgetInterface_C BP_SecondaryWidgetInterface.Default__BP_SecondaryWidgetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_SecondaryWidgetInterface_C* IBP_SecondaryWidgetInterface_C::GetDefaultObj()
{
	static class IBP_SecondaryWidgetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_SecondaryWidgetInterface_C*>(IBP_SecondaryWidgetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SecondaryWidgetInterface.BP_SecondaryWidgetInterface_C.GetWidgetClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Widget                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_SecondaryWidgetInterface_C::GetWidgetClass(class UClass** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SecondaryWidgetInterface_C", "GetWidgetClass");

	Params::IBP_SecondaryWidgetInterface_C_GetWidgetClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}

}


