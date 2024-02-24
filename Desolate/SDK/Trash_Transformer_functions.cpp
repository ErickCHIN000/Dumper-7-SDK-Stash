#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Transformer.Trash_Transformer_C
// (Actor)

class UClass* ATrash_Transformer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Transformer_C");

	return Clss;
}


// Trash_Transformer_C Trash_Transformer.Default__Trash_Transformer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Transformer_C* ATrash_Transformer_C::GetDefaultObj()
{
	static class ATrash_Transformer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Transformer_C*>(ATrash_Transformer_C::StaticClass()->DefaultObject);

	return Default;
}

}


