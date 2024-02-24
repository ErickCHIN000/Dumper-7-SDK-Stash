#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Mohito.Mohito_C
// (Actor)

class UClass* AMohito_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mohito_C");

	return Clss;
}


// Mohito_C Mohito.Default__Mohito_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMohito_C* AMohito_C::GetDefaultObj()
{
	static class AMohito_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMohito_C*>(AMohito_C::StaticClass()->DefaultObject);

	return Default;
}

}


