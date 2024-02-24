#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaToyT.CamillaToyT_C
// (None)

class UClass* UCamillaToyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaToyT_C");

	return Clss;
}


// CamillaToyT_C CamillaToyT.Default__CamillaToyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaToyT_C* UCamillaToyT_C::GetDefaultObj()
{
	static class UCamillaToyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaToyT_C*>(UCamillaToyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


