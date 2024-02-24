#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Titan.Titan_C
// (None)

class UClass* UTitan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Titan_C");

	return Clss;
}


// Titan_C Titan.Default__Titan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitan_C* UTitan_C::GetDefaultObj()
{
	static class UTitan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitan_C*>(UTitan_C::StaticClass()->DefaultObject);

	return Default;
}

}


