#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Foxen.Foxen_C
// (None)

class UClass* UFoxen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Foxen_C");

	return Clss;
}


// Foxen_C Foxen.Default__Foxen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoxen_C* UFoxen_C::GetDefaultObj()
{
	static class UFoxen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoxen_C*>(UFoxen_C::StaticClass()->DefaultObject);

	return Default;
}

}


