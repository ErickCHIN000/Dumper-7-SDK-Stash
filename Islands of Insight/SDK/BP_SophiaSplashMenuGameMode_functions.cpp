#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SophiaSplashMenuGameMode.BP_SophiaSplashMenuGameMode_C
// (Actor)

class UClass* ABP_SophiaSplashMenuGameMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SophiaSplashMenuGameMode_C");

	return Clss;
}


// BP_SophiaSplashMenuGameMode_C BP_SophiaSplashMenuGameMode.Default__BP_SophiaSplashMenuGameMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SophiaSplashMenuGameMode_C* ABP_SophiaSplashMenuGameMode_C::GetDefaultObj()
{
	static class ABP_SophiaSplashMenuGameMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SophiaSplashMenuGameMode_C*>(ABP_SophiaSplashMenuGameMode_C::StaticClass()->DefaultObject);

	return Default;
}

}


