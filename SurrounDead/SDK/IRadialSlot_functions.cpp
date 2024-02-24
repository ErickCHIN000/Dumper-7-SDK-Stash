#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IRadialSlot.IRadialSlot_C
// (None)

class UClass* IIRadialSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IRadialSlot_C");

	return Clss;
}


// IRadialSlot_C IRadialSlot.Default__IRadialSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIRadialSlot_C* IIRadialSlot_C::GetDefaultObj()
{
	static class IIRadialSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIRadialSlot_C*>(IIRadialSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IRadialSlot.IRadialSlot_C.OnUnhighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIRadialSlot_C::OnUnhighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IRadialSlot_C", "OnUnhighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IRadialSlot.IRadialSlot_C.OnHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIRadialSlot_C::OnHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IRadialSlot_C", "OnHighlight");



	UObject::ProcessEvent(Func, nullptr);

}

}


