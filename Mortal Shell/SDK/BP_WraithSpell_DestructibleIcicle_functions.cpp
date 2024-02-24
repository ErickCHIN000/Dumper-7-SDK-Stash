#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WraithSpell_DestructibleIcicle.BP_WraithSpell_DestructibleIcicle_C
// (Actor)

class UClass* ABP_WraithSpell_DestructibleIcicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WraithSpell_DestructibleIcicle_C");

	return Clss;
}


// BP_WraithSpell_DestructibleIcicle_C BP_WraithSpell_DestructibleIcicle.Default__BP_WraithSpell_DestructibleIcicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WraithSpell_DestructibleIcicle_C* ABP_WraithSpell_DestructibleIcicle_C::GetDefaultObj()
{
	static class ABP_WraithSpell_DestructibleIcicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WraithSpell_DestructibleIcicle_C*>(ABP_WraithSpell_DestructibleIcicle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WraithSpell_DestructibleIcicle.BP_WraithSpell_DestructibleIcicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_WraithSpell_DestructibleIcicle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WraithSpell_DestructibleIcicle_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WraithSpell_DestructibleIcicle.BP_WraithSpell_DestructibleIcicle_C.Destroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDestructibleMesh*           Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WraithSpell_DestructibleIcicle_C::Destroy(class UDestructibleMesh* Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WraithSpell_DestructibleIcicle_C", "Destroy");

	Params::ABP_WraithSpell_DestructibleIcicle_C_Destroy_Params Parms{};

	Parms.Mesh = Mesh;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WraithSpell_DestructibleIcicle.BP_WraithSpell_DestructibleIcicle_C.ExecuteUbergraph_BP_WraithSpell_DestructibleIcicle
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDestructibleMesh*           K2Node_CustomEvent_Mesh                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WraithSpell_DestructibleIcicle_C::ExecuteUbergraph_BP_WraithSpell_DestructibleIcicle(int32 EntryPoint, class UDestructibleMesh* K2Node_CustomEvent_Mesh, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WraithSpell_DestructibleIcicle_C", "ExecuteUbergraph_BP_WraithSpell_DestructibleIcicle");

	Params::ABP_WraithSpell_DestructibleIcicle_C_ExecuteUbergraph_BP_WraithSpell_DestructibleIcicle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Mesh = K2Node_CustomEvent_Mesh;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


