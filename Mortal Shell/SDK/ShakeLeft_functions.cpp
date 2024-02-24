#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShakeLeft.ShakeLeft_C
// (None)

class UClass* UShakeLeft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShakeLeft_C");

	return Clss;
}


// ShakeLeft_C ShakeLeft.Default__ShakeLeft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShakeLeft_C* UShakeLeft_C::GetDefaultObj()
{
	static class UShakeLeft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShakeLeft_C*>(UShakeLeft_C::StaticClass()->DefaultObject);

	return Default;
}

}


