#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effect_Thirsty_Dehydration.Effect_Thirsty_Dehydration_C
// (Actor)

class UClass* AEffect_Thirsty_Dehydration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effect_Thirsty_Dehydration_C");

	return Clss;
}


// Effect_Thirsty_Dehydration_C Effect_Thirsty_Dehydration.Default__Effect_Thirsty_Dehydration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffect_Thirsty_Dehydration_C* AEffect_Thirsty_Dehydration_C::GetDefaultObj()
{
	static class AEffect_Thirsty_Dehydration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffect_Thirsty_Dehydration_C*>(AEffect_Thirsty_Dehydration_C::StaticClass()->DefaultObject);

	return Default;
}

}


