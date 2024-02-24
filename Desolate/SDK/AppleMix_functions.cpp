#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AppleMix.AppleMix_C
// (Actor)

class UClass* AAppleMix_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AppleMix_C");

	return Clss;
}


// AppleMix_C AppleMix.Default__AppleMix_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAppleMix_C* AAppleMix_C::GetDefaultObj()
{
	static class AAppleMix_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAppleMix_C*>(AAppleMix_C::StaticClass()->DefaultObject);

	return Default;
}

}


