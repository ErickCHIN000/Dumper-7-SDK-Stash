#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerFist.BP_PlayerFist_C
// (Actor)

class UClass* ABP_PlayerFist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerFist_C");

	return Clss;
}


// BP_PlayerFist_C BP_PlayerFist.Default__BP_PlayerFist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerFist_C* ABP_PlayerFist_C::GetDefaultObj()
{
	static class ABP_PlayerFist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerFist_C*>(ABP_PlayerFist_C::StaticClass()->DefaultObject);

	return Default;
}

}


