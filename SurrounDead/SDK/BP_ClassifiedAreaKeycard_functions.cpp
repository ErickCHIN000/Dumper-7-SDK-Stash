#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ClassifiedAreaKeycard.BP_ClassifiedAreaKeycard_C
// (Actor)

class UClass* ABP_ClassifiedAreaKeycard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ClassifiedAreaKeycard_C");

	return Clss;
}


// BP_ClassifiedAreaKeycard_C BP_ClassifiedAreaKeycard.Default__BP_ClassifiedAreaKeycard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ClassifiedAreaKeycard_C* ABP_ClassifiedAreaKeycard_C::GetDefaultObj()
{
	static class ABP_ClassifiedAreaKeycard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ClassifiedAreaKeycard_C*>(ABP_ClassifiedAreaKeycard_C::StaticClass()->DefaultObject);

	return Default;
}

}


