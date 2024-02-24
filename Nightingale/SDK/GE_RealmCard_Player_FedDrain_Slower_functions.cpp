#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RealmCard_Player_FedDrain_Slower.GE_RealmCard_Player_FedDrain_Slower_C
// (None)

class UClass* UGE_RealmCard_Player_FedDrain_Slower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RealmCard_Player_FedDrain_Slower_C");

	return Clss;
}


// GE_RealmCard_Player_FedDrain_Slower_C GE_RealmCard_Player_FedDrain_Slower.Default__GE_RealmCard_Player_FedDrain_Slower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RealmCard_Player_FedDrain_Slower_C* UGE_RealmCard_Player_FedDrain_Slower_C::GetDefaultObj()
{
	static class UGE_RealmCard_Player_FedDrain_Slower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RealmCard_Player_FedDrain_Slower_C*>(UGE_RealmCard_Player_FedDrain_Slower_C::StaticClass()->DefaultObject);

	return Default;
}

}


