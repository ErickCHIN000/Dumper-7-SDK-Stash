#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConstructionHelmet.BP_ConstructionHelmet_C
// (Actor)

class UClass* ABP_ConstructionHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConstructionHelmet_C");

	return Clss;
}


// BP_ConstructionHelmet_C BP_ConstructionHelmet.Default__BP_ConstructionHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ConstructionHelmet_C* ABP_ConstructionHelmet_C::GetDefaultObj()
{
	static class ABP_ConstructionHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ConstructionHelmet_C*>(ABP_ConstructionHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


