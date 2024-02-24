#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterTrap.OuterTrap_C
// (Actor)

class UClass* AOuterTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterTrap_C");

	return Clss;
}


// OuterTrap_C OuterTrap.Default__OuterTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterTrap_C* AOuterTrap_C::GetDefaultObj()
{
	static class AOuterTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterTrap_C*>(AOuterTrap_C::StaticClass()->DefaultObject);

	return Default;
}

}


