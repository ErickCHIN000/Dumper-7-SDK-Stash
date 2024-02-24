#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OBSOLETE_RiverlandEscarpmentTerrain.OBSOLETE_RiverlandEscarpmentTerrain_C
// (Actor)

class UClass* AOBSOLETE_RiverlandEscarpmentTerrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OBSOLETE_RiverlandEscarpmentTerrain_C");

	return Clss;
}


// OBSOLETE_RiverlandEscarpmentTerrain_C OBSOLETE_RiverlandEscarpmentTerrain.Default__OBSOLETE_RiverlandEscarpmentTerrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOBSOLETE_RiverlandEscarpmentTerrain_C* AOBSOLETE_RiverlandEscarpmentTerrain_C::GetDefaultObj()
{
	static class AOBSOLETE_RiverlandEscarpmentTerrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOBSOLETE_RiverlandEscarpmentTerrain_C*>(AOBSOLETE_RiverlandEscarpmentTerrain_C::StaticClass()->DefaultObject);

	return Default;
}

}


