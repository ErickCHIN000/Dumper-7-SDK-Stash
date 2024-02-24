#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FillingForGrenades.FillingForGrenades_C
// (Actor)

class UClass* AFillingForGrenades_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FillingForGrenades_C");

	return Clss;
}


// FillingForGrenades_C FillingForGrenades.Default__FillingForGrenades_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFillingForGrenades_C* AFillingForGrenades_C::GetDefaultObj()
{
	static class AFillingForGrenades_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFillingForGrenades_C*>(AFillingForGrenades_C::StaticClass()->DefaultObject);

	return Default;
}

}


