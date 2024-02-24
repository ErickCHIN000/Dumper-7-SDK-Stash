#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_BlockAttack.Scout_BlockAttack_C
// (None)

class UClass* UScout_BlockAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_BlockAttack_C");

	return Clss;
}


// Scout_BlockAttack_C Scout_BlockAttack.Default__Scout_BlockAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_BlockAttack_C* UScout_BlockAttack_C::GetDefaultObj()
{
	static class UScout_BlockAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_BlockAttack_C*>(UScout_BlockAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


