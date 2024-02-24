#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gunpowder.BP_Gunpowder_C
// (Actor)

class UClass* ABP_Gunpowder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gunpowder_C");

	return Clss;
}


// BP_Gunpowder_C BP_Gunpowder.Default__BP_Gunpowder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Gunpowder_C* ABP_Gunpowder_C::GetDefaultObj()
{
	static class ABP_Gunpowder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Gunpowder_C*>(ABP_Gunpowder_C::StaticClass()->DefaultObject);

	return Default;
}

}


