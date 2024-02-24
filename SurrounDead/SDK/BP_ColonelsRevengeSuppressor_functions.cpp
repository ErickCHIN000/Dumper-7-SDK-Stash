#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ColonelsRevengeSuppressor.BP_ColonelsRevengeSuppressor_C
// (Actor)

class UClass* ABP_ColonelsRevengeSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ColonelsRevengeSuppressor_C");

	return Clss;
}


// BP_ColonelsRevengeSuppressor_C BP_ColonelsRevengeSuppressor.Default__BP_ColonelsRevengeSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ColonelsRevengeSuppressor_C* ABP_ColonelsRevengeSuppressor_C::GetDefaultObj()
{
	static class ABP_ColonelsRevengeSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ColonelsRevengeSuppressor_C*>(ABP_ColonelsRevengeSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


