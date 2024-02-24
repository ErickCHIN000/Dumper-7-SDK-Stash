#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShakeOnHitObject.ShakeOnHitObject_C
// (None)

class UClass* UShakeOnHitObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShakeOnHitObject_C");

	return Clss;
}


// ShakeOnHitObject_C ShakeOnHitObject.Default__ShakeOnHitObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShakeOnHitObject_C* UShakeOnHitObject_C::GetDefaultObj()
{
	static class UShakeOnHitObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShakeOnHitObject_C*>(UShakeOnHitObject_C::StaticClass()->DefaultObject);

	return Default;
}

}


