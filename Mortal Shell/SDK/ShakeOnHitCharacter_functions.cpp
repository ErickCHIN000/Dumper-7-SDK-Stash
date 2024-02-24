#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShakeOnHitCharacter.ShakeOnHitCharacter_C
// (None)

class UClass* UShakeOnHitCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShakeOnHitCharacter_C");

	return Clss;
}


// ShakeOnHitCharacter_C ShakeOnHitCharacter.Default__ShakeOnHitCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShakeOnHitCharacter_C* UShakeOnHitCharacter_C::GetDefaultObj()
{
	static class UShakeOnHitCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShakeOnHitCharacter_C*>(UShakeOnHitCharacter_C::StaticClass()->DefaultObject);

	return Default;
}

}


