#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SelectNextAttack_Vamp.SelectNextAttack_Vamp_C
// (None)

class UClass* USelectNextAttack_Vamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectNextAttack_Vamp_C");

	return Clss;
}


// SelectNextAttack_Vamp_C SelectNextAttack_Vamp.Default__SelectNextAttack_Vamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USelectNextAttack_Vamp_C* USelectNextAttack_Vamp_C::GetDefaultObj()
{
	static class USelectNextAttack_Vamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USelectNextAttack_Vamp_C*>(USelectNextAttack_Vamp_C::StaticClass()->DefaultObject);

	return Default;
}

}


