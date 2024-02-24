#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaFaleneWeek.CamillaFaleneWeek_C
// (None)

class UClass* UCamillaFaleneWeek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaFaleneWeek_C");

	return Clss;
}


// CamillaFaleneWeek_C CamillaFaleneWeek.Default__CamillaFaleneWeek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaFaleneWeek_C* UCamillaFaleneWeek_C::GetDefaultObj()
{
	static class UCamillaFaleneWeek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaFaleneWeek_C*>(UCamillaFaleneWeek_C::StaticClass()->DefaultObject);

	return Default;
}

}


