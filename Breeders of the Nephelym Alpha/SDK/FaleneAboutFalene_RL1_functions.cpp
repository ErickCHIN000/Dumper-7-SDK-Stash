#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneAboutFalene_RL1.FaleneAboutFalene_RL1_C
// (None)

class UClass* UFaleneAboutFalene_RL1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneAboutFalene_RL1_C");

	return Clss;
}


// FaleneAboutFalene_RL1_C FaleneAboutFalene_RL1.Default__FaleneAboutFalene_RL1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneAboutFalene_RL1_C* UFaleneAboutFalene_RL1_C::GetDefaultObj()
{
	static class UFaleneAboutFalene_RL1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneAboutFalene_RL1_C*>(UFaleneAboutFalene_RL1_C::StaticClass()->DefaultObject);

	return Default;
}

}


