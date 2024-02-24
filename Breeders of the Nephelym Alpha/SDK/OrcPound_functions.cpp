#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcPound.OrcPound_C
// (None)

class UClass* UOrcPound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcPound_C");

	return Clss;
}


// OrcPound_C OrcPound.Default__OrcPound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcPound_C* UOrcPound_C::GetDefaultObj()
{
	static class UOrcPound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcPound_C*>(UOrcPound_C::StaticClass()->DefaultObject);

	return Default;
}

}


