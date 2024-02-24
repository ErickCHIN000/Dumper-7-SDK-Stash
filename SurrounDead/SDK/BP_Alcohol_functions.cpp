#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Alcohol.BP_Alcohol_C
// (Actor)

class UClass* ABP_Alcohol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Alcohol_C");

	return Clss;
}


// BP_Alcohol_C BP_Alcohol.Default__BP_Alcohol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Alcohol_C* ABP_Alcohol_C::GetDefaultObj()
{
	static class ABP_Alcohol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Alcohol_C*>(ABP_Alcohol_C::StaticClass()->DefaultObject);

	return Default;
}

}


