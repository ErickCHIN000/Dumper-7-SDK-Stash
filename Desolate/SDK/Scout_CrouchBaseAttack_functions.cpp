#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_CrouchBaseAttack.Scout_CrouchBaseAttack_C
// (None)

class UClass* UScout_CrouchBaseAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_CrouchBaseAttack_C");

	return Clss;
}


// Scout_CrouchBaseAttack_C Scout_CrouchBaseAttack.Default__Scout_CrouchBaseAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_CrouchBaseAttack_C* UScout_CrouchBaseAttack_C::GetDefaultObj()
{
	static class UScout_CrouchBaseAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_CrouchBaseAttack_C*>(UScout_CrouchBaseAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


