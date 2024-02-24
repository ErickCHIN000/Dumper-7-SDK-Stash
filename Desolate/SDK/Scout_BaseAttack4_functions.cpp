#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_BaseAttack4.Scout_BaseAttack4_C
// (None)

class UClass* UScout_BaseAttack4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_BaseAttack4_C");

	return Clss;
}


// Scout_BaseAttack4_C Scout_BaseAttack4.Default__Scout_BaseAttack4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_BaseAttack4_C* UScout_BaseAttack4_C::GetDefaultObj()
{
	static class UScout_BaseAttack4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_BaseAttack4_C*>(UScout_BaseAttack4_C::StaticClass()->DefaultObject);

	return Default;
}

}


