#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedNT_G.LiftedNT_G_C
// (None)

class UClass* ULiftedNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedNT_G_C");

	return Clss;
}


// LiftedNT_G_C LiftedNT_G.Default__LiftedNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedNT_G_C* ULiftedNT_G_C::GetDefaultObj()
{
	static class ULiftedNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedNT_G_C*>(ULiftedNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


