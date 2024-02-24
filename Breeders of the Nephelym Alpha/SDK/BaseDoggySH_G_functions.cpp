#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggySH_G.BaseDoggySH_G_C
// (None)

class UClass* UBaseDoggySH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggySH_G_C");

	return Clss;
}


// BaseDoggySH_G_C BaseDoggySH_G.Default__BaseDoggySH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggySH_G_C* UBaseDoggySH_G_C::GetDefaultObj()
{
	static class UBaseDoggySH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggySH_G_C*>(UBaseDoggySH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


