#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalVectorMag.BP_LocalVectorMag_C
// (Actor)

class UClass* ABP_LocalVectorMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalVectorMag_C");

	return Clss;
}


// BP_LocalVectorMag_C BP_LocalVectorMag.Default__BP_LocalVectorMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalVectorMag_C* ABP_LocalVectorMag_C::GetDefaultObj()
{
	static class ABP_LocalVectorMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalVectorMag_C*>(ABP_LocalVectorMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


