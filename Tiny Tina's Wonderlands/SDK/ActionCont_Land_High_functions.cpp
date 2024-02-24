#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionCont_Land_High.ActionCont_Land_High_C
// (None)

class UClass* UActionCont_Land_High_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionCont_Land_High_C");

	return Clss;
}


// ActionCont_Land_High_C ActionCont_Land_High.Default__ActionCont_Land_High_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionCont_Land_High_C* UActionCont_Land_High_C::GetDefaultObj()
{
	static class UActionCont_Land_High_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionCont_Land_High_C*>(UActionCont_Land_High_C::StaticClass()->DefaultObject);

	return Default;
}

}


