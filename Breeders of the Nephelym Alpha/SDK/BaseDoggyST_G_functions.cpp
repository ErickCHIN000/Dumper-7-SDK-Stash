#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyST_G.BaseDoggyST_G_C
// (None)

class UClass* UBaseDoggyST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyST_G_C");

	return Clss;
}


// BaseDoggyST_G_C BaseDoggyST_G.Default__BaseDoggyST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyST_G_C* UBaseDoggyST_G_C::GetDefaultObj()
{
	static class UBaseDoggyST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyST_G_C*>(UBaseDoggyST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


