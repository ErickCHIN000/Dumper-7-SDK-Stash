#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_BaseAttack2.Scout_BaseAttack2_C
// (None)

class UClass* UScout_BaseAttack2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_BaseAttack2_C");

	return Clss;
}


// Scout_BaseAttack2_C Scout_BaseAttack2.Default__Scout_BaseAttack2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_BaseAttack2_C* UScout_BaseAttack2_C::GetDefaultObj()
{
	static class UScout_BaseAttack2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_BaseAttack2_C*>(UScout_BaseAttack2_C::StaticClass()->DefaultObject);

	return Default;
}

}


