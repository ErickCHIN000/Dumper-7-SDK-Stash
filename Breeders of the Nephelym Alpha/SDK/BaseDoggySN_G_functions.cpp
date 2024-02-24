#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggySN_G.BaseDoggySN_G_C
// (None)

class UClass* UBaseDoggySN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggySN_G_C");

	return Clss;
}


// BaseDoggySN_G_C BaseDoggySN_G.Default__BaseDoggySN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggySN_G_C* UBaseDoggySN_G_C::GetDefaultObj()
{
	static class UBaseDoggySN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggySN_G_C*>(UBaseDoggySN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


