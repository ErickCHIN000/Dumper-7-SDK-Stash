#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedLT_G.LiftedLT_G_C
// (None)

class UClass* ULiftedLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedLT_G_C");

	return Clss;
}


// LiftedLT_G_C LiftedLT_G.Default__LiftedLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedLT_G_C* ULiftedLT_G_C::GetDefaultObj()
{
	static class ULiftedLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedLT_G_C*>(ULiftedLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


