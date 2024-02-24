#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeefSteak.BeefSteak_C
// (Actor)

class UClass* ABeefSteak_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeefSteak_C");

	return Clss;
}


// BeefSteak_C BeefSteak.Default__BeefSteak_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABeefSteak_C* ABeefSteak_C::GetDefaultObj()
{
	static class ABeefSteak_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABeefSteak_C*>(ABeefSteak_C::StaticClass()->DefaultObject);

	return Default;
}

}


