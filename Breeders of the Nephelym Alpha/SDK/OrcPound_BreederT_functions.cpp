#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcPound_BreederT.OrcPound_BreederT_C
// (None)

class UClass* UOrcPound_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcPound_BreederT_C");

	return Clss;
}


// OrcPound_BreederT_C OrcPound_BreederT.Default__OrcPound_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcPound_BreederT_C* UOrcPound_BreederT_C::GetDefaultObj()
{
	static class UOrcPound_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcPound_BreederT_C*>(UOrcPound_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


