#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedML_G.LiftedML_G_C
// (None)

class UClass* ULiftedML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedML_G_C");

	return Clss;
}


// LiftedML_G_C LiftedML_G.Default__LiftedML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedML_G_C* ULiftedML_G_C::GetDefaultObj()
{
	static class ULiftedML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedML_G_C*>(ULiftedML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


