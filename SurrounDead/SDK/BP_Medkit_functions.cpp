#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Medkit.BP_Medkit_C
// (Actor)

class UClass* ABP_Medkit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Medkit_C");

	return Clss;
}


// BP_Medkit_C BP_Medkit.Default__BP_Medkit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Medkit_C* ABP_Medkit_C::GetDefaultObj()
{
	static class ABP_Medkit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Medkit_C*>(ABP_Medkit_C::StaticClass()->DefaultObject);

	return Default;
}

}


