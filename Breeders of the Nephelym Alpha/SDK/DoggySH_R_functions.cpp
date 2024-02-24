#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggySH_R.DoggySH_R_C
// (None)

class UClass* UDoggySH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggySH_R_C");

	return Clss;
}


// DoggySH_R_C DoggySH_R.Default__DoggySH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggySH_R_C* UDoggySH_R_C::GetDefaultObj()
{
	static class UDoggySH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggySH_R_C*>(UDoggySH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


