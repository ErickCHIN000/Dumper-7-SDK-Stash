#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SmallBackpack.BP_SmallBackpack_C
// (Actor)

class UClass* ABP_SmallBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SmallBackpack_C");

	return Clss;
}


// BP_SmallBackpack_C BP_SmallBackpack.Default__BP_SmallBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SmallBackpack_C* ABP_SmallBackpack_C::GetDefaultObj()
{
	static class ABP_SmallBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SmallBackpack_C*>(ABP_SmallBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


