#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_Move.PlayerAbility_Move_C
// (None)

class UClass* UPlayerAbility_Move_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_Move_C");

	return Clss;
}


// PlayerAbility_Move_C PlayerAbility_Move.Default__PlayerAbility_Move_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_Move_C* UPlayerAbility_Move_C::GetDefaultObj()
{
	static class UPlayerAbility_Move_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_Move_C*>(UPlayerAbility_Move_C::StaticClass()->DefaultObject);

	return Default;
}

}


