#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SimplePastry.SimplePastry_C
// (Actor)

class UClass* ASimplePastry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SimplePastry_C");

	return Clss;
}


// SimplePastry_C SimplePastry.Default__SimplePastry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASimplePastry_C* ASimplePastry_C::GetDefaultObj()
{
	static class ASimplePastry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASimplePastry_C*>(ASimplePastry_C::StaticClass()->DefaultObject);

	return Default;
}

}


