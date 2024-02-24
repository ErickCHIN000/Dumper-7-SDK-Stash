#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bovaur.Bovaur_C
// (None)

class UClass* UBovaur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bovaur_C");

	return Clss;
}


// Bovaur_C Bovaur.Default__Bovaur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBovaur_C* UBovaur_C::GetDefaultObj()
{
	static class UBovaur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBovaur_C*>(UBovaur_C::StaticClass()->DefaultObject);

	return Default;
}

}


