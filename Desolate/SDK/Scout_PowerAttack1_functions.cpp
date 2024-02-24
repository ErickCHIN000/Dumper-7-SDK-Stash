#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_PowerAttack1.Scout_PowerAttack1_C
// (None)

class UClass* UScout_PowerAttack1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_PowerAttack1_C");

	return Clss;
}


// Scout_PowerAttack1_C Scout_PowerAttack1.Default__Scout_PowerAttack1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_PowerAttack1_C* UScout_PowerAttack1_C::GetDefaultObj()
{
	static class UScout_PowerAttack1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_PowerAttack1_C*>(UScout_PowerAttack1_C::StaticClass()->DefaultObject);

	return Default;
}

}


