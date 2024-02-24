#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggySM_G.BaseDoggySM_G_C
// (None)

class UClass* UBaseDoggySM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggySM_G_C");

	return Clss;
}


// BaseDoggySM_G_C BaseDoggySM_G.Default__BaseDoggySM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggySM_G_C* UBaseDoggySM_G_C::GetDefaultObj()
{
	static class UBaseDoggySM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggySM_G_C*>(UBaseDoggySM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


