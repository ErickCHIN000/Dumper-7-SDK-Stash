#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ChatboxItem.BP_ChatboxItem_C
// (None)

class UClass* UBP_ChatboxItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ChatboxItem_C");

	return Clss;
}


// BP_ChatboxItem_C BP_ChatboxItem.Default__BP_ChatboxItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ChatboxItem_C* UBP_ChatboxItem_C::GetDefaultObj()
{
	static class UBP_ChatboxItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ChatboxItem_C*>(UBP_ChatboxItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


