#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGMusicManager.BP_GGMusicManager_C
// (None)

class UClass* UBP_GGMusicManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGMusicManager_C");

	return Clss;
}


// BP_GGMusicManager_C BP_GGMusicManager.Default__BP_GGMusicManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GGMusicManager_C* UBP_GGMusicManager_C::GetDefaultObj()
{
	static class UBP_GGMusicManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GGMusicManager_C*>(UBP_GGMusicManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


