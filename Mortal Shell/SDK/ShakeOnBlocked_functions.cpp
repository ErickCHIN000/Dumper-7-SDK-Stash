#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShakeOnBlocked.ShakeOnBlocked_C
// (None)

class UClass* UShakeOnBlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShakeOnBlocked_C");

	return Clss;
}


// ShakeOnBlocked_C ShakeOnBlocked.Default__ShakeOnBlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShakeOnBlocked_C* UShakeOnBlocked_C::GetDefaultObj()
{
	static class UShakeOnBlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShakeOnBlocked_C*>(UShakeOnBlocked_C::StaticClass()->DefaultObject);

	return Default;
}

}


