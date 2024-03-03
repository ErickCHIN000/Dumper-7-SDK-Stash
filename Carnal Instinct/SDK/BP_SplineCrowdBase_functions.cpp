#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SplineCrowdBase.BP_SplineCrowdBase_C
// (Actor, Pawn)

class UClass* ABP_SplineCrowdBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SplineCrowdBase_C");

	return Clss;
}


// BP_SplineCrowdBase_C BP_SplineCrowdBase.Default__BP_SplineCrowdBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SplineCrowdBase_C* ABP_SplineCrowdBase_C::GetDefaultObj()
{
	static class ABP_SplineCrowdBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SplineCrowdBase_C*>(ABP_SplineCrowdBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


