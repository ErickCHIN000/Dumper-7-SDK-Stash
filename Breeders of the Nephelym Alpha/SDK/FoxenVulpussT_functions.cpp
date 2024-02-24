#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoxenVulpussT.FoxenVulpussT_C
// (None)

class UClass* UFoxenVulpussT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoxenVulpussT_C");

	return Clss;
}


// FoxenVulpussT_C FoxenVulpussT.Default__FoxenVulpussT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoxenVulpussT_C* UFoxenVulpussT_C::GetDefaultObj()
{
	static class UFoxenVulpussT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoxenVulpussT_C*>(UFoxenVulpussT_C::StaticClass()->DefaultObject);

	return Default;
}

}


