#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OuterSubWeapon.OuterSubWeapon_C
// (Actor)

class UClass* AOuterSubWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OuterSubWeapon_C");

	return Clss;
}


// OuterSubWeapon_C OuterSubWeapon.Default__OuterSubWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOuterSubWeapon_C* AOuterSubWeapon_C::GetDefaultObj()
{
	static class AOuterSubWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOuterSubWeapon_C*>(AOuterSubWeapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


