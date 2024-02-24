#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElementalEffectCollection_Buffmeister_Start.ElementalEffectCollection_Buffmeister_Start_C
// (None)

class UClass* UElementalEffectCollection_Buffmeister_Start_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElementalEffectCollection_Buffmeister_Start_C");

	return Clss;
}


// ElementalEffectCollection_Buffmeister_Start_C ElementalEffectCollection_Buffmeister_Start.Default__ElementalEffectCollection_Buffmeister_Start_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UElementalEffectCollection_Buffmeister_Start_C* UElementalEffectCollection_Buffmeister_Start_C::GetDefaultObj()
{
	static class UElementalEffectCollection_Buffmeister_Start_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UElementalEffectCollection_Buffmeister_Start_C*>(UElementalEffectCollection_Buffmeister_Start_C::StaticClass()->DefaultObject);

	return Default;
}

}


