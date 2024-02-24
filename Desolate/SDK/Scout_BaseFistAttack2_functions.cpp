#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_BaseFistAttack2.Scout_BaseFistAttack2_C
// (None)

class UClass* UScout_BaseFistAttack2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_BaseFistAttack2_C");

	return Clss;
}


// Scout_BaseFistAttack2_C Scout_BaseFistAttack2.Default__Scout_BaseFistAttack2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_BaseFistAttack2_C* UScout_BaseFistAttack2_C::GetDefaultObj()
{
	static class UScout_BaseFistAttack2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_BaseFistAttack2_C*>(UScout_BaseFistAttack2_C::StaticClass()->DefaultObject);

	return Default;
}

}


