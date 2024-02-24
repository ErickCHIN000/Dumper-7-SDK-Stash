#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Gun2.Gun2_C
// (Actor)

class UClass* AGun2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Gun2_C");

	return Clss;
}


// Gun2_C Gun2.Default__Gun2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGun2_C* AGun2_C::GetDefaultObj()
{
	static class AGun2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGun2_C*>(AGun2_C::StaticClass()->DefaultObject);

	return Default;
}

}


