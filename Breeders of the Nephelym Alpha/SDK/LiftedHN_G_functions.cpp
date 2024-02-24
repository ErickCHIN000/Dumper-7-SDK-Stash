#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedHN_G.LiftedHN_G_C
// (None)

class UClass* ULiftedHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedHN_G_C");

	return Clss;
}


// LiftedHN_G_C LiftedHN_G.Default__LiftedHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedHN_G_C* ULiftedHN_G_C::GetDefaultObj()
{
	static class ULiftedHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedHN_G_C*>(ULiftedHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


