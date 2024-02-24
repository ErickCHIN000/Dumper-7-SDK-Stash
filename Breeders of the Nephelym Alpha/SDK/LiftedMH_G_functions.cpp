#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedMH_G.LiftedMH_G_C
// (None)

class UClass* ULiftedMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedMH_G_C");

	return Clss;
}


// LiftedMH_G_C LiftedMH_G.Default__LiftedMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedMH_G_C* ULiftedMH_G_C::GetDefaultObj()
{
	static class ULiftedMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedMH_G_C*>(ULiftedMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


