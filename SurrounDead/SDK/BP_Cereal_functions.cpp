#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Cereal.BP_Cereal_C
// (Actor)

class UClass* ABP_Cereal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Cereal_C");

	return Clss;
}


// BP_Cereal_C BP_Cereal.Default__BP_Cereal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Cereal_C* ABP_Cereal_C::GetDefaultObj()
{
	static class ABP_Cereal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Cereal_C*>(ABP_Cereal_C::StaticClass()->DefaultObject);

	return Default;
}

}


