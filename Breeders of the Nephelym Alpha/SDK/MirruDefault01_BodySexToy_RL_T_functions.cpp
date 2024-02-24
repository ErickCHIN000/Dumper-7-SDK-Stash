#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_BodySexToy_RL_T.MirruDefault01_BodySexToy_RL_T_C
// (None)

class UClass* UMirruDefault01_BodySexToy_RL_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_BodySexToy_RL_T_C");

	return Clss;
}


// MirruDefault01_BodySexToy_RL_T_C MirruDefault01_BodySexToy_RL_T.Default__MirruDefault01_BodySexToy_RL_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_BodySexToy_RL_T_C* UMirruDefault01_BodySexToy_RL_T_C::GetDefaultObj()
{
	static class UMirruDefault01_BodySexToy_RL_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_BodySexToy_RL_T_C*>(UMirruDefault01_BodySexToy_RL_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


