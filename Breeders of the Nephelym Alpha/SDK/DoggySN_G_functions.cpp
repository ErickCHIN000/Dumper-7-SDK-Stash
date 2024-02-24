#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggySN_G.DoggySN_G_C
// (None)

class UClass* UDoggySN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggySN_G_C");

	return Clss;
}


// DoggySN_G_C DoggySN_G.Default__DoggySN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggySN_G_C* UDoggySN_G_C::GetDefaultObj()
{
	static class UDoggySN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggySN_G_C*>(UDoggySN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


