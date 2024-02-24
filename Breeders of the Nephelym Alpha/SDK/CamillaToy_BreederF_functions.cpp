#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaToy_BreederF.CamillaToy_BreederF_C
// (None)

class UClass* UCamillaToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaToy_BreederF_C");

	return Clss;
}


// CamillaToy_BreederF_C CamillaToy_BreederF.Default__CamillaToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaToy_BreederF_C* UCamillaToy_BreederF_C::GetDefaultObj()
{
	static class UCamillaToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaToy_BreederF_C*>(UCamillaToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


