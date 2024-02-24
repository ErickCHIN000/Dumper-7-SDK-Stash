#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tentacle_NM_G.Tentacle_NM_G_C
// (None)

class UClass* UTentacle_NM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tentacle_NM_G_C");

	return Clss;
}


// Tentacle_NM_G_C Tentacle_NM_G.Default__Tentacle_NM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTentacle_NM_G_C* UTentacle_NM_G_C::GetDefaultObj()
{
	static class UTentacle_NM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTentacle_NM_G_C*>(UTentacle_NM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


