#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_BaseAttack3.Scout_BaseAttack3_C
// (None)

class UClass* UScout_BaseAttack3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_BaseAttack3_C");

	return Clss;
}


// Scout_BaseAttack3_C Scout_BaseAttack3.Default__Scout_BaseAttack3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_BaseAttack3_C* UScout_BaseAttack3_C::GetDefaultObj()
{
	static class UScout_BaseAttack3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_BaseAttack3_C*>(UScout_BaseAttack3_C::StaticClass()->DefaultObject);

	return Default;
}

}


