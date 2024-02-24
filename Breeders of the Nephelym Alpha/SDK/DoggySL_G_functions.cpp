#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggySL_G.DoggySL_G_C
// (None)

class UClass* UDoggySL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggySL_G_C");

	return Clss;
}


// DoggySL_G_C DoggySL_G.Default__DoggySL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggySL_G_C* UDoggySL_G_C::GetDefaultObj()
{
	static class UDoggySL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggySL_G_C*>(UDoggySL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


