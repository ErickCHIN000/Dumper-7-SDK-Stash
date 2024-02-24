#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalAcog.BP_LocalAcog_C
// (Actor)

class UClass* ABP_LocalAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalAcog_C");

	return Clss;
}


// BP_LocalAcog_C BP_LocalAcog.Default__BP_LocalAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalAcog_C* ABP_LocalAcog_C::GetDefaultObj()
{
	static class ABP_LocalAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalAcog_C*>(ABP_LocalAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}


