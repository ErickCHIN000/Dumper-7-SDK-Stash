#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PerkKnowledgeBook.PerkKnowledgeBook_C
// (Actor)

class UClass* APerkKnowledgeBook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerkKnowledgeBook_C");

	return Clss;
}


// PerkKnowledgeBook_C PerkKnowledgeBook.Default__PerkKnowledgeBook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APerkKnowledgeBook_C* APerkKnowledgeBook_C::GetDefaultObj()
{
	static class APerkKnowledgeBook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APerkKnowledgeBook_C*>(APerkKnowledgeBook_C::StaticClass()->DefaultObject);

	return Default;
}

}


