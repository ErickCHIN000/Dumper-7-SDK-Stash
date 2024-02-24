#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gun.Gun_C
// (Actor)

class UClass* AGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gun_C");

	return Clss;
}


// Gun_C Gun.Default__Gun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGun_C* AGun_C::GetDefaultObj()
{
	static class AGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGun_C*>(AGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


