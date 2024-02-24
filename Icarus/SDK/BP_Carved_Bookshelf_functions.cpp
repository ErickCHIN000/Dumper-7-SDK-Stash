#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Carved_Bookshelf.BP_Carved_Bookshelf_C
// (Actor)

class UClass* ABP_Carved_Bookshelf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Carved_Bookshelf_C");

	return Clss;
}


// BP_Carved_Bookshelf_C BP_Carved_Bookshelf.Default__BP_Carved_Bookshelf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Carved_Bookshelf_C* ABP_Carved_Bookshelf_C::GetDefaultObj()
{
	static class ABP_Carved_Bookshelf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Carved_Bookshelf_C*>(ABP_Carved_Bookshelf_C::StaticClass()->DefaultObject);

	return Default;
}

}


