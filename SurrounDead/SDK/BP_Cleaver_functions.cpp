#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Cleaver.BP_Cleaver_C
// (Actor)

class UClass* ABP_Cleaver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Cleaver_C");

	return Clss;
}


// BP_Cleaver_C BP_Cleaver.Default__BP_Cleaver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Cleaver_C* ABP_Cleaver_C::GetDefaultObj()
{
	static class ABP_Cleaver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Cleaver_C*>(ABP_Cleaver_C::StaticClass()->DefaultObject);

	return Default;
}

}


