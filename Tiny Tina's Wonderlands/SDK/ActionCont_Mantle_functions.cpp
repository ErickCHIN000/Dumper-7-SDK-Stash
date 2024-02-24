#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionCont_Mantle.ActionCont_Mantle_C
// (None)

class UClass* UActionCont_Mantle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionCont_Mantle_C");

	return Clss;
}


// ActionCont_Mantle_C ActionCont_Mantle.Default__ActionCont_Mantle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionCont_Mantle_C* UActionCont_Mantle_C::GetDefaultObj()
{
	static class UActionCont_Mantle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionCont_Mantle_C*>(UActionCont_Mantle_C::StaticClass()->DefaultObject);

	return Default;
}

}


