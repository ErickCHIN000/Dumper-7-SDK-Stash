#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_WeakAttack.Scout_WeakAttack_C
// (None)

class UClass* UScout_WeakAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_WeakAttack_C");

	return Clss;
}


// Scout_WeakAttack_C Scout_WeakAttack.Default__Scout_WeakAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_WeakAttack_C* UScout_WeakAttack_C::GetDefaultObj()
{
	static class UScout_WeakAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_WeakAttack_C*>(UScout_WeakAttack_C::StaticClass()->DefaultObject);

	return Default;
}

}


