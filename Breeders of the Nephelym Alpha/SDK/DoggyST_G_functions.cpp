#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyST_G.DoggyST_G_C
// (None)

class UClass* UDoggyST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyST_G_C");

	return Clss;
}


// DoggyST_G_C DoggyST_G.Default__DoggyST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyST_G_C* UDoggyST_G_C::GetDefaultObj()
{
	static class UDoggyST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyST_G_C*>(UDoggyST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


