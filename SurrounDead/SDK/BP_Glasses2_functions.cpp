#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Glasses2.BP_Glasses2_C
// (Actor)

class UClass* ABP_Glasses2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Glasses2_C");

	return Clss;
}


// BP_Glasses2_C BP_Glasses2.Default__BP_Glasses2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Glasses2_C* ABP_Glasses2_C::GetDefaultObj()
{
	static class ABP_Glasses2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Glasses2_C*>(ABP_Glasses2_C::StaticClass()->DefaultObject);

	return Default;
}

}


