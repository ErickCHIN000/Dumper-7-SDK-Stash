#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CR308.BP_CR308_C
// (Actor)

class UClass* ABP_CR308_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CR308_C");

	return Clss;
}


// BP_CR308_C BP_CR308.Default__BP_CR308_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CR308_C* ABP_CR308_C::GetDefaultObj()
{
	static class ABP_CR308_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CR308_C*>(ABP_CR308_C::StaticClass()->DefaultObject);

	return Default;
}

}

