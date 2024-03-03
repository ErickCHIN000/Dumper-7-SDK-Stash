#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass msl_object_game_save_loader.msl_object_game_save_loader_C
// (None)

class UClass* UMsl_object_game_save_loader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("msl_object_game_save_loader_C");

	return Clss;
}


// msl_object_game_save_loader_C msl_object_game_save_loader.Default__msl_object_game_save_loader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsl_object_game_save_loader_C* UMsl_object_game_save_loader_C::GetDefaultObj()
{
	static class UMsl_object_game_save_loader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsl_object_game_save_loader_C*>(UMsl_object_game_save_loader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function msl_object_game_save_loader.msl_object_game_save_loader_C.ExecuteUbergraph_msl_object_game_save_loader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMsl_object_game_save_loader_C::ExecuteUbergraph_msl_object_game_save_loader(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msl_object_game_save_loader_C", "ExecuteUbergraph_msl_object_game_save_loader");

	Params::UMsl_object_game_save_loader_C_ExecuteUbergraph_msl_object_game_save_loader_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


