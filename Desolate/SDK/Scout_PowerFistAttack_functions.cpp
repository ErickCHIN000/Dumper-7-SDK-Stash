#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_PowerFistAttack.Scout_PowerFistAttack_C
// (None)

class UClass* UScout_PowerFistAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_PowerFistAttack_C");

	return Clss;
}


// Scout_PowerFistAttack_C Scout_PowerFistAttack.Default__Scout_PowerFistAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_PowerFistAttack_C* UScout_PowerFistAttack_C::GetDefaultObj()
{
	static class UScout_PowerFistAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_PowerFistAttack_C*>(UScout_PowerFistAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


