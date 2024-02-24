#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Famas.BP_Famas_C
// (Actor)

class UClass* ABP_Famas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Famas_C");

	return Clss;
}


// BP_Famas_C BP_Famas.Default__BP_Famas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Famas_C* ABP_Famas_C::GetDefaultObj()
{
	static class ABP_Famas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Famas_C*>(ABP_Famas_C::StaticClass()->DefaultObject);

	return Default;
}

}


