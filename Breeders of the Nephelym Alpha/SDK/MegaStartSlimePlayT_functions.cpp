#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaStartSlimePlayT.MegaStartSlimePlayT_C
// (None)

class UClass* UMegaStartSlimePlayT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaStartSlimePlayT_C");

	return Clss;
}


// MegaStartSlimePlayT_C MegaStartSlimePlayT.Default__MegaStartSlimePlayT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaStartSlimePlayT_C* UMegaStartSlimePlayT_C::GetDefaultObj()
{
	static class UMegaStartSlimePlayT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaStartSlimePlayT_C*>(UMegaStartSlimePlayT_C::StaticClass()->DefaultObject);

	return Default;
}

}


