#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass msl_object_game_save.msl_object_game_save_C
// (None)

class UClass* UMsl_object_game_save_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("msl_object_game_save_C");

	return Clss;
}


// msl_object_game_save_C msl_object_game_save.Default__msl_object_game_save_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsl_object_game_save_C* UMsl_object_game_save_C::GetDefaultObj()
{
	static class UMsl_object_game_save_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsl_object_game_save_C*>(UMsl_object_game_save_C::StaticClass()->DefaultObject);

	return Default;
}


// Function msl_object_game_save.msl_object_game_save_C.ExecuteUbergraph_msl_object_game_save
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMsl_object_game_save_C::ExecuteUbergraph_msl_object_game_save(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msl_object_game_save_C", "ExecuteUbergraph_msl_object_game_save");

	Params::UMsl_object_game_save_C_ExecuteUbergraph_msl_object_game_save_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


