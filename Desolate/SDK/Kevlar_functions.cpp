#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kevlar.Kevlar_C
// (Actor)

class UClass* AKevlar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kevlar_C");

	return Clss;
}


// Kevlar_C Kevlar.Default__Kevlar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKevlar_C* AKevlar_C::GetDefaultObj()
{
	static class AKevlar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKevlar_C*>(AKevlar_C::StaticClass()->DefaultObject);

	return Default;
}

}


