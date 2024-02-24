#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Syringe.BP_Syringe_C
// (Actor)

class UClass* ABP_Syringe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Syringe_C");

	return Clss;
}


// BP_Syringe_C BP_Syringe.Default__BP_Syringe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Syringe_C* ABP_Syringe_C::GetDefaultObj()
{
	static class ABP_Syringe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Syringe_C*>(ABP_Syringe_C::StaticClass()->DefaultObject);

	return Default;
}

}


