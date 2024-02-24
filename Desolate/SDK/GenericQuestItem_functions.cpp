#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericQuestItem.GenericQuestItem_C
// (Actor)

class UClass* AGenericQuestItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericQuestItem_C");

	return Clss;
}


// GenericQuestItem_C GenericQuestItem.Default__GenericQuestItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericQuestItem_C* AGenericQuestItem_C::GetDefaultObj()
{
	static class AGenericQuestItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericQuestItem_C*>(AGenericQuestItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


