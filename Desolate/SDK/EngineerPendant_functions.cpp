#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngineerPendant.EngineerPendant_C
// (Actor)

class UClass* AEngineerPendant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngineerPendant_C");

	return Clss;
}


// EngineerPendant_C EngineerPendant.Default__EngineerPendant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEngineerPendant_C* AEngineerPendant_C::GetDefaultObj()
{
	static class AEngineerPendant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEngineerPendant_C*>(AEngineerPendant_C::StaticClass()->DefaultObject);

	return Default;
}

}


