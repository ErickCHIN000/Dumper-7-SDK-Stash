#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggySM_R.DoggySM_R_C
// (None)

class UClass* UDoggySM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggySM_R_C");

	return Clss;
}


// DoggySM_R_C DoggySM_R.Default__DoggySM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggySM_R_C* UDoggySM_R_C::GetDefaultObj()
{
	static class UDoggySM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggySM_R_C*>(UDoggySM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


