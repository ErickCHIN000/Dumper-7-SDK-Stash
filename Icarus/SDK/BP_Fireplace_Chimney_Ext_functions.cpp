#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Fireplace_Chimney_Ext.BP_Fireplace_Chimney_Ext_C
// (Actor)

class UClass* ABP_Fireplace_Chimney_Ext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Fireplace_Chimney_Ext_C");

	return Clss;
}


// BP_Fireplace_Chimney_Ext_C BP_Fireplace_Chimney_Ext.Default__BP_Fireplace_Chimney_Ext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Fireplace_Chimney_Ext_C* ABP_Fireplace_Chimney_Ext_C::GetDefaultObj()
{
	static class ABP_Fireplace_Chimney_Ext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Fireplace_Chimney_Ext_C*>(ABP_Fireplace_Chimney_Ext_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Fireplace_Chimney_Ext.BP_Fireplace_Chimney_Ext_C.GetParentFireplace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeployableBase_C*        Parent                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeployable*                 CallFunc_GetAttachedDeployableParent_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_DeployableBase_C*        K2Node_DynamicCast_AsBP_Deployable_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeployableBase_C*        CallFunc_GetParentFireplace_Parent                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fireplace_Chimney_Ext_C::GetParentFireplace(class ABP_DeployableBase_C** Parent, class ADeployable* CallFunc_GetAttachedDeployableParent_ReturnValue, class ABP_DeployableBase_C* K2Node_DynamicCast_AsBP_Deployable_Base, bool K2Node_DynamicCast_bSuccess, class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext, bool K2Node_DynamicCast_bSuccess_1, class ABP_DeployableBase_C* CallFunc_GetParentFireplace_Parent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_Chimney_Ext_C", "GetParentFireplace");

	Params::ABP_Fireplace_Chimney_Ext_C_GetParentFireplace_Params Parms{};

	Parms.CallFunc_GetAttachedDeployableParent_ReturnValue = CallFunc_GetAttachedDeployableParent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Deployable_Base = K2Node_DynamicCast_AsBP_Deployable_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetParentFireplace_Parent = CallFunc_GetParentFireplace_Parent;

	UObject::ProcessEvent(Func, &Parms);

	if (Parent != nullptr)
		*Parent = Parms.Parent;

}


// Function BP_Fireplace_Chimney_Ext.BP_Fireplace_Chimney_Ext_C.GetChildCap
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DeployableBase_C*        ChildCap                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ADeployable*>         CallFunc_GetAttachedDeployableChildren_ReturnValue               (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeployable*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Fireplace_Chimney_Cap_Half_C*K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Fireplace_Chimney_Cap_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_DeployableBase_C*        CallFunc_GetChildCap_ChildCap                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Fireplace_Chimney_Ext_C::GetChildCap(class ABP_DeployableBase_C** ChildCap, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ADeployable*>& CallFunc_GetAttachedDeployableChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ADeployable* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Fireplace_Chimney_Cap_Half_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half, bool K2Node_DynamicCast_bSuccess, class ABP_Fireplace_Chimney_Cap_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap, bool K2Node_DynamicCast_bSuccess_1, class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext, bool K2Node_DynamicCast_bSuccess_2, class ABP_DeployableBase_C* CallFunc_GetChildCap_ChildCap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Fireplace_Chimney_Ext_C", "GetChildCap");

	Params::ABP_Fireplace_Chimney_Ext_C_GetChildCap_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAttachedDeployableChildren_ReturnValue = CallFunc_GetAttachedDeployableChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext = K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetChildCap_ChildCap = CallFunc_GetChildCap_ChildCap;

	UObject::ProcessEvent(Func, &Parms);

	if (ChildCap != nullptr)
		*ChildCap = Parms.ChildCap;

}

}


