#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedHS_G.LiftedHS_G_C
// (None)

class UClass* ULiftedHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedHS_G_C");

	return Clss;
}


// LiftedHS_G_C LiftedHS_G.Default__LiftedHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedHS_G_C* ULiftedHS_G_C::GetDefaultObj()
{
	static class ULiftedHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedHS_G_C*>(ULiftedHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


