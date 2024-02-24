#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VectorMag.BP_VectorMag_C
// (Actor)

class UClass* ABP_VectorMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VectorMag_C");

	return Clss;
}


// BP_VectorMag_C BP_VectorMag.Default__BP_VectorMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VectorMag_C* ABP_VectorMag_C::GetDefaultObj()
{
	static class ABP_VectorMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VectorMag_C*>(ABP_VectorMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


