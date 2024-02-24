#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoxenHouse.FoxenHouse_C
// (None)

class UClass* UFoxenHouse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoxenHouse_C");

	return Clss;
}


// FoxenHouse_C FoxenHouse.Default__FoxenHouse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoxenHouse_C* UFoxenHouse_C::GetDefaultObj()
{
	static class UFoxenHouse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoxenHouse_C*>(UFoxenHouse_C::StaticClass()->DefaultObject);

	return Default;
}

}


