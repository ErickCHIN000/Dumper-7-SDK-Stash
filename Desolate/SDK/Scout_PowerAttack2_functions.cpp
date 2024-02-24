#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_PowerAttack2.Scout_PowerAttack2_C
// (None)

class UClass* UScout_PowerAttack2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_PowerAttack2_C");

	return Clss;
}


// Scout_PowerAttack2_C Scout_PowerAttack2.Default__Scout_PowerAttack2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_PowerAttack2_C* UScout_PowerAttack2_C::GetDefaultObj()
{
	static class UScout_PowerAttack2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_PowerAttack2_C*>(UScout_PowerAttack2_C::StaticClass()->DefaultObject);

	return Default;
}

}


