#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamagedBenelliM4.BP_DamagedBenelliM4_C
// (Actor)

class UClass* ABP_DamagedBenelliM4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamagedBenelliM4_C");

	return Clss;
}


// BP_DamagedBenelliM4_C BP_DamagedBenelliM4.Default__BP_DamagedBenelliM4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DamagedBenelliM4_C* ABP_DamagedBenelliM4_C::GetDefaultObj()
{
	static class ABP_DamagedBenelliM4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DamagedBenelliM4_C*>(ABP_DamagedBenelliM4_C::StaticClass()->DefaultObject);

	return Default;
}

}


