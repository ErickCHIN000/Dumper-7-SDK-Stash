#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryJacket.BP_MilitaryJacket_C
// (Actor)

class UClass* ABP_MilitaryJacket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryJacket_C");

	return Clss;
}


// BP_MilitaryJacket_C BP_MilitaryJacket.Default__BP_MilitaryJacket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryJacket_C* ABP_MilitaryJacket_C::GetDefaultObj()
{
	static class ABP_MilitaryJacket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryJacket_C*>(ABP_MilitaryJacket_C::StaticClass()->DefaultObject);

	return Default;
}

}


