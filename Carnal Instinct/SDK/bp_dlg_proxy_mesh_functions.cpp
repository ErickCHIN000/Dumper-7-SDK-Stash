#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_dlg_proxy_mesh.bp_dlg_proxy_mesh_C
// (Actor)

class UClass* Abp_dlg_proxy_mesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_dlg_proxy_mesh_C");

	return Clss;
}


// bp_dlg_proxy_mesh_C bp_dlg_proxy_mesh.Default__bp_dlg_proxy_mesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_dlg_proxy_mesh_C* Abp_dlg_proxy_mesh_C::GetDefaultObj()
{
	static class Abp_dlg_proxy_mesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_dlg_proxy_mesh_C*>(Abp_dlg_proxy_mesh_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_dlg_proxy_mesh.bp_dlg_proxy_mesh_C.custom_proxy_init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_dlg_proxy_mesh_C::Custom_proxy_init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_mesh_C", "custom_proxy_init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_dlg_proxy_mesh.bp_dlg_proxy_mesh_C.ExecuteUbergraph_bp_dlg_proxy_mesh
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void Abp_dlg_proxy_mesh_C::ExecuteUbergraph_bp_dlg_proxy_mesh(int32 EntryPoint, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_dlg_proxy_mesh_C", "ExecuteUbergraph_bp_dlg_proxy_mesh");

	Params::Abp_dlg_proxy_mesh_C_ExecuteUbergraph_bp_dlg_proxy_mesh_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


