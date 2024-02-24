#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CanCancelAttackWithMovement.CanCancelAttackWithMovement_C
// (None)

class UClass* UCanCancelAttackWithMovement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanCancelAttackWithMovement_C");

	return Clss;
}


// CanCancelAttackWithMovement_C CanCancelAttackWithMovement.Default__CanCancelAttackWithMovement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCanCancelAttackWithMovement_C* UCanCancelAttackWithMovement_C::GetDefaultObj()
{
	static class UCanCancelAttackWithMovement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCanCancelAttackWithMovement_C*>(UCanCancelAttackWithMovement_C::StaticClass()->DefaultObject);

	return Default;
}

}


