#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StyledWidgetInterface.StyledWidgetInterface_C
// (None)

class UClass* IStyledWidgetInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledWidgetInterface_C");

	return Clss;
}


// StyledWidgetInterface_C StyledWidgetInterface.Default__StyledWidgetInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IStyledWidgetInterface_C* IStyledWidgetInterface_C::GetDefaultObj()
{
	static class IStyledWidgetInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IStyledWidgetInterface_C*>(IStyledWidgetInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StyledWidgetInterface.StyledWidgetInterface_C.OnHoverColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HoverColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IStyledWidgetInterface_C::OnHoverColor(bool HoverColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledWidgetInterface_C", "OnHoverColor");

	Params::IStyledWidgetInterface_C_OnHoverColor_Params Parms{};

	Parms.HoverColor = HoverColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


