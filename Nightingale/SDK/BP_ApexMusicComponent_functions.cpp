#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ApexMusicComponent.BP_ApexMusicComponent_C
// (None)

class UClass* UBP_ApexMusicComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ApexMusicComponent_C");

	return Clss;
}


// BP_ApexMusicComponent_C BP_ApexMusicComponent.Default__BP_ApexMusicComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ApexMusicComponent_C* UBP_ApexMusicComponent_C::GetDefaultObj()
{
	static class UBP_ApexMusicComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ApexMusicComponent_C*>(UBP_ApexMusicComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


