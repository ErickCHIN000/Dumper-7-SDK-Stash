#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggySL_G.BaseDoggySL_G_C
// (None)

class UClass* UBaseDoggySL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggySL_G_C");

	return Clss;
}


// BaseDoggySL_G_C BaseDoggySL_G.Default__BaseDoggySL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggySL_G_C* UBaseDoggySL_G_C::GetDefaultObj()
{
	static class UBaseDoggySL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggySL_G_C*>(UBaseDoggySL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


