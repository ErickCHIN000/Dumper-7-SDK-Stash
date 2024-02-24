#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GlovesBlack.BP_GlovesBlack_C
// (Actor)

class UClass* ABP_GlovesBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GlovesBlack_C");

	return Clss;
}


// BP_GlovesBlack_C BP_GlovesBlack.Default__BP_GlovesBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GlovesBlack_C* ABP_GlovesBlack_C::GetDefaultObj()
{
	static class ABP_GlovesBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GlovesBlack_C*>(ABP_GlovesBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


