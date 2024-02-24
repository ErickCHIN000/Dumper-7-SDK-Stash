#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShakeRight.ShakeRight_C
// (None)

class UClass* UShakeRight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShakeRight_C");

	return Clss;
}


// ShakeRight_C ShakeRight.Default__ShakeRight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShakeRight_C* UShakeRight_C::GetDefaultObj()
{
	static class UShakeRight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShakeRight_C*>(UShakeRight_C::StaticClass()->DefaultObject);

	return Default;
}

}


