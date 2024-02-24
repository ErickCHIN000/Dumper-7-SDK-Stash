#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Barley.Barley_C
// (Actor)

class UClass* ABarley_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Barley_C");

	return Clss;
}


// Barley_C Barley.Default__Barley_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABarley_C* ABarley_C::GetDefaultObj()
{
	static class ABarley_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABarley_C*>(ABarley_C::StaticClass()->DefaultObject);

	return Default;
}

}


