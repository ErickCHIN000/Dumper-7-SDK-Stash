#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Crossbow.BP_Crossbow_C
// (Actor)

class UClass* ABP_Crossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Crossbow_C");

	return Clss;
}


// BP_Crossbow_C BP_Crossbow.Default__BP_Crossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Crossbow_C* ABP_Crossbow_C::GetDefaultObj()
{
	static class ABP_Crossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Crossbow_C*>(ABP_Crossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


