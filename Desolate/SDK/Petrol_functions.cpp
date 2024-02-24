#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Petrol.Petrol_C
// (Actor)

class UClass* APetrol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Petrol_C");

	return Clss;
}


// Petrol_C Petrol.Default__Petrol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APetrol_C* APetrol_C::GetDefaultObj()
{
	static class APetrol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APetrol_C*>(APetrol_C::StaticClass()->DefaultObject);

	return Default;
}

}


