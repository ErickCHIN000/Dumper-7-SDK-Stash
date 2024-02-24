#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Ammo.LL_Ammo_C
// (Actor)

class UClass* ALL_Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Ammo_C");

	return Clss;
}


// LL_Ammo_C LL_Ammo.Default__LL_Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Ammo_C* ALL_Ammo_C::GetDefaultObj()
{
	static class ALL_Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Ammo_C*>(ALL_Ammo_C::StaticClass()->DefaultObject);

	return Default;
}

}


