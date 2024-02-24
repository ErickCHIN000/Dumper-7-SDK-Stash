#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_IcarusGOAP_CheckForFoundObjects.BTT_IcarusGOAP_CheckForFoundObjects_C
// (None)

class UClass* UBTT_IcarusGOAP_CheckForFoundObjects_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_IcarusGOAP_CheckForFoundObjects_C");

	return Clss;
}


// BTT_IcarusGOAP_CheckForFoundObjects_C BTT_IcarusGOAP_CheckForFoundObjects.Default__BTT_IcarusGOAP_CheckForFoundObjects_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_IcarusGOAP_CheckForFoundObjects_C* UBTT_IcarusGOAP_CheckForFoundObjects_C::GetDefaultObj()
{
	static class UBTT_IcarusGOAP_CheckForFoundObjects_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_IcarusGOAP_CheckForFoundObjects_C*>(UBTT_IcarusGOAP_CheckForFoundObjects_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_IcarusGOAP_CheckForFoundObjects.BTT_IcarusGOAP_CheckForFoundObjects_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_IcarusGOAP_CheckForFoundObjects_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_CheckForFoundObjects_C", "ReceiveExecute");

	Params::UBTT_IcarusGOAP_CheckForFoundObjects_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_IcarusGOAP_CheckForFoundObjects.BTT_IcarusGOAP_CheckForFoundObjects_C.ExecuteUbergraph_BTT_IcarusGOAP_CheckForFoundObjects
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCGOAPController*    K2Node_DynamicCast_AsIcarus_NPCGOAPController                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGOAPAIMemory*         CallFunc_GetAIMemory_ReturnValue                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGOAPAIState*          CallFunc_GetAIState_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusGOAPAIFact           CallFunc_GetClosestKnownInteractable_ReturnValue                 (NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBTT_IcarusGOAP_CheckForFoundObjects_C::ExecuteUbergraph_BTT_IcarusGOAP_CheckForFoundObjects(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UIcarusGOAPAIMemory* CallFunc_GetAIMemory_ReturnValue, class UIcarusGOAPAIState* CallFunc_GetAIState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FIcarusGOAPAIFact& CallFunc_GetClosestKnownInteractable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_IcarusGOAP_CheckForFoundObjects_C", "ExecuteUbergraph_BTT_IcarusGOAP_CheckForFoundObjects");

	Params::UBTT_IcarusGOAP_CheckForFoundObjects_C_ExecuteUbergraph_BTT_IcarusGOAP_CheckForFoundObjects_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;
	Parms.K2Node_DynamicCast_AsIcarus_NPCGOAPController = K2Node_DynamicCast_AsIcarus_NPCGOAPController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetAIMemory_ReturnValue = CallFunc_GetAIMemory_ReturnValue;
	Parms.CallFunc_GetAIState_ReturnValue = CallFunc_GetAIState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetClosestKnownInteractable_ReturnValue = CallFunc_GetClosestKnownInteractable_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


