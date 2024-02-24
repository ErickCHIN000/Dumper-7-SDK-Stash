#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggySN_R.DoggySN_R_C
// (None)

class UClass* UDoggySN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggySN_R_C");

	return Clss;
}


// DoggySN_R_C DoggySN_R.Default__DoggySN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggySN_R_C* UDoggySN_R_C::GetDefaultObj()
{
	static class UDoggySN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggySN_R_C*>(UDoggySN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


