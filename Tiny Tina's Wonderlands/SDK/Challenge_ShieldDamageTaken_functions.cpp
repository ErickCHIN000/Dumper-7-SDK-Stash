#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_ShieldDamageTaken.Challenge_ShieldDamageTaken_C
// (None)

class UClass* UChallenge_ShieldDamageTaken_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_ShieldDamageTaken_C");

	return Clss;
}


// Challenge_ShieldDamageTaken_C Challenge_ShieldDamageTaken.Default__Challenge_ShieldDamageTaken_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_ShieldDamageTaken_C* UChallenge_ShieldDamageTaken_C::GetDefaultObj()
{
	static class UChallenge_ShieldDamageTaken_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_ShieldDamageTaken_C*>(UChallenge_ShieldDamageTaken_C::StaticClass()->DefaultObject);

	return Default;
}

}


