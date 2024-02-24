#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Fireplace_Chimney_Cap_Half.BP_Fireplace_Chimney_Cap_Half_C
// (Actor)

class UClass* ABP_Fireplace_Chimney_Cap_Half_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Fireplace_Chimney_Cap_Half_C");

	return Clss;
}


// BP_Fireplace_Chimney_Cap_Half_C BP_Fireplace_Chimney_Cap_Half.Default__BP_Fireplace_Chimney_Cap_Half_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Fireplace_Chimney_Cap_Half_C* ABP_Fireplace_Chimney_Cap_Half_C::GetDefaultObj()
{
	static class ABP_Fireplace_Chimney_Cap_Half_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Fireplace_Chimney_Cap_Half_C*>(ABP_Fireplace_Chimney_Cap_Half_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Fireplace_Chimney_Cap_Half.BP_Fireplace_Chimney_Cap_Half_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Fireplace_Chimney_Cap_Half_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_Chimney_Cap_Half_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Fireplace_Chimney_Cap_Half.BP_Fireplace_Chimney_Cap_Half_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Fireplace_Chimney_Cap_Half_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_Chimney_Cap_Half_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Fireplace_Chimney_Cap_Half.BP_Fireplace_Chimney_Cap_Half_C.ExecuteUbergraph_BP_Fireplace_Chimney_Cap_Half
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeployable*                 CallFunc_GetAttachedDeployableParent_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Fireplace_C*             K2Node_DynamicCast_AsBP_Fireplace                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeployableBase_C*        CallFunc_GetParentFireplace_Parent                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Fireplace_C*             K2Node_DynamicCast_AsBP_Fireplace_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Fireplace_Chimney_Cap_Half_C::ExecuteUbergraph_BP_Fireplace_Chimney_Cap_Half(int32 EntryPoint, class ADeployable* CallFunc_GetAttachedDeployableParent_ReturnValue, class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext, bool K2Node_DynamicCast_bSuccess, class ABP_Fireplace_C* K2Node_DynamicCast_AsBP_Fireplace, bool K2Node_DynamicCast_bSuccess_1, class ABP_DeployableBase_C* CallFunc_GetParentFireplace_Parent, class ABP_Fireplace_C* K2Node_DynamicCast_AsBP_Fireplace_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_Chimney_Cap_Half_C", "ExecuteUbergraph_BP_Fireplace_Chimney_Cap_Half");

	Params::ABP_Fireplace_Chimney_Cap_Half_C_ExecuteUbergraph_BP_Fireplace_Chimney_Cap_Half_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAttachedDeployableParent_ReturnValue = CallFunc_GetAttachedDeployableParent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Fireplace = K2Node_DynamicCast_AsBP_Fireplace;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetParentFireplace_Parent = CallFunc_GetParentFireplace_Parent;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_1 = K2Node_DynamicCast_AsBP_Fireplace_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


