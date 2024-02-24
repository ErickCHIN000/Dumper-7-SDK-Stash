#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C
// (Actor)

class UClass* ABP_SkeletalItem_Shield_Back_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Shield_Back_C");

	return Clss;
}


// BP_SkeletalItem_Shield_Back_C BP_SkeletalItem_Shield_Back.Default__BP_SkeletalItem_Shield_Back_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Shield_Back_C* ABP_SkeletalItem_Shield_Back_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Shield_Back_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Shield_Back_C*>(ABP_SkeletalItem_Shield_Back_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C.OnRep_Item Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Shield_Back_C::OnRep_Item_Data()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Shield_Back_C", "OnRep_Item Data");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C.OnLoaded_80ED98D14DF2AA1232DDA287390DB216
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkeletalItem_Shield_Back_C::OnLoaded_80ED98D14DF2AA1232DDA287390DB216(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Shield_Back_C", "OnLoaded_80ED98D14DF2AA1232DDA287390DB216");

	Params::ABP_SkeletalItem_Shield_Back_C_OnLoaded_80ED98D14DF2AA1232DDA287390DB216_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C.UpdateShieldItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Shield_Back_C::UpdateShieldItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Shield_Back_C", "UpdateShieldItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_SkeletalItem_Shield_Back_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Shield_Back_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkeletalItem_Shield_Back.BP_SkeletalItem_Shield_Back_C.ExecuteUbergraph_BP_SkeletalItem_Shield_Back
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMeshableData               CallFunc_GetMeshableData_MeshableData                            (None)
// enum class EDataValid              CallFunc_GetMeshableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SkeletalItem_Shield_Back_C::ExecuteUbergraph_BP_SkeletalItem_Shield_Back(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, const struct FMeshableData& CallFunc_GetMeshableData_MeshableData, enum class EDataValid CallFunc_GetMeshableData_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkeletalItem_Shield_Back_C", "ExecuteUbergraph_BP_SkeletalItem_Shield_Back");

	Params::ABP_SkeletalItem_Shield_Back_C_ExecuteUbergraph_BP_SkeletalItem_Shield_Back_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh = K2Node_DynamicCast_AsSkeletal_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMeshableData_MeshableData = CallFunc_GetMeshableData_MeshableData;
	Parms.CallFunc_GetMeshableData_Paths = CallFunc_GetMeshableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


