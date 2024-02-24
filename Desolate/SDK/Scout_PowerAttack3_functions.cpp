#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_PowerAttack3.Scout_PowerAttack3_C
// (None)

class UClass* UScout_PowerAttack3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_PowerAttack3_C");

	return Clss;
}


// Scout_PowerAttack3_C Scout_PowerAttack3.Default__Scout_PowerAttack3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_PowerAttack3_C* UScout_PowerAttack3_C::GetDefaultObj()
{
	static class UScout_PowerAttack3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_PowerAttack3_C*>(UScout_PowerAttack3_C::StaticClass()->DefaultObject);

	return Default;
}

}


