#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingKnife.BP_HuntingKnife_C
// (Actor)

class UClass* ABP_HuntingKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingKnife_C");

	return Clss;
}


// BP_HuntingKnife_C BP_HuntingKnife.Default__BP_HuntingKnife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntingKnife_C* ABP_HuntingKnife_C::GetDefaultObj()
{
	static class ABP_HuntingKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntingKnife_C*>(ABP_HuntingKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


