#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UserEdge_Jump.UserEdge_Jump_C
// (None)

class UClass* UUserEdge_Jump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserEdge_Jump_C");

	return Clss;
}


// UserEdge_Jump_C UserEdge_Jump.Default__UserEdge_Jump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUserEdge_Jump_C* UUserEdge_Jump_C::GetDefaultObj()
{
	static class UUserEdge_Jump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserEdge_Jump_C*>(UUserEdge_Jump_C::StaticClass()->DefaultObject);

	return Default;
}

}


