#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryJacketBlack.BP_MilitaryJacketBlack_C
// (Actor)

class UClass* ABP_MilitaryJacketBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryJacketBlack_C");

	return Clss;
}


// BP_MilitaryJacketBlack_C BP_MilitaryJacketBlack.Default__BP_MilitaryJacketBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryJacketBlack_C* ABP_MilitaryJacketBlack_C::GetDefaultObj()
{
	static class ABP_MilitaryJacketBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryJacketBlack_C*>(ABP_MilitaryJacketBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


