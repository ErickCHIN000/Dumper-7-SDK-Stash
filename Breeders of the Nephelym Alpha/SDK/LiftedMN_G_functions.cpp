#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedMN_G.LiftedMN_G_C
// (None)

class UClass* ULiftedMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedMN_G_C");

	return Clss;
}


// LiftedMN_G_C LiftedMN_G.Default__LiftedMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedMN_G_C* ULiftedMN_G_C::GetDefaultObj()
{
	static class ULiftedMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedMN_G_C*>(ULiftedMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


