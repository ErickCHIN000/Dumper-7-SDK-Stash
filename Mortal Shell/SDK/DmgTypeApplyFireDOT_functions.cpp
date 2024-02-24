#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeApplyFireDOT.DmgTypeApplyFireDOT_C
// (None)

class UClass* UDmgTypeApplyFireDOT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeApplyFireDOT_C");

	return Clss;
}


// DmgTypeApplyFireDOT_C DmgTypeApplyFireDOT.Default__DmgTypeApplyFireDOT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeApplyFireDOT_C* UDmgTypeApplyFireDOT_C::GetDefaultObj()
{
	static class UDmgTypeApplyFireDOT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeApplyFireDOT_C*>(UDmgTypeApplyFireDOT_C::StaticClass()->DefaultObject);

	return Default;
}

}


