#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Glasses.BP_Glasses_C
// (Actor)

class UClass* ABP_Glasses_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Glasses_C");

	return Clss;
}


// BP_Glasses_C BP_Glasses.Default__BP_Glasses_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Glasses_C* ABP_Glasses_C::GetDefaultObj()
{
	static class ABP_Glasses_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Glasses_C*>(ABP_Glasses_C::StaticClass()->DefaultObject);

	return Default;
}

}


