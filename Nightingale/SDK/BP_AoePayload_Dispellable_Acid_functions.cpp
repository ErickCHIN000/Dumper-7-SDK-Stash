#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AoePayload_Dispellable_Acid.BP_AoePayload_Dispellable_Acid_C
// (Actor)

class UClass* ABP_AoePayload_Dispellable_Acid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AoePayload_Dispellable_Acid_C");

	return Clss;
}


// BP_AoePayload_Dispellable_Acid_C BP_AoePayload_Dispellable_Acid.Default__BP_AoePayload_Dispellable_Acid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AoePayload_Dispellable_Acid_C* ABP_AoePayload_Dispellable_Acid_C::GetDefaultObj()
{
	static class ABP_AoePayload_Dispellable_Acid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AoePayload_Dispellable_Acid_C*>(ABP_AoePayload_Dispellable_Acid_C::StaticClass()->DefaultObject);

	return Default;
}

}


