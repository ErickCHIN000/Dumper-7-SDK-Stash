#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wood.BP_Wood_C
// (Actor)

class UClass* ABP_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wood_C");

	return Clss;
}


// BP_Wood_C BP_Wood.Default__BP_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wood_C* ABP_Wood_C::GetDefaultObj()
{
	static class ABP_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wood_C*>(ABP_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}

