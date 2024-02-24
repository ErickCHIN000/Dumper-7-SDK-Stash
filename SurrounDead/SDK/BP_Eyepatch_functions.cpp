#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Eyepatch.BP_Eyepatch_C
// (Actor)

class UClass* ABP_Eyepatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Eyepatch_C");

	return Clss;
}


// BP_Eyepatch_C BP_Eyepatch.Default__BP_Eyepatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Eyepatch_C* ABP_Eyepatch_C::GetDefaultObj()
{
	static class ABP_Eyepatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Eyepatch_C*>(ABP_Eyepatch_C::StaticClass()->DefaultObject);

	return Default;
}

}


