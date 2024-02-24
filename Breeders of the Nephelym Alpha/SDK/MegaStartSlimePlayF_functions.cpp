#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaStartSlimePlayF.MegaStartSlimePlayF_C
// (None)

class UClass* UMegaStartSlimePlayF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaStartSlimePlayF_C");

	return Clss;
}


// MegaStartSlimePlayF_C MegaStartSlimePlayF.Default__MegaStartSlimePlayF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaStartSlimePlayF_C* UMegaStartSlimePlayF_C::GetDefaultObj()
{
	static class UMegaStartSlimePlayF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaStartSlimePlayF_C*>(UMegaStartSlimePlayF_C::StaticClass()->DefaultObject);

	return Default;
}

}


