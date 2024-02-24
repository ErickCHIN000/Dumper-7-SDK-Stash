#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedHT_G.LiftedHT_G_C
// (None)

class UClass* ULiftedHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedHT_G_C");

	return Clss;
}


// LiftedHT_G_C LiftedHT_G.Default__LiftedHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedHT_G_C* ULiftedHT_G_C::GetDefaultObj()
{
	static class ULiftedHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedHT_G_C*>(ULiftedHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


