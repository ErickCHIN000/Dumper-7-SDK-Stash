#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Book.BP_Book_C
// (Actor)

class UClass* ABP_Book_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Book_C");

	return Clss;
}


// BP_Book_C BP_Book.Default__BP_Book_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Book_C* ABP_Book_C::GetDefaultObj()
{
	static class ABP_Book_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Book_C*>(ABP_Book_C::StaticClass()->DefaultObject);

	return Default;
}

}


