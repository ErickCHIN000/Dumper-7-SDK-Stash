#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C
// (Actor)

class UClass* ABP_IcarusDropShipSpawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusDropShipSpawn_C");

	return Clss;
}


// BP_IcarusDropShipSpawn_C BP_IcarusDropShipSpawn.Default__BP_IcarusDropShipSpawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusDropShipSpawn_C* ABP_IcarusDropShipSpawn_C::GetDefaultObj()
{
	static class ABP_IcarusDropShipSpawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusDropShipSpawn_C*>(ABP_IcarusDropShipSpawn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C.HideEditorLocator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusDropShipSpawn_C::HideEditorLocator(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusDropShipSpawn_C", "HideEditorLocator");

	Params::ABP_IcarusDropShipSpawn_C_HideEditorLocator_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C.ShowEditorLocator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusDropShipSpawn_C::ShowEditorLocator(const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusDropShipSpawn_C", "ShowEditorLocator");

	Params::ABP_IcarusDropShipSpawn_C_ShowEditorLocator_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C.GetGroupIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_IcarusDropShipSpawn_C::GetGroupIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusDropShipSpawn_C", "GetGroupIndex");

	Params::ABP_IcarusDropShipSpawn_C_GetGroupIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


