#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaToy_BreederT.CamillaToy_BreederT_C
// (None)

class UClass* UCamillaToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaToy_BreederT_C");

	return Clss;
}


// CamillaToy_BreederT_C CamillaToy_BreederT.Default__CamillaToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaToy_BreederT_C* UCamillaToy_BreederT_C::GetDefaultObj()
{
	static class UCamillaToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaToy_BreederT_C*>(UCamillaToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


