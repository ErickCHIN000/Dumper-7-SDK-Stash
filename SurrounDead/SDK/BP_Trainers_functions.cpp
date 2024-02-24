#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Trainers.BP_Trainers_C
// (Actor)

class UClass* ABP_Trainers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Trainers_C");

	return Clss;
}


// BP_Trainers_C BP_Trainers.Default__BP_Trainers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Trainers_C* ABP_Trainers_C::GetDefaultObj()
{
	static class ABP_Trainers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Trainers_C*>(ABP_Trainers_C::StaticClass()->DefaultObject);

	return Default;
}

}


