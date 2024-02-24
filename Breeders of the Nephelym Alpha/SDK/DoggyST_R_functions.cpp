#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DoggyST_R.DoggyST_R_C
// (None)

class UClass* UDoggyST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DoggyST_R_C");

	return Clss;
}


// DoggyST_R_C DoggyST_R.Default__DoggyST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDoggyST_R_C* UDoggyST_R_C::GetDefaultObj()
{
	static class UDoggyST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDoggyST_R_C*>(UDoggyST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


