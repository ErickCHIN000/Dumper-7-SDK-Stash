#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Binoculars.BP_Binoculars_C
// (Actor)

class UClass* ABP_Binoculars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Binoculars_C");

	return Clss;
}


// BP_Binoculars_C BP_Binoculars.Default__BP_Binoculars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Binoculars_C* ABP_Binoculars_C::GetDefaultObj()
{
	static class ABP_Binoculars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Binoculars_C*>(ABP_Binoculars_C::StaticClass()->DefaultObject);

	return Default;
}

}


