#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass o_dlg_pos1A.o_dlg_pos1A_C
// (Actor)

class UClass* AO_dlg_pos1A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("o_dlg_pos1A_C");

	return Clss;
}


// o_dlg_pos1A_C o_dlg_pos1A.Default__o_dlg_pos1A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AO_dlg_pos1A_C* AO_dlg_pos1A_C::GetDefaultObj()
{
	static class AO_dlg_pos1A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AO_dlg_pos1A_C*>(AO_dlg_pos1A_C::StaticClass()->DefaultObject);

	return Default;
}


// Function o_dlg_pos1A.o_dlg_pos1A_C.pack_cameras
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_node                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AO_dlg_pos1A_C::Pack_cameras(bool* Return_node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("o_dlg_pos1A_C", "pack_cameras");

	Params::AO_dlg_pos1A_C_Pack_cameras_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return_node != nullptr)
		*Return_node = Parms.Return_node;

}


// Function o_dlg_pos1A.o_dlg_pos1A_C.pack_widgets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_node                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AO_dlg_pos1A_C::Pack_widgets(bool* Return_node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("o_dlg_pos1A_C", "pack_widgets");

	Params::AO_dlg_pos1A_C_Pack_widgets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Return_node != nullptr)
		*Return_node = Parms.Return_node;

}


// Function o_dlg_pos1A.o_dlg_pos1A_C.pack_actors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Return_node                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_get_actor_actor_proxy                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_get_actor_actor_proxy_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_get_actor_actor_proxy_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AO_dlg_pos1A_C::Pack_actors(bool* Return_node, class AActor* CallFunc_get_actor_actor_proxy, class AActor* CallFunc_get_actor_actor_proxy_1, class AActor* CallFunc_get_actor_actor_proxy_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("o_dlg_pos1A_C", "pack_actors");

	Params::AO_dlg_pos1A_C_Pack_actors_Params Parms{};

	Parms.CallFunc_get_actor_actor_proxy = CallFunc_get_actor_actor_proxy;
	Parms.CallFunc_get_actor_actor_proxy_1 = CallFunc_get_actor_actor_proxy_1;
	Parms.CallFunc_get_actor_actor_proxy_2 = CallFunc_get_actor_actor_proxy_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_node != nullptr)
		*Return_node = Parms.Return_node;

}


// Function o_dlg_pos1A.o_dlg_pos1A_C.ExecuteUbergraph_o_dlg_pos1A
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AO_dlg_pos1A_C::ExecuteUbergraph_o_dlg_pos1A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("o_dlg_pos1A_C", "ExecuteUbergraph_o_dlg_pos1A");

	Params::AO_dlg_pos1A_C_ExecuteUbergraph_o_dlg_pos1A_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

