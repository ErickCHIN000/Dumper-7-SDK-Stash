#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcWantWrestle.OrcWantWrestle_C
// (None)

class UClass* UOrcWantWrestle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcWantWrestle_C");

	return Clss;
}


// OrcWantWrestle_C OrcWantWrestle.Default__OrcWantWrestle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcWantWrestle_C* UOrcWantWrestle_C::GetDefaultObj()
{
	static class UOrcWantWrestle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcWantWrestle_C*>(UOrcWantWrestle_C::StaticClass()->DefaultObject);

	return Default;
}

}


