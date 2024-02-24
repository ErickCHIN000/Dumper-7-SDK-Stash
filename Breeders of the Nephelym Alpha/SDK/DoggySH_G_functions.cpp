#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggySH_G.DoggySH_G_C
// (None)

class UClass* UDoggySH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggySH_G_C");

	return Clss;
}


// DoggySH_G_C DoggySH_G.Default__DoggySH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggySH_G_C* UDoggySH_G_C::GetDefaultObj()
{
	static class UDoggySH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggySH_G_C*>(UDoggySH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


