#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleRideYou_RL_T.KybeleRideYou_RL_T_C
// (None)

class UClass* UKybeleRideYou_RL_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleRideYou_RL_T_C");

	return Clss;
}


// KybeleRideYou_RL_T_C KybeleRideYou_RL_T.Default__KybeleRideYou_RL_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleRideYou_RL_T_C* UKybeleRideYou_RL_T_C::GetDefaultObj()
{
	static class UKybeleRideYou_RL_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleRideYou_RL_T_C*>(UKybeleRideYou_RL_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


