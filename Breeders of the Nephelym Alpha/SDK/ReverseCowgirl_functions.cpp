#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReverseCowgirl.ReverseCowgirl_C
// (None)

class UClass* UReverseCowgirl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReverseCowgirl_C");

	return Clss;
}


// ReverseCowgirl_C ReverseCowgirl.Default__ReverseCowgirl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReverseCowgirl_C* UReverseCowgirl_C::GetDefaultObj()
{
	static class UReverseCowgirl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReverseCowgirl_C*>(UReverseCowgirl_C::StaticClass()->DefaultObject);

	return Default;
}

}


