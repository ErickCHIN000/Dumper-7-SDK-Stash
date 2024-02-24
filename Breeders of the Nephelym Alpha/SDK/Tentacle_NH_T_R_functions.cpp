#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tentacle_NH_T_R.Tentacle_NH_T_R_C
// (None)

class UClass* UTentacle_NH_T_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tentacle_NH_T_R_C");

	return Clss;
}


// Tentacle_NH_T_R_C Tentacle_NH_T_R.Default__Tentacle_NH_T_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTentacle_NH_T_R_C* UTentacle_NH_T_R_C::GetDefaultObj()
{
	static class UTentacle_NH_T_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTentacle_NH_T_R_C*>(UTentacle_NH_T_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


