#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneToy_BreederF.FaleneToy_BreederF_C
// (None)

class UClass* UFaleneToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneToy_BreederF_C");

	return Clss;
}


// FaleneToy_BreederF_C FaleneToy_BreederF.Default__FaleneToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneToy_BreederF_C* UFaleneToy_BreederF_C::GetDefaultObj()
{
	static class UFaleneToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneToy_BreederF_C*>(UFaleneToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


