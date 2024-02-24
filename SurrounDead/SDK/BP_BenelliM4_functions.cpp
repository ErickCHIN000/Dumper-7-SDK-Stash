#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BenelliM4.BP_BenelliM4_C
// (Actor)

class UClass* ABP_BenelliM4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BenelliM4_C");

	return Clss;
}


// BP_BenelliM4_C BP_BenelliM4.Default__BP_BenelliM4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BenelliM4_C* ABP_BenelliM4_C::GetDefaultObj()
{
	static class ABP_BenelliM4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BenelliM4_C*>(ABP_BenelliM4_C::StaticClass()->DefaultObject);

	return Default;
}

}


