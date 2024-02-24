#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneToyF.FaleneToyF_C
// (None)

class UClass* UFaleneToyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneToyF_C");

	return Clss;
}


// FaleneToyF_C FaleneToyF.Default__FaleneToyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneToyF_C* UFaleneToyF_C::GetDefaultObj()
{
	static class UFaleneToyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneToyF_C*>(UFaleneToyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


