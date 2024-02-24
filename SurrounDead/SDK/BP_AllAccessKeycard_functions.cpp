#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AllAccessKeycard.BP_AllAccessKeycard_C
// (Actor)

class UClass* ABP_AllAccessKeycard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AllAccessKeycard_C");

	return Clss;
}


// BP_AllAccessKeycard_C BP_AllAccessKeycard.Default__BP_AllAccessKeycard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AllAccessKeycard_C* ABP_AllAccessKeycard_C::GetDefaultObj()
{
	static class ABP_AllAccessKeycard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AllAccessKeycard_C*>(ABP_AllAccessKeycard_C::StaticClass()->DefaultObject);

	return Default;
}

}


