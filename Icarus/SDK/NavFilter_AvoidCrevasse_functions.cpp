#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_AvoidCrevasse.NavFilter_AvoidCrevasse_C
// (None)

class UClass* UNavFilter_AvoidCrevasse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_AvoidCrevasse_C");

	return Clss;
}


// NavFilter_AvoidCrevasse_C NavFilter_AvoidCrevasse.Default__NavFilter_AvoidCrevasse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_AvoidCrevasse_C* UNavFilter_AvoidCrevasse_C::GetDefaultObj()
{
	static class UNavFilter_AvoidCrevasse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_AvoidCrevasse_C*>(UNavFilter_AvoidCrevasse_C::StaticClass()->DefaultObject);

	return Default;
}

}


