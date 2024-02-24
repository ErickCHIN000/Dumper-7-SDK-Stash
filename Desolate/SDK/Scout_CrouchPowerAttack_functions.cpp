#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_CrouchPowerAttack.Scout_CrouchPowerAttack_C
// (None)

class UClass* UScout_CrouchPowerAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_CrouchPowerAttack_C");

	return Clss;
}


// Scout_CrouchPowerAttack_C Scout_CrouchPowerAttack.Default__Scout_CrouchPowerAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_CrouchPowerAttack_C* UScout_CrouchPowerAttack_C::GetDefaultObj()
{
	static class UScout_CrouchPowerAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_CrouchPowerAttack_C*>(UScout_CrouchPowerAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


