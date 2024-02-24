#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AnimB_HMM_N.AnimB_HMM_N_C
// (None)

class UClass* UAnimB_HMM_N_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimB_HMM_N_C");

	return Clss;
}


// AnimB_HMM_N_C AnimB_HMM_N.Default__AnimB_HMM_N_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnimB_HMM_N_C* UAnimB_HMM_N_C::GetDefaultObj()
{
	static class UAnimB_HMM_N_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimB_HMM_N_C*>(UAnimB_HMM_N_C::StaticClass()->DefaultObject);

	return Default;
}

}


