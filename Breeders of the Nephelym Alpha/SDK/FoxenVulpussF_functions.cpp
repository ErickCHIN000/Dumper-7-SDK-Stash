#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FoxenVulpussF.FoxenVulpussF_C
// (None)

class UClass* UFoxenVulpussF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FoxenVulpussF_C");

	return Clss;
}


// FoxenVulpussF_C FoxenVulpussF.Default__FoxenVulpussF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFoxenVulpussF_C* UFoxenVulpussF_C::GetDefaultObj()
{
	static class UFoxenVulpussF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFoxenVulpussF_C*>(UFoxenVulpussF_C::StaticClass()->DefaultObject);

	return Default;
}

}


