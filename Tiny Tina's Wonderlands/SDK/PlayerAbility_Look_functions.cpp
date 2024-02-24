#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_Look.PlayerAbility_Look_C
// (None)

class UClass* UPlayerAbility_Look_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_Look_C");

	return Clss;
}


// PlayerAbility_Look_C PlayerAbility_Look.Default__PlayerAbility_Look_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_Look_C* UPlayerAbility_Look_C::GetDefaultObj()
{
	static class UPlayerAbility_Look_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_Look_C*>(UPlayerAbility_Look_C::StaticClass()->DefaultObject);

	return Default;
}

}


