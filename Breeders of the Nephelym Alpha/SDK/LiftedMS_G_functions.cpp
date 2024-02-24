#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedMS_G.LiftedMS_G_C
// (None)

class UClass* ULiftedMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedMS_G_C");

	return Clss;
}


// LiftedMS_G_C LiftedMS_G.Default__LiftedMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedMS_G_C* ULiftedMS_G_C::GetDefaultObj()
{
	static class ULiftedMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedMS_G_C*>(ULiftedMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


