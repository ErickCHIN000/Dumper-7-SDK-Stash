#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StroneShakeVertical.StroneShakeVertical_C
// (None)

class UClass* UStroneShakeVertical_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StroneShakeVertical_C");

	return Clss;
}


// StroneShakeVertical_C StroneShakeVertical.Default__StroneShakeVertical_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStroneShakeVertical_C* UStroneShakeVertical_C::GetDefaultObj()
{
	static class UStroneShakeVertical_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStroneShakeVertical_C*>(UStroneShakeVertical_C::StaticClass()->DefaultObject);

	return Default;
}

}


