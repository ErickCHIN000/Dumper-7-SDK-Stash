#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchShySexT_RL.MonarchShySexT_RL_C
// (None)

class UClass* UMonarchShySexT_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchShySexT_RL_C");

	return Clss;
}


// MonarchShySexT_RL_C MonarchShySexT_RL.Default__MonarchShySexT_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchShySexT_RL_C* UMonarchShySexT_RL_C::GetDefaultObj()
{
	static class UMonarchShySexT_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchShySexT_RL_C*>(UMonarchShySexT_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


