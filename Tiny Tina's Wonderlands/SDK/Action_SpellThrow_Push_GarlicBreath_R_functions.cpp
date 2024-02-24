#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SpellThrow_Push_GarlicBreath_R.Action_SpellThrow_Push_GarlicBreath_R_C
// (None)

class UClass* UAction_SpellThrow_Push_GarlicBreath_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SpellThrow_Push_GarlicBreath_R_C");

	return Clss;
}


// Action_SpellThrow_Push_GarlicBreath_R_C Action_SpellThrow_Push_GarlicBreath_R.Default__Action_SpellThrow_Push_GarlicBreath_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SpellThrow_Push_GarlicBreath_R_C* UAction_SpellThrow_Push_GarlicBreath_R_C::GetDefaultObj()
{
	static class UAction_SpellThrow_Push_GarlicBreath_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SpellThrow_Push_GarlicBreath_R_C*>(UAction_SpellThrow_Push_GarlicBreath_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


