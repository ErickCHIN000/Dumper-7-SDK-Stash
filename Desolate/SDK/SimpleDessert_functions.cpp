#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimpleDessert.SimpleDessert_C
// (Actor)

class UClass* ASimpleDessert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimpleDessert_C");

	return Clss;
}


// SimpleDessert_C SimpleDessert.Default__SimpleDessert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASimpleDessert_C* ASimpleDessert_C::GetDefaultObj()
{
	static class ASimpleDessert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASimpleDessert_C*>(ASimpleDessert_C::StaticClass()->DefaultObject);

	return Default;
}

}


