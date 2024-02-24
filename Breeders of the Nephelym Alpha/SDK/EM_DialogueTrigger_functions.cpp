#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_DialogueTrigger.EM_DialogueTrigger_C
// (Actor)

class UClass* AEM_DialogueTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_DialogueTrigger_C");

	return Clss;
}


// EM_DialogueTrigger_C EM_DialogueTrigger.Default__EM_DialogueTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_DialogueTrigger_C* AEM_DialogueTrigger_C::GetDefaultObj()
{
	static class AEM_DialogueTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_DialogueTrigger_C*>(AEM_DialogueTrigger_C::StaticClass()->DefaultObject);

	return Default;
}

}


