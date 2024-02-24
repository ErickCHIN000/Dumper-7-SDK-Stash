#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AIManagerInterface.BP_AIManagerInterface_C
// (None)

class UClass* IBP_AIManagerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AIManagerInterface_C");

	return Clss;
}


// BP_AIManagerInterface_C BP_AIManagerInterface.Default__BP_AIManagerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_AIManagerInterface_C* IBP_AIManagerInterface_C::GetDefaultObj()
{
	static class IBP_AIManagerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_AIManagerInterface_C*>(IBP_AIManagerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AIManager_C*             AI_Manager                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBP_AIManagerInterface_C::Return_AI_Manager(class ABP_AIManager_C** AI_Manager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIManagerInterface_C", "Return AI Manager");

	Params::IBP_AIManagerInterface_C_Return_AI_Manager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AI_Manager != nullptr)
		*AI_Manager = Parms.AI_Manager;

}


// Function BP_AIManagerInterface.BP_AIManagerInterface_C.Return AI Manager Settings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_AIOptimization           AI_Settings                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_AIManagerInterface_C::Return_AI_Manager_Settings(struct FS_AIOptimization* AI_Settings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AIManagerInterface_C", "Return AI Manager Settings");

	Params::IBP_AIManagerInterface_C_Return_AI_Manager_Settings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AI_Settings != nullptr)
		*AI_Settings = std::move(Parms.AI_Settings);

}

}


