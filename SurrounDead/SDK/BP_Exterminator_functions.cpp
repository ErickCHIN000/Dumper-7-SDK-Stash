#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Exterminator.BP_Exterminator_C
// (Actor)

class UClass* ABP_Exterminator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Exterminator_C");

	return Clss;
}


// BP_Exterminator_C BP_Exterminator.Default__BP_Exterminator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Exterminator_C* ABP_Exterminator_C::GetDefaultObj()
{
	static class ABP_Exterminator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Exterminator_C*>(ABP_Exterminator_C::StaticClass()->DefaultObject);

	return Default;
}

}


