#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CoordinatedEffect_Dissolve.CoordinatedEffect_Dissolve_C
// (None)

class UClass* UCoordinatedEffect_Dissolve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CoordinatedEffect_Dissolve_C");

	return Clss;
}


// CoordinatedEffect_Dissolve_C CoordinatedEffect_Dissolve.Default__CoordinatedEffect_Dissolve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCoordinatedEffect_Dissolve_C* UCoordinatedEffect_Dissolve_C::GetDefaultObj()
{
	static class UCoordinatedEffect_Dissolve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCoordinatedEffect_Dissolve_C*>(UCoordinatedEffect_Dissolve_C::StaticClass()->DefaultObject);

	return Default;
}

}


