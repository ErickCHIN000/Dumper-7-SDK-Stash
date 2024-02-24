#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Player_OnDamaged.CS_Player_OnDamaged_C
// (None)

class UClass* UCS_Player_OnDamaged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Player_OnDamaged_C");

	return Clss;
}


// CS_Player_OnDamaged_C CS_Player_OnDamaged.Default__CS_Player_OnDamaged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Player_OnDamaged_C* UCS_Player_OnDamaged_C::GetDefaultObj()
{
	static class UCS_Player_OnDamaged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Player_OnDamaged_C*>(UCS_Player_OnDamaged_C::StaticClass()->DefaultObject);

	return Default;
}

}


