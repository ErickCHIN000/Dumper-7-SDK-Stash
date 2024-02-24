#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass broken_shield_BP.broken_shield_BP_C
// (Actor)

class UClass* Abroken_shield_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("broken_shield_BP_C");

	return Clss;
}


// broken_shield_BP_C broken_shield_BP.Default__broken_shield_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abroken_shield_BP_C* Abroken_shield_BP_C::GetDefaultObj()
{
	static class Abroken_shield_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abroken_shield_BP_C*>(Abroken_shield_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


