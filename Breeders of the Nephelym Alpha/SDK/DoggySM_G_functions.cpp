#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggySM_G.DoggySM_G_C
// (None)

class UClass* UDoggySM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggySM_G_C");

	return Clss;
}


// DoggySM_G_C DoggySM_G.Default__DoggySM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggySM_G_C* UDoggySM_G_C::GetDefaultObj()
{
	static class UDoggySM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggySM_G_C*>(UDoggySM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


