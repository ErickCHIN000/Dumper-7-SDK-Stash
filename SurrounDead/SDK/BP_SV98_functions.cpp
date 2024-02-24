#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SV98.BP_SV98_C
// (Actor)

class UClass* ABP_SV98_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SV98_C");

	return Clss;
}


// BP_SV98_C BP_SV98.Default__BP_SV98_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SV98_C* ABP_SV98_C::GetDefaultObj()
{
	static class ABP_SV98_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SV98_C*>(ABP_SV98_C::StaticClass()->DefaultObject);

	return Default;
}

}


