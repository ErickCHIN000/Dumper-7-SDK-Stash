#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Noodles.Noodles_C
// (Actor)

class UClass* ANoodles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Noodles_C");

	return Clss;
}


// Noodles_C Noodles.Default__Noodles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANoodles_C* ANoodles_C::GetDefaultObj()
{
	static class ANoodles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANoodles_C*>(ANoodles_C::StaticClass()->DefaultObject);

	return Default;
}

}


