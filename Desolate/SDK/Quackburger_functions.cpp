#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Quackburger.Quackburger_C
// (Actor)

class UClass* AQuackburger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Quackburger_C");

	return Clss;
}


// Quackburger_C Quackburger.Default__Quackburger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AQuackburger_C* AQuackburger_C::GetDefaultObj()
{
	static class AQuackburger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AQuackburger_C*>(AQuackburger_C::StaticClass()->DefaultObject);

	return Default;
}

}


