#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AlpineBackpack.BP_AlpineBackpack_C
// (Actor)

class UClass* ABP_AlpineBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AlpineBackpack_C");

	return Clss;
}


// BP_AlpineBackpack_C BP_AlpineBackpack.Default__BP_AlpineBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AlpineBackpack_C* ABP_AlpineBackpack_C::GetDefaultObj()
{
	static class ABP_AlpineBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AlpineBackpack_C*>(ABP_AlpineBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


