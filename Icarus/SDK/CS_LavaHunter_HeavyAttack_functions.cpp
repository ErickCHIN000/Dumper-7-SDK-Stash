#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_LavaHunter_HeavyAttack.CS_LavaHunter_HeavyAttack_C
// (None)

class UClass* UCS_LavaHunter_HeavyAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_LavaHunter_HeavyAttack_C");

	return Clss;
}


// CS_LavaHunter_HeavyAttack_C CS_LavaHunter_HeavyAttack.Default__CS_LavaHunter_HeavyAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_LavaHunter_HeavyAttack_C* UCS_LavaHunter_HeavyAttack_C::GetDefaultObj()
{
	static class UCS_LavaHunter_HeavyAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_LavaHunter_HeavyAttack_C*>(UCS_LavaHunter_HeavyAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


