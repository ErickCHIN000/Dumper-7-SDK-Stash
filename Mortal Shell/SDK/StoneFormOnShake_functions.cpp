#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StoneFormOnShake.StoneFormOnShake_C
// (None)

class UClass* UStoneFormOnShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StoneFormOnShake_C");

	return Clss;
}


// StoneFormOnShake_C StoneFormOnShake.Default__StoneFormOnShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStoneFormOnShake_C* UStoneFormOnShake_C::GetDefaultObj()
{
	static class UStoneFormOnShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStoneFormOnShake_C*>(UStoneFormOnShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


