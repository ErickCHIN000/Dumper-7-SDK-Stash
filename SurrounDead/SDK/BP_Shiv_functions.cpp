#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shiv.BP_Shiv_C
// (Actor)

class UClass* ABP_Shiv_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shiv_C");

	return Clss;
}


// BP_Shiv_C BP_Shiv.Default__BP_Shiv_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shiv_C* ABP_Shiv_C::GetDefaultObj()
{
	static class ABP_Shiv_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shiv_C*>(ABP_Shiv_C::StaticClass()->DefaultObject);

	return Default;
}

}


