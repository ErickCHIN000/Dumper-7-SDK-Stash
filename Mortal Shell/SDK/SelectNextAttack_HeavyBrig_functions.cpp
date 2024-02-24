#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SelectNextAttack_HeavyBrig.SelectNextAttack_HeavyBrig_C
// (None)

class UClass* USelectNextAttack_HeavyBrig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectNextAttack_HeavyBrig_C");

	return Clss;
}


// SelectNextAttack_HeavyBrig_C SelectNextAttack_HeavyBrig.Default__SelectNextAttack_HeavyBrig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USelectNextAttack_HeavyBrig_C* USelectNextAttack_HeavyBrig_C::GetDefaultObj()
{
	static class USelectNextAttack_HeavyBrig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USelectNextAttack_HeavyBrig_C*>(USelectNextAttack_HeavyBrig_C::StaticClass()->DefaultObject);

	return Default;
}

}


