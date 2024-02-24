#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Flammable_FLODActor_ResourceNode.BP_Flammable_FLODActor_ResourceNode_C
// (None)

class UClass* UBP_Flammable_FLODActor_ResourceNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Flammable_FLODActor_ResourceNode_C");

	return Clss;
}


// BP_Flammable_FLODActor_ResourceNode_C BP_Flammable_FLODActor_ResourceNode.Default__BP_Flammable_FLODActor_ResourceNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Flammable_FLODActor_ResourceNode_C* UBP_Flammable_FLODActor_ResourceNode_C::GetDefaultObj()
{
	static class UBP_Flammable_FLODActor_ResourceNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Flammable_FLODActor_ResourceNode_C*>(UBP_Flammable_FLODActor_ResourceNode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Flammable_FLODActor_ResourceNode.BP_Flammable_FLODActor_ResourceNode_C.OnUpdateInstanceVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              FireSpread                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FireTemperature                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_FLODActor_ResourceNode_C::OnUpdateInstanceVisuals(float FireSpread, float FireTemperature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_FLODActor_ResourceNode_C", "OnUpdateInstanceVisuals");

	Params::UBP_Flammable_FLODActor_ResourceNode_C_OnUpdateInstanceVisuals_Params Parms{};

	Parms.FireSpread = FireSpread;
	Parms.FireTemperature = FireTemperature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Flammable_FLODActor_ResourceNode.BP_Flammable_FLODActor_ResourceNode_C.ExecuteUbergraph_BP_Flammable_FLODActor_ResourceNode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_FireSpread                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_FireTemperature                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ResourceNodeBase_C*      K2Node_DynamicCast_AsBP_Resource_Node_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBox                        CallFunc_GetBoundingBox_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Flammable_FLODActor_ResourceNode_C::ExecuteUbergraph_BP_Flammable_FLODActor_ResourceNode(int32 EntryPoint, float K2Node_Event_FireSpread, float K2Node_Event_FireTemperature, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_ResourceNodeBase_C* K2Node_DynamicCast_AsBP_Resource_Node_Base, bool K2Node_DynamicCast_bSuccess, const struct FBox& CallFunc_GetBoundingBox_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Flammable_FLODActor_ResourceNode_C", "ExecuteUbergraph_BP_Flammable_FLODActor_ResourceNode");

	Params::UBP_Flammable_FLODActor_ResourceNode_C_ExecuteUbergraph_BP_Flammable_FLODActor_ResourceNode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FireSpread = K2Node_Event_FireSpread;
	Parms.K2Node_Event_FireTemperature = K2Node_Event_FireTemperature;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Resource_Node_Base = K2Node_DynamicCast_AsBP_Resource_Node_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBoundingBox_ReturnValue = CallFunc_GetBoundingBox_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


