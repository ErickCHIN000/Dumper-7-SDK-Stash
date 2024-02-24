#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UserEdge_ClimbUp.UserEdge_ClimbUp_C
// (None)

class UClass* UUserEdge_ClimbUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserEdge_ClimbUp_C");

	return Clss;
}


// UserEdge_ClimbUp_C UserEdge_ClimbUp.Default__UserEdge_ClimbUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUserEdge_ClimbUp_C* UUserEdge_ClimbUp_C::GetDefaultObj()
{
	static class UUserEdge_ClimbUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserEdge_ClimbUp_C*>(UUserEdge_ClimbUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


