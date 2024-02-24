#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_BodySexToy_RL_F.MirruDefault01_BodySexToy_RL_F_C
// (None)

class UClass* UMirruDefault01_BodySexToy_RL_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_BodySexToy_RL_F_C");

	return Clss;
}


// MirruDefault01_BodySexToy_RL_F_C MirruDefault01_BodySexToy_RL_F.Default__MirruDefault01_BodySexToy_RL_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_BodySexToy_RL_F_C* UMirruDefault01_BodySexToy_RL_F_C::GetDefaultObj()
{
	static class UMirruDefault01_BodySexToy_RL_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_BodySexToy_RL_F_C*>(UMirruDefault01_BodySexToy_RL_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


