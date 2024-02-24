#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneToy_BreederT.FaleneToy_BreederT_C
// (None)

class UClass* UFaleneToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneToy_BreederT_C");

	return Clss;
}


// FaleneToy_BreederT_C FaleneToy_BreederT.Default__FaleneToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneToy_BreederT_C* UFaleneToy_BreederT_C::GetDefaultObj()
{
	static class UFaleneToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneToy_BreederT_C*>(UFaleneToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


