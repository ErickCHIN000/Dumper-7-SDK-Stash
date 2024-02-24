#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterTrapWeapon.OuterTrapWeapon_C
// (Actor)

class UClass* AOuterTrapWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterTrapWeapon_C");

	return Clss;
}


// OuterTrapWeapon_C OuterTrapWeapon.Default__OuterTrapWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterTrapWeapon_C* AOuterTrapWeapon_C::GetDefaultObj()
{
	static class AOuterTrapWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterTrapWeapon_C*>(AOuterTrapWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


