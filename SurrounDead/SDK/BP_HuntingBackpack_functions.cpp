#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingBackpack.BP_HuntingBackpack_C
// (Actor)

class UClass* ABP_HuntingBackpack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingBackpack_C");

	return Clss;
}


// BP_HuntingBackpack_C BP_HuntingBackpack.Default__BP_HuntingBackpack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntingBackpack_C* ABP_HuntingBackpack_C::GetDefaultObj()
{
	static class ABP_HuntingBackpack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntingBackpack_C*>(ABP_HuntingBackpack_C::StaticClass()->DefaultObject);

	return Default;
}

}


