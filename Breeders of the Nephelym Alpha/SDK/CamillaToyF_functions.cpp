#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaToyF.CamillaToyF_C
// (None)

class UClass* UCamillaToyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaToyF_C");

	return Clss;
}


// CamillaToyF_C CamillaToyF.Default__CamillaToyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaToyF_C* UCamillaToyF_C::GetDefaultObj()
{
	static class UCamillaToyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaToyF_C*>(UCamillaToyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


