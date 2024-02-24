#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SocialMediaWidget.SocialMediaWidget_C
// (None)

class UClass* USocialMediaWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialMediaWidget_C");

	return Clss;
}


// SocialMediaWidget_C SocialMediaWidget.Default__SocialMediaWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USocialMediaWidget_C* USocialMediaWidget_C::GetDefaultObj()
{
	static class USocialMediaWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialMediaWidget_C*>(USocialMediaWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialMediaWidget.SocialMediaWidget_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USocialMediaWidget_C::GetInitialWidgetFocus(class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialMediaWidget_C", "GetInitialWidgetFocus");

	Params::USocialMediaWidget_C_GetInitialWidgetFocus_Params Parms{};

	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue = CallFunc_GetInitialWidgetFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


