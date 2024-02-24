#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_BaseAttack1.Scout_BaseAttack1_C
// (None)

class UClass* UScout_BaseAttack1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_BaseAttack1_C");

	return Clss;
}


// Scout_BaseAttack1_C Scout_BaseAttack1.Default__Scout_BaseAttack1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_BaseAttack1_C* UScout_BaseAttack1_C::GetDefaultObj()
{
	static class UScout_BaseAttack1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_BaseAttack1_C*>(UScout_BaseAttack1_C::StaticClass()->DefaultObject);

	return Default;
}

}


