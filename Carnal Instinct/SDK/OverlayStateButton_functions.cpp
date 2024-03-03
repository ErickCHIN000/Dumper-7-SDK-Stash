#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OverlayStateButton.OverlayStateButton_C
// (None)

class UClass* UOverlayStateButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverlayStateButton_C");

	return Clss;
}


// OverlayStateButton_C OverlayStateButton.Default__OverlayStateButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOverlayStateButton_C* UOverlayStateButton_C::GetDefaultObj()
{
	static class UOverlayStateButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlayStateButton_C*>(UOverlayStateButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OverlayStateButton.OverlayStateButton_C.SetVisualParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOverlayStateButton_C::SetVisualParameters(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlayStateButton_C", "SetVisualParameters");

	Params::UOverlayStateButton_C_SetVisualParameters_Params Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);

}

}


