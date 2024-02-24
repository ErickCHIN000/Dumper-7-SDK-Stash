#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Can2.BP_Can2_C
// (Actor)

class UClass* ABP_Can2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Can2_C");

	return Clss;
}


// BP_Can2_C BP_Can2.Default__BP_Can2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Can2_C* ABP_Can2_C::GetDefaultObj()
{
	static class ABP_Can2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Can2_C*>(ABP_Can2_C::StaticClass()->DefaultObject);

	return Default;
}

}


