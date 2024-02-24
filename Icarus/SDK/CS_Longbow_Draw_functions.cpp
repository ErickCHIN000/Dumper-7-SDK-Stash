#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Longbow_Draw.CS_Longbow_Draw_C
// (None)

class UClass* UCS_Longbow_Draw_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Longbow_Draw_C");

	return Clss;
}


// CS_Longbow_Draw_C CS_Longbow_Draw.Default__CS_Longbow_Draw_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Longbow_Draw_C* UCS_Longbow_Draw_C::GetDefaultObj()
{
	static class UCS_Longbow_Draw_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Longbow_Draw_C*>(UCS_Longbow_Draw_C::StaticClass()->DefaultObject);

	return Default;
}

}


