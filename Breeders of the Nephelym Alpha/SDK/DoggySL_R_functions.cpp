#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggySL_R.DoggySL_R_C
// (None)

class UClass* UDoggySL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggySL_R_C");

	return Clss;
}


// DoggySL_R_C DoggySL_R.Default__DoggySL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggySL_R_C* UDoggySL_R_C::GetDefaultObj()
{
	static class UDoggySL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggySL_R_C*>(UDoggySL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


