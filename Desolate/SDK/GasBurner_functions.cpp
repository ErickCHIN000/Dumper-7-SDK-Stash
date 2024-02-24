#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GasBurner.GasBurner_C
// (Actor)

class UClass* AGasBurner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GasBurner_C");

	return Clss;
}


// GasBurner_C GasBurner.Default__GasBurner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGasBurner_C* AGasBurner_C::GetDefaultObj()
{
	static class AGasBurner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGasBurner_C*>(AGasBurner_C::StaticClass()->DefaultObject);

	return Default;
}

}


